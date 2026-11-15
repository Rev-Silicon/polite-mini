// Pin-driven, cycle-accurate lockstep testbench. No force/deposit/backdoor writes.
#include "Vsim_top.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include "verilated_cov.h"
extern "C" {
#include "chip.h"
}
#include <array>
#include <cstdint>
#include <cstdlib>
#include <deque>
#include <filesystem>
#include <fstream>
#include <functional>
#include <iomanip>
#include <iostream>
#include <memory>
#include <random>
#include <sstream>
#include <stdexcept>
#include <string>
#include <vector>

#ifndef HAS_BUFFER
#error HAS_BUFFER must match sim_top.HAS_OUTBUF
#endif
namespace fs = std::filesystem;
constexpr uint8_t NOP=0x00, LOAD=0x10, RUN=0x20, DUMP=0x30, ABORT=0x40,
    CLEAR=0x50, FLAGS=0x60, BUFFER=0x70, PSUM=0x80, MUL=0x90, ADD=0xa0, INPUT=0xb0;
constexpr uint64_t HALF_PERIOD_PS=7576; // 66 MHz nominal; no timing model.

struct Options {
    std::string suite="all", trace, coverage, record, replay, stats;
    uint64_t seed=0x504f4c49, cycles=20000, trace_from=0, trace_to=UINT64_MAX;
    bool pins_only=false;
};
static uint64_t number(const std::string& s) {
    size_t n=0; auto v=std::stoull(s,&n,0);
    if(n!=s.size() || s.empty() || s.front()=='-') throw std::runtime_error("Invalid unsigned number: "+s);
    return v;
}
static Options options(int argc,char**argv) {
    Options o;
    for(int a=1;a<argc;++a) {
        std::string k=argv[a];
        auto val=[&](){if(++a==argc) throw std::runtime_error("Missing argument for "+k);return std::string(argv[a]);};
        if(k=="--suite") o.suite=val();
        else if(k=="--seed") o.seed=number(val());
        else if(k=="--cycles") o.cycles=number(val());
        else if(k=="--trace") o.trace=val();
        else if(k=="--trace-from") o.trace_from=number(val());
        else if(k=="--trace-to") o.trace_to=number(val());
        else if(k=="--coverage") o.coverage=val();
        else if(k=="--stats") o.stats=val();
        else if(k=="--record") o.record=val();
        else if(k=="--replay") o.replay=val();
        else if(k=="--pins-only") o.pins_only=true;
        else if(k=="--help") {
            std::cout<<"--suite all|directed|exhaustive|wrap|random --seed N --cycles N\n"
                       "--trace FILE [--trace-from N --trace-to N] --coverage FILE --stats CSV\n"
                       "--record FILE | --replay FILE   --pins-only\n";
            std::exit(0);
        } else throw std::runtime_error("Unknown option: "+k);
    }
    if(o.suite!="all" && o.suite!="directed" && o.suite!="exhaustive" && o.suite!="wrap" && o.suite!="random")
        throw std::runtime_error("Unknown suite: "+o.suite);
    if(!o.record.empty() && !o.replay.empty()) throw std::runtime_error("Choose record OR replay");
    if(o.trace_to<o.trace_from) throw std::runtime_error("Invalid trace range");
    return o;
}
static void parent(const std::string& s) {
    if(!s.empty() && !fs::path(s).parent_path().empty()) fs::create_directories(fs::path(s).parent_path());
}
static std::string hex(uint64_t v) { std::ostringstream s; s<<"0x"<<std::hex<<v;return s.str(); }
static int s4(unsigned v) {return (v&8)?int(v&15)-16:int(v&15);}
static uint32_t raw24(int32_t v) { return uint32_t(v)&0xffffff; }
static std::array<int32_t,4> outer(uint8_t a,uint8_t b) {
    return {s4(a>>4)*s4(b>>4),s4(a>>4)*s4(b),s4(a)*s4(b>>4),s4(a)*s4(b)};
}
struct Counts {
    uint64_t enabled=0,held=0,resets=0,run=0,rejected_run=0,overlap=0;
    uint64_t debug_beats=0,dump_beats=0,debug_stalls=0,dump_stalls=0,run_stalls=0;
    uint64_t positive_wrap=0,negative_wrap=0,clear_overflow=0,phase2_dump=0,freeze_pause=0;
    uint64_t ins[256][2]{};
    bool products[4][256]{};
    uint64_t freezes[2][2]{};
};
class Bench {
public:
    Options opt;
    VerilatedContext ctx;
    Vsim_top dut{&ctx};
    chip_t ref{};
    Counts cov;
    uint64_t cycle=0,checks=0;
    std::string scenario="initialization";
    std::vector<uint8_t> beats;
    std::unique_ptr<VerilatedVcdC> trace;
    std::ofstream record;
    std::deque<std::string> history;
    explicit Bench(Options x):opt(std::move(x)) {
        ctx.traceEverOn(true);
        dut.clk=0; dut.rst_n=1; dut.ena=1; dut.ui_in=0; dut.uio_in=0;
        dut.eval();
        if(!opt.trace.empty()) {
            parent(opt.trace); trace=std::make_unique<VerilatedVcdC>();
            dut.trace(trace.get(),99); trace->open(opt.trace.c_str());
            if(!trace->isOpen()) throw std::runtime_error("Could not open trace");
        }
        if(!opt.record.empty()) {
            parent(opt.record); record.open(opt.record);
            if(!record) throw std::runtime_error("Could not open stimulus record");
            record<<"# POLITE pins v1; CONFIG "<<HAS_BUFFER<<"; R ena / T data instruction ena (decimal)\n";
        }
        reset();
    }
    ~Bench() {dut.final();if(trace) trace->close();}
    void eval(uint64_t dt=1) {
        ctx.timeInc(dt); dut.eval();
        if(trace && cycle>=opt.trace_from && cycle<=opt.trace_to) trace->dump(ctx.time());
        if(ctx.gotFinish()) throw std::runtime_error("RTL requested simulation finish");
    }
    [[noreturn]] void fail(const std::string& what) {
        if(trace) trace->flush();
        std::cerr<<"\nFAIL CONFIG="<<HAS_BUFFER<<" scenario="<<scenario<<" edge="<<cycle
                 <<" time_ps="<<ctx.time()<<" seed="<<opt.seed<<"\n"<<what<<"\n";
        for(const auto& h:history) std::cerr<<h<<"\n";
        std::cerr<<"model: ena_q="<<ref.ena_q<<" phase="<<ref.phase<<" queued="<<hex(ref.in_i_q)
                 <<" run="<<ref.run_busy<<" dump="<<ref.dump_busy<<" idx="<<ref.dump_idx
                 <<" freeze_left="<<ref.fz_left<<"\n";
        throw std::runtime_error("lockstep/requirement failure");
    }
    void require(bool ok,const std::string& what) {++checks;if(!ok) fail(what);}
    void eq(const std::string& name,uint64_t got,uint64_t want) {
        ++checks;if(got!=want) fail(name+": got "+hex(got)+", expected "+hex(want));
    }
    void check() {
        eq("uo_out",dut.uo_out,ref.uo_pad);
        eq("uio_out",dut.uio_out,0);eq("uio_oe",dut.uio_oe,0);
        if(opt.pins_only) return;
        eq("ena_q",dut.ena_q,ref.ena_q);eq("phase",dut.phase,ref.phase);
        eq("otick_q",dut.otick_q,ref.otick_q);eq("in_d_q",dut.in_d_q,ref.in_d_q);
        eq("in_i_q",dut.in_i_q,ref.in_i_q);eq("uo_q",dut.uo_q,ref.uo_q);
        eq("inbuf",dut.inbuf,ref.buf);eq("run_busy",dut.run_busy,ref.run_busy);
        eq("dump_busy",dut.dump_busy,ref.dump_busy);eq("fz_open",dut.fz_open,ref.fz_left>0);
        eq("illegal",dut.illegal,ref.illegal);eq("ovf",dut.ovf,ref.ovf);
        for(int p=0;p<4;++p) {
            eq("psum["+std::to_string(p)+"]",dut.psum[p],raw24(ref.psum[p]));
            eq("product["+std::to_string(p)+"]",dut.product[p],uint8_t(ref.mul[p]));
        }
    }
    void reset(int ena=1) {
        if(record) record<<"R "<<ena<<"\n";
        history.clear(); ++cov.resets;
        dut.clk=0;dut.rst_n=1;dut.ena=ena;eval(1000);
        // Assert reset between clock edges, even when old ena_q is zero.
        dut.rst_n=0;chip_reset(&ref,HAS_BUFFER,0);eval(1000);check();
        for(int n=0;n<2;++n) {
            dut.clk=1;eval(HALF_PERIOD_PS);check();
            dut.clk=0;eval(HALF_PERIOD_PS);check();
        }
        dut.rst_n=1;eval(1000);check();beats.clear();
    }
    void count(const chip_t& before) {
        if(!before.ena_q) {
            ++cov.held;cov.debug_stalls+=before.fz_left>0;
            cov.dump_stalls+=before.dump_busy!=0;cov.run_stalls+=before.run_busy!=0;return;
        }
        ++cov.enabled;auto i=before.in_i_q;int op=i>>4;
        ++cov.ins[i][before.phase];
        if(op==2) {
            if(before.fz_left) ++cov.rejected_run;
            else {
                ++cov.run;cov.overlap+=before.run_busy!=0;
                for(int p=0;p<4;++p) {
                    unsigned a=p<2?before.buf>>4:before.buf&15;
                    unsigned b=p%2==0?before.in_d_q>>4:before.in_d_q&15;
                    cov.products[p][16*a+b]=true;
                }
            }
        }
        if(before.run_busy) for(int p=0;p<4;++p) {
            int64_t s=int64_t(before.psum[p])+before.mul[p];
            cov.positive_wrap+=s>8388607;cov.negative_wrap+=s< -8388608;
            cov.clear_overflow+=((i==0x51) && (s>8388607 || s< -8388608));
        }
        cov.phase2_dump+=(op==3 && HAS_BUFFER && !before.dump_busy && before.run_busy);
        if(ref.frozen) ++cov.freezes[ref.fz_n==6][before.phase];
        cov.freeze_pause+=(before.dump_busy && before.phase && ref.ofz);
    }
    uint8_t tick(uint8_t d=0,uint8_t ins=NOP,int ena=1) {
        if(record) record<<"T "<<unsigned(d)<<" "<<unsigned(ins)<<" "<<ena<<"\n";
        std::ostringstream line;
        line<<"edge "<<(cycle+1)<<" pins d="<<hex(d)<<" ins="<<hex(ins)<<" ena="<<ena
            <<" executes="<<hex(ref.in_i_q)<<" enabled="<<ref.ena_q<<" phase="<<ref.phase;
        history.push_back(line.str());if(history.size()>16) history.pop_front();
        dut.ui_in=d;dut.uio_in=ins;dut.ena=ena;
        eval(1);check(); // input changes cannot update sequential outputs
        chip_t before=ref;
        uint8_t expected=chip_step_ena(&ref,d,ins,ena);
        dut.clk=1;++cycle;eval(HALF_PERIOD_PS-1);check();
        eq("chip_step_ena return",dut.uo_out,expected);count(before);
        if(before.ena_q && before.otick_q) {
            beats.push_back(dut.uo_out);
            cov.debug_beats+=(dut.uo_out&0x80)!=0;
            cov.dump_beats+=(dut.uo_out&0x40)!=0;
            require((dut.uo_out&0xc0)!=0xc0,"Debug and dump markers asserted together");
        }
        dut.clk=0;eval(HALF_PERIOD_PS);check();
        return dut.uo_out;
    }
    void idle(unsigned n=1) {for(unsigned j=0;j<n;++j) tick();}
    // Drive a command for one sampled pin edge, then NOP to execute it.
    // Use tick directly for back-to-back instructions. No extra hidden waits.
    void cmd(uint8_t ins,uint8_t d=0) {tick(d,ins);tick();}
    void at_phase(uint8_t ins,uint8_t d,int phase) {
        require(ref.ena_q==1,"at_phase needs enabled clock");
        if((ref.phase^1)!=phase) idle();
        cmd(ins,d);
    }
    template<class F> void target(F pred,uint8_t ins,uint8_t d=0,unsigned limit=128) {
        // Predict the state at the edge that will EXECUTE this command.
        // Timing is selected from the independent C model, never from the DUT.
        for(unsigned n=0;n<limit;++n) {
            chip_t future=ref;chip_step_ena(&future,d,ins,1);
            if(pred(future)) {cmd(ins,d);return;} idle();
        }
        fail("Could not reach directed boundary");
    }
    std::vector<uint8_t> marked(size_t begin,uint8_t marker) {
        std::vector<uint8_t> out;
        for(size_t k=begin;k<beats.size();++k) if(beats[k]&marker) out.push_back(beats[k]&15);
        return out;
    }
    void packet(size_t begin,uint8_t marker,const std::vector<uint32_t>& words,unsigned width) {
        auto n=marked(begin,marker);eq("marked nibble count",n.size(),words.size()*width);
        for(size_t w=0;w<words.size();++w) {
            uint32_t v=0;for(unsigned j=0;j<width;++j) v|=uint32_t(n[w*width+j])<<(4*j);
            eq("decoded word "+std::to_string(w),v,words[w]&((1u<<(4*width))-1));
        }
    }
    void read(uint8_t ins,uint8_t d,uint32_t want,unsigned width,int phase=-1) {
        idle(16);size_t begin=beats.size();
        if(phase<0) cmd(ins,d);else at_phase(ins,d,phase);
        idle(18);packet(begin,0x80,{want},width);
    }
    void sums(const std::array<int32_t,4>& want) {
        for(int p=0;p<4;++p) read(PSUM|p,0,raw24(want[p]),6);
    }
    void section(const std::string& s) {scenario=s;std::cout<<"[RUN] "<<s<<"\n";}
    void report() {
        const std::string label=opt.replay.empty()?opt.suite:"replay";
        std::ostringstream s;
        s<<"metric,value\nconfig,"<<HAS_BUFFER<<"\nseed,"<<opt.seed<<"\nsuite,"<<label
         <<"\nedges,"<<cycle<<"\nchecks,"<<checks<<"\nresets,"<<cov.resets
         <<"\nenabled,"<<cov.enabled<<"\nheld,"<<cov.held<<"\naccepted_runs,"<<cov.run
         <<"\nrejected_runs,"<<cov.rejected_run<<"\noverlapping_runs,"<<cov.overlap
         <<"\ndebug_beats,"<<cov.debug_beats<<"\ndump_beats,"<<cov.dump_beats
         <<"\ndebug_stalls,"<<cov.debug_stalls<<"\ndump_stalls,"<<cov.dump_stalls
         <<"\nrun_stalls,"<<cov.run_stalls<<"\npositive_wrap_pe_events,"<<cov.positive_wrap
         <<"\nnegative_wrap_pe_events,"<<cov.negative_wrap
         <<"\nclear_and_new_overflow_pe_events,"<<cov.clear_overflow
         <<"\nphase2_dump_loads,"<<cov.phase2_dump<<"\ndump_freeze_output_ticks,"<<cov.freeze_pause<<"\n";
        for(int p=0;p<4;++p) {
            unsigned n=0;for(bool hit:cov.products[p])n+=hit;
            s<<"pe"<<p<<"_signed_operand_pairs,"<<n<<"\n";
        }
        for(int n=0;n<2;++n)for(int p=0;p<2;++p)
            s<<"freeze_"<<(n?6:2)<<"_nibbles_phase"<<p<<","<<cov.freezes[n][p]<<"\n";
        for(unsigned i=0;i<256;++i)for(int p=0;p<2;++p)
            s<<"instruction_"<<hex(i)<<"_phase"<<p<<","<<cov.ins[i][p]<<"\n";
        if(!opt.stats.empty()) {parent(opt.stats);std::ofstream f(opt.stats);f<<s.str();if(!f) fail("Writing stats failed");}
        if(!opt.coverage.empty()) {parent(opt.coverage);ctx.coveragep()->write(opt.coverage.c_str());}
        std::cout<<"PASS CONFIG="<<HAS_BUFFER<<" suite="<<label<<" seed="<<opt.seed
                 <<" edges="<<cycle<<" checks="<<checks<<"\n";
    }
};

static void directed(Bench& t) {
    t.section("asynchronous reset, input/pad latency, registered enable");
    t.reset(0);t.tick(0x11,LOAD,0); // reset ena_q=1 permits this last enabled edge
    t.tick(0xff,RUN,0);t.tick(0xee,LOAD,0);t.tick(0xdd,DUMP,1);
    t.eq("buffer held until resumed core edge",t.ref.buf,0);
    t.tick(0x5a,LOAD);t.eq("resume executes held LOAD",t.ref.buf,0x11);
    t.idle();t.eq("new LOAD subsequently executes",t.ref.buf,0x5a);
    t.read(BUFFER,0,0x5a,2);
    for(uint8_t op:{RUN,INPUT,PSUM,DUMP}) {
        t.reset();t.cmd(LOAD,0x3f);t.tick(0x21,op);t.tick(0,0,0);
        for(unsigned i=0;i<9;++i)t.tick(uint8_t(i*27),uint8_t(0xf0|i),0);
        t.tick(0xff,0xff,1);t.idle(64);
        t.tick(0,0,0);t.tick(0,0,0);t.reset(0);t.tick(0xff,0xff,0);t.reset();
    }
    for(uint8_t op:{RUN,INPUT,PSUM,DUMP}) {
        t.reset();t.cmd(LOAD,0x11);t.tick(0x22,op);
        t.tick(0,0,0);t.tick(0xff,0xff,0);
        t.reset(0);t.tick(0,0,1);t.idle(4);
        t.sums({0,0,0,0});
    }
    t.section("signed PE order, pipelined RUN, LOAD overlap, sticky products");
    t.reset();t.tick(0x8f,LOAD);t.tick(0x7e,RUN);t.tick(0x93,RUN);t.tick(0x55,LOAD);t.idle(3);
    auto a=outer(0x8f,0x7e),b=outer(0x8f,0x93);
    std::array<int32_t,4> total{};
    for(int p=0;p<4;++p)total[p]=a[p]+b[p];
    t.sums(total);t.read(BUFFER,0,0x55,2);
    for(int p=0;p<4;++p) {t.read(MUL|p,0,uint8_t(b[p]),2);t.read(ADD|p,0,raw24(total[p]),6);}
    t.cmd(CLEAR|8);t.sums({0,0,0,0});
    for(int p=0;p<4;++p)t.read(MUL|p,0,uint8_t(b[p]),2);

    t.section("all debug selectors/aliases, pre-add PSUM versus pending ADD");
    for(int phase=0;phase<2;++phase) {
        t.reset();t.read(INPUT,0xa5,0xa5,2,phase);
        t.reset();t.at_phase(FLAGS,0,phase);t.eq("flags capture phase",t.ref.fz_val,0x80u|(phase<<2));
        t.idle(16);t.packet(0,0x80,{uint32_t(0x80|(phase<<2))},2);
        for(int op=8;op<=10;++op)for(int arg=0;arg<16;++arg) {
            t.reset();t.cmd(LOAD,0x3f);
            // Select the phase of the debug command, maintaining RUN adjacency.
            if(t.ref.phase!=phase)t.idle();
            size_t start=t.beats.size();
            t.tick(0x21,RUN);t.tick(0,uint8_t((op<<4)|arg));t.idle(20);
            auto prod=outer(0x3f,0x21);int p=arg&3;
            uint32_t expected=op==8?0:op==9?uint8_t(prod[p]):raw24(prod[p]);
            t.packet(start,0x80,{expected},op==9?2:6);
            t.sums(prod);
        }
    }
    t.section("DEBUG_FLAGS pending RUN and busy-at-start dump bits");
    for(int phase=0;phase<2;++phase) {
        t.reset();t.cmd(LOAD,0x11);
        if(t.ref.phase!=phase)t.idle();
        size_t begin=t.beats.size();t.tick(0x11,RUN);t.tick(0,FLAGS);t.idle(16);
        t.packet(begin,0x80,{uint32_t(0x81|(phase<<2))},2);
        if(HAS_BUFFER) {
            t.reset();t.cmd(DUMP);begin=t.beats.size();t.at_phase(FLAGS,0,phase);t.idle(16);
            t.packet(begin,0x80,{uint32_t(0xca|(phase<<2))},2);t.idle(64);
        }
    }
    t.section("freeze length, first legal edge, blocked RUN and nested debug");
    for(int phase=0;phase<2;++phase)for(unsigned n:{2u,6u}) {
        const unsigned window=2*n;
        for(unsigned offset=1;offset<=window;++offset)for(uint8_t attempt:{RUN,INPUT}) {
            t.reset();t.cmd(LOAD,0x11);
            if((t.ref.phase^1)!=phase)t.idle();
            size_t begin=t.beats.size();
            t.tick(n==2?0xab:0,n==2?INPUT:PSUM);
            // Pin commands separated by offset edges execute offset core edges apart.
            t.idle(offset-1);t.tick(0x22,attempt);t.idle(20);
            bool blocked=offset<window;
            t.eq("freeze collision legality",t.ref.illegal,blocked);
            if(blocked || attempt==RUN)t.packet(begin,0x80,{n==2?0xabu:0u},n);
        }
        // Explicit earliest following edge (k+1) via back-to-back pin commands.
        t.reset();t.cmd(LOAD,0x11);size_t begin=t.beats.size();
        t.tick(0xab,n==2?INPUT:PSUM);t.tick(0x22,RUN);t.idle(20);
        t.eq("RUN on k+1 rejected",t.ref.illegal,1);t.eq("rejected RUN retains product",t.ref.mul[0],0);
        t.packet(begin,0x80,{n==2?0xabu:0u},n);
    }
    t.section("complete instruction-byte and CLEAR mask sweeps in both phases");
    for(int phase=0;phase<2;++phase)for(unsigned ins=0;ins<256;++ins) {
        t.reset();t.cmd(LOAD,0xa7);t.at_phase(uint8_t(ins),0x3f,phase);t.idle(64);
    }
    // Run every CLEAR mask during phase-2 and dump-busy. An illegal combined
    // mask must not partially clear flags/input/sums/output storage.
    for(unsigned mask=0;mask<16;++mask) {
        t.reset();t.cmd(LOAD,0x3f);t.cmd(0xc0);
        t.tick(0x21,RUN);t.tick(0,CLEAR|mask);t.idle(3);
        t.eq("busy CLEAR all-or-nothing buffer",t.ref.buf,
             ((mask&8)||(!HAS_BUFFER&&(mask&4)))?0x3f:(mask&2?0:0x3f));
        t.sums(outer(0x3f,0x21));
        if(HAS_BUFFER) {
            t.reset();t.cmd(LOAD,0x3f);t.cmd(DUMP);t.cmd(CLEAR|mask);t.idle(64);
        }
    }
    for(unsigned bank=1;bank<16;++bank) {
        t.reset();t.cmd(FLAGS|bank);t.idle(16);
        t.eq("invalid bank illegal",t.ref.illegal,1);t.eq("invalid bank does not freeze",t.marked(0,0x80).size(),0);
    }
    if(!HAS_BUFFER) {
        for(uint8_t op:{DUMP,ABORT,uint8_t(CLEAR|4),uint8_t(CLEAR|15)}) {
            t.reset();t.cmd(op);t.idle(8);t.eq("no-buffer illegal",t.ref.illegal,1);
            t.eq("no-buffer cannot emit dump",t.marked(0,0x40).size(),0);
        }
        return;
    }
    t.section("post-add snapshot, 24-nibble dump, concurrent compute, debug pause");
    for(int phase=0;phase<2;++phase) {
        t.reset();t.cmd(LOAD,0x3f);
        if(t.ref.phase!=phase)t.idle();
        size_t begin=t.beats.size();
        t.tick(0x21,RUN);t.tick(0,DUMP);t.tick(0x77,RUN);t.idle(3);
        t.cmd(INPUT,0xab);t.tick(0,0,0);
        for(int j=0;j<7;++j)t.tick(0xff,0xff,0);
        t.tick(0xff,0xff,1);t.idle(80);
        auto p=outer(0x3f,0x21);std::vector<uint32_t> expected;
        for(auto v:p)expected.push_back(raw24(v));
        t.packet(begin,0x40,expected,6);t.packet(begin,0x80,{0xab},2);
        auto extra=outer(0x3f,0x77);for(int k=0;k<4;++k)p[k]+=extra[k];t.sums(p);
    }
    t.section("dump last-nibble collisions, abort, reload and debug on final beat");
    for(uint8_t op:{DUMP,uint8_t(CLEAR|4),ABORT,FLAGS,PSUM}) {
        t.reset();t.cmd(LOAD,0x3f);t.tick(0x21,RUN);t.cmd(DUMP);
        t.target([](const chip_t& c){return c.dump_busy&&c.dump_idx==23&&c.phase==1;},op);
        if(op==DUMP || op==(CLEAR|4))t.eq("last beat is busy-at-start",t.ref.illegal,1);
        t.idle(64);
    }
    for(unsigned offset:{0u,1u,2u,23u,44u}) {
        t.reset();t.cmd(DUMP);t.idle(offset);t.cmd(ABORT);t.idle(6);
        t.eq("abort stops stream",t.ref.dump_busy,0);
        size_t begin=t.beats.size();t.cmd(DUMP);t.idle(60);t.packet(begin,0x40,{0,0,0,0},6);
    }
    // Legal DUMP_LOAD during debug; abort during an open freeze; LOAD/CLEAR
    // during a freeze must not mutate its already captured debug byte.
    t.reset();t.cmd(LOAD,0xab);size_t begin=t.beats.size();
    t.tick(0,BUFFER);t.tick(0,DUMP);t.tick(0xcd,LOAD);t.tick(0,ABORT);t.idle(64);
    t.packet(begin,0x80,{0xab},2);t.eq("abort inside freeze",t.ref.dump_busy,0);
    t.read(BUFFER,0,0xcd,2);
}

static void exhaustive(Bench& t) {
    t.section("all 65,536 packed operand-byte pairs, all four lanes");t.reset();
    for(unsigned a=0;a<256;++a)for(unsigned b=0;b<256;++b) {
        t.tick(uint8_t(a),LOAD);t.tick(uint8_t(b),RUN);t.tick();
        // Next iteration's LOAD input edge also retires the previous product.
    }
    t.idle(4);std::array<int32_t,4> final{};
    for(unsigned a=0;a<256;++a)for(unsigned b=0;b<256;++b) {
        auto p=outer(uint8_t(a),uint8_t(b));for(int k=0;k<4;++k)final[k]+=p[k];
    }
    t.sums(final);
    for(int p=0;p<4;++p)for(int k=0;k<256;++k)
        t.require(t.cov.products[p][k],"Missing signed operand pair PE="+std::to_string(p));
}

static void wrap(Bench& t) {
    t.section("real pin traffic through positive and negative 24-bit wraps");
    // No hierarchical initialization: +64 needs 131072 adds to overflow;
    // -56 needs 149797. CLEAR flags on the exact overflowing phase-2 tick.
    for(bool negative:{false,true}) {
        t.reset();t.cmd(LOAD,0x88);
        const unsigned runs=negative?149797u:131072u;
        uint8_t bus=negative?0x77:0x88;
        for(unsigned n=0;n<runs;++n)t.tick(bus,RUN);
        t.tick(0,CLEAR|1);t.tick();
        t.eq("new overflow survives CLEAR flags",t.ref.ovf,1);t.idle(6);
        int64_t wide=int64_t(runs)*(negative?-56:64);
        uint32_t raw=uint32_t(wide)&0xffffff;
        int32_t val=raw&0x800000?int32_t(raw)-0x1000000:int32_t(raw);
        t.sums({val,val,val,val});t.read(FLAGS,0,t.ref.phase?0x90:0x94,2); // read aligns after even idle
        t.cmd(CLEAR|1);t.idle(6);t.eq("sticky overflow clear",t.ref.ovf,0);
        t.read(ADD,0,raw,6);t.eq("idle ADD has no overflow side effect",t.ref.ovf,0);
    }
    t.require(t.cov.positive_wrap && t.cov.negative_wrap,"Both overflow directions must occur");
    t.require(t.cov.clear_overflow>=8,"CLEAR/new-overflow collision must hit all four PEs in both directions");
}
static void random_suite(Bench& t) {
    t.section("seeded arbitrary pins, stalls, resets and compute-heavy traffic");t.reset();
    std::mt19937_64 rng(t.opt.seed);
    unsigned stall=0;
    for(uint64_t n=0;n<t.opt.cycles;++n) {
        if(n && n%997==0)t.reset(int(rng()&1));
        if(!stall && rng()%71==0)stall=unsigned(rng()%32)+1;
        int ena=stall?0:1;if(stall)--stall;
        uint8_t ins=uint8_t(rng()),d=uint8_t(rng());
        if((n/500)%2) { // Leave room for long useful arithmetic runs.
            unsigned choice=unsigned(rng()%10);
            ins=choice<5?RUN:choice<7?LOAD:choice==7?NOP:choice==8?uint8_t(CLEAR|1):DUMP;
        }
        t.tick(d,ins,ena);
    }
    t.idle(96);
    // Observe accumulated state through pins too, including --pins-only runs.
    std::array<int32_t,4> expected{};for(int p=0;p<4;++p)expected[p]=t.ref.psum[p];
    t.sums(expected);
}
static void replay(Bench& t) {
    t.section("replayed pin stimulus");std::ifstream f(t.opt.replay);
    if(!f)throw std::runtime_error("Cannot open replay file");
    std::string s;unsigned line=0;
    while(std::getline(f,s)) {
        ++line;if(s.empty()||s[0]=='#')continue;
        std::istringstream in(s);char kind;unsigned a,b,c;std::string extra;in>>kind;
        if(kind=='R' && in>>a && a<2 && !(in>>extra))t.reset(a);
        else if(kind=='T' && in>>a>>b>>c && a<256&&b<256&&c<2 && !(in>>extra))t.tick(a,b,c);
        else throw std::runtime_error("Bad replay line "+std::to_string(line));
    }
}
int main(int argc,char**argv) {
    try {
        Options o=options(argc,argv);Bench t(o);
        if(!o.replay.empty()) replay(t);
        else {
            if(o.suite=="all"||o.suite=="directed") directed(t);
            if(o.suite=="all"||o.suite=="exhaustive") exhaustive(t);
            if(o.suite=="all"||o.suite=="wrap") wrap(t);
            if(o.suite=="all"||o.suite=="random") random_suite(t);
        }
        if(o.replay.empty() && o.suite=="all") {
            for(unsigned i=0;i<256;++i)for(int p=0;p<2;++p)
                t.require(t.cov.ins[i][p]>0,"Instruction/phase coverage hole");
            for(int n=0;n<2;++n)for(int p=0;p<2;++p)
                t.require(t.cov.freezes[n][p]>0,"Debug length/phase coverage hole");
            t.require(t.cov.run_stalls && t.cov.debug_stalls,"Missing RUN/debug enable stall");
            if(HAS_BUFFER)t.require(t.cov.dump_stalls && t.cov.phase2_dump && t.cov.freeze_pause,
                                    "Missing dump stall/capture/pause coverage");
        }
        t.report();return 0;
    } catch(const std::exception& e) {std::cerr<<"ERROR: "<<e.what()<<"\n";return 1;}
}
