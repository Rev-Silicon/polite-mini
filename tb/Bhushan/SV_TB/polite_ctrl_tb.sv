`timescale 1ns/1ps
`include "../design/polite_ctrl.sv"

class ctrl_txn;
    rand bit       en;
    rand bit [7:0] d;
    rand bit [3:0] op;
    rand bit [3:0] arg;
    rand bit       dump_busy;
    rand bit       fz_open;
    rand bit       pe_ovf_any;

    // Mostly enabled, mostly legal opcodes, busy/ovf inputs set now and then
    constraint c_en   { en         dist {1'b1 := 9, 1'b0 := 1}; }
    constraint c_op   { op         dist {[4'h0:4'h5] :/ 70, [4'h6:4'hB] :/ 20, [4'hC:4'hF] :/ 10}; }
    constraint c_dump { dump_busy  dist {1'b0 := 3, 1'b1 := 1}; }
    constraint c_fz   { fz_open    dist {1'b0 := 3, 1'b1 := 1}; }
    constraint c_ovf  { pe_ovf_any dist {1'b0 := 4, 1'b1 := 1}; }

    function bit [7:0] ins();
        return {op, arg};
    endfunction
endclass
/* verilator lint_on DECLFILENAME */

module tb_polite_ctrl;

    timeunit 1ns; timeprecision 1ps;

    localparam bit  HAS_OUTBUF = 1'b1;
    localparam int  NUM_RANDOM = 2000;

    localparam logic [3:0] OP_NOP   = 4'h0, OP_LOAD  = 4'h1, OP_RUN   = 4'h2,
                           OP_DLOAD = 4'h3, OP_DABRT = 4'h4, OP_CLEAR = 4'h5,
                           OP_DFLAG = 4'h6, OP_DINP  = 4'hB;

    // ---------------------------------------------------------------- DUT I/O
    logic       clk;
    logic       rst_n;
    logic       en;
    logic [7:0] d;
    logic [7:0] ins;
    logic       dump_busy;
    logic       fz_open;
    logic       pe_ovf_any;

    logic       phase;
    logic       run_busy;
    logic [7:0] inbuf;
    logic       illegal;
    logic       ovf;
    logic       illegal_d;
    logic       ovf_d;
    logic       run_now;
    logic       acc_en;
    logic       clr_psum;
    logic       clr_outbuf;
    logic       dump_load;
    logic       dump_abort;
    logic       dbg_start;
    logic [3:0] dbg_op;
    logic [1:0] dbg_pe;
    logic [7:0] status;

    polite_ctrl #(.HAS_OUTBUF(HAS_OUTBUF)) dut (
        .clk        (clk),
        .rst_n      (rst_n),
        .en         (en),
        .d          (d),
        .ins        (ins),
        .dump_busy  (dump_busy),
        .fz_open    (fz_open),
        .pe_ovf_any (pe_ovf_any),
        .phase      (phase),
        .run_busy   (run_busy),
        .inbuf      (inbuf),
        .illegal    (illegal),
        .ovf        (ovf),
        .illegal_d  (illegal_d),
        .ovf_d      (ovf_d),
        .run_now    (run_now),
        .acc_en     (acc_en),
        .clr_psum   (clr_psum),
        .clr_outbuf (clr_outbuf),
        .dump_load  (dump_load),
        .dump_abort (dump_abort),
        .dbg_start  (dbg_start),
        .dbg_op     (dbg_op),
        .dbg_pe     (dbg_pe),
        .status     (status)
    );

    // ------------------------------------------------------ waveform helpers
    // test_step labels each scenario of the hold test in the waveform;
    // cmd_strobes groups every command output that must be 0 on a hold edge.
    int         test_step = 0;
    logic [6:0] cmd_strobes;
    assign cmd_strobes = {run_now, acc_en, clr_psum, clr_outbuf,
                          dump_load, dump_abort, dbg_start};

    // ------------------------------------------------------------------ clock
    // 66 MHz core clock: period 15.152 ns
    initial clk = 1'b0;
    always #7.576 clk = ~clk;

    // -------------------------------------------------------- reference model
    typedef struct packed {
        logic       illegal_d;
        logic       ovf_d;
        logic       run_now;
        logic       acc_en;
        logic       clr_psum;
        logic       clr_outbuf;
        logic       dump_load;
        logic       dump_abort;
        logic       dbg_start;
        logic [3:0] dbg_op;
        logic [1:0] dbg_pe;
        logic [7:0] status;
        logic [7:0] inbuf_d;
    } ctrl_exp_t;

    // Model state (mirrors the DUT registers)
    logic       m_phase;
    logic       m_run_busy;
    logic [7:0] m_inbuf;
    logic       m_illegal;
    logic       m_ovf;

    ctrl_exp_t  exp_now;
    int         err_count = 0;
    int         chk_count = 0;

    function automatic ctrl_exp_t model_comb();
        ctrl_exp_t  e;
        logic [3:0] op_v   = ins[7:4];
        logic [3:0] arg_v  = ins[3:0];
        logic       no_ob  = !HAS_OUTBUF;
        logic       is_dbg, bad_bank, dbg_req, clr_coll, clr_ok, clr_flg;
        logic       ill_set, acc_ovf;

        is_dbg   = (op_v >= OP_DFLAG) && (op_v <= OP_DINP);
        bad_bank = (op_v == OP_DFLAG) && (arg_v != 4'h0);
        dbg_req  = is_dbg && !bad_bank;
        clr_coll = (arg_v[3] && m_run_busy) || (arg_v[2] && (dump_busy || no_ob));
        clr_ok   = (op_v == OP_CLEAR) && !clr_coll;
        clr_flg  = clr_ok && arg_v[0];
        acc_ovf  = m_run_busy && pe_ovf_any;

        ill_set  = ((op_v == OP_RUN)   && fz_open)
                 | ((op_v == OP_DLOAD) && (dump_busy || no_ob))
                 | ((op_v == OP_DABRT) && no_ob)
                 | ((op_v == OP_CLEAR) && clr_coll)
                 | bad_bank
                 | (dbg_req && fz_open)
                 | (op_v > OP_DINP);

        // SPEC section 2: a hold edge executes no command and changes no
        // state, so every command output is gated with en.
        e.run_now    = en && (op_v == OP_RUN) && !fz_open;
        e.acc_en     = en && m_run_busy;
        e.clr_psum   = en && clr_ok && arg_v[3];
        e.clr_outbuf = en && clr_ok && arg_v[2];
        e.dump_load  = en && (op_v == OP_DLOAD) && !dump_busy && !no_ob;
        e.dump_abort = en && (op_v == OP_DABRT) && !no_ob;
        e.dbg_start  = en && dbg_req && !fz_open;
        e.dbg_op     = op_v;
        e.dbg_pe     = arg_v[1:0];
        e.illegal_d  = ill_set | (m_illegal & ~clr_flg);
        e.ovf_d      = acc_ovf | (m_ovf & ~clr_flg);
        e.status     = {1'b1, dump_busy, m_illegal, m_ovf | acc_ovf,
                        dump_busy, m_phase, dump_busy, m_run_busy};
        e.inbuf_d    = (op_v == OP_LOAD)          ? d     :
                       (clr_ok && arg_v[1])       ? 8'h00 : m_inbuf;
        return e;
    endfunction

    task automatic model_reset();
        m_phase    = 1'b0;
        m_run_busy = 1'b0;
        m_inbuf    = 8'h00;
        m_illegal  = 1'b0;
        m_ovf      = 1'b0;
    endtask

    task automatic model_clock();
        if (en) begin
            m_phase    = ~m_phase;
            m_run_busy = exp_now.run_now;
            m_inbuf    = exp_now.inbuf_d;
            m_illegal  = exp_now.illegal_d;
            m_ovf      = exp_now.ovf_d;
        end
    endtask

    // -------------------------------------------------------------- checkers
    `define CHECK(sig, expv) \
        begin \
            chk_count++; \
            if ((sig) !== (expv)) begin \
                err_count++; \
                $error("[%0t] %s mismatch: got %0h exp %0h (ins=%02h d=%02h)", \
                       $time, `"sig`", sig, expv, ins, d); \
            end \
        end

    task automatic check_comb();
        exp_now = model_comb();
        `CHECK(illegal_d,  exp_now.illegal_d)
        `CHECK(ovf_d,      exp_now.ovf_d)
        `CHECK(run_now,    exp_now.run_now)
        `CHECK(acc_en,     exp_now.acc_en)
        `CHECK(clr_psum,   exp_now.clr_psum)
        `CHECK(clr_outbuf, exp_now.clr_outbuf)
        `CHECK(dump_load,  exp_now.dump_load)
        `CHECK(dump_abort, exp_now.dump_abort)
        `CHECK(dbg_start,  exp_now.dbg_start)
        `CHECK(dbg_op,     exp_now.dbg_op)
        `CHECK(dbg_pe,     exp_now.dbg_pe)
        `CHECK(status,     exp_now.status)
    endtask

    // Explicit hold-edge check with a readable message
    task automatic check_hold_quiet();
        if (en) return;
        chk_count++;
        if (cmd_strobes !== 7'b0) begin
            err_count++;
            $error("[%0t] step %0d: command output asserted on a hold edge (ins=%02h): run_now=%b acc_en=%b clr_psum=%b clr_outbuf=%b dump_load=%b dump_abort=%b dbg_start=%b",
                   $time, test_step, ins, run_now, acc_en, clr_psum, clr_outbuf,
                   dump_load, dump_abort, dbg_start);
        end
    endtask

    task automatic check_regs();
        `CHECK(phase,    m_phase)
        `CHECK(run_busy, m_run_busy)
        `CHECK(inbuf,    m_inbuf)
        `CHECK(illegal,  m_illegal)
        `CHECK(ovf,      m_ovf)
    endtask

    // ------------------------------------------------------------- stimulus
    // Drive one core tick on the falling edge, check, then clock it in.
    task automatic tick(input logic       en_v,
                        input logic [3:0] op_v,
                        input logic [3:0] arg_v,
                        input logic [7:0] d_v       = 8'h00,
                        input logic       dump_v    = 1'b0,
                        input logic       fz_v      = 1'b0,
                        input logic       pe_ovf_v  = 1'b0);
        @(negedge clk);
        check_regs();
        en         = en_v;
        ins        = {op_v, arg_v};
        d          = d_v;
        dump_busy  = dump_v;
        fz_open    = fz_v;
        pe_ovf_any = pe_ovf_v;
        #1 check_comb();
        check_hold_quiet();
        @(posedge clk);
        model_clock();
    endtask

    task automatic apply_reset();
        rst_n      = 1'b0;
        en         = 1'b0;
        d          = 8'h00;
        ins        = 8'h00;
        dump_busy  = 1'b0;
        fz_open    = 1'b0;
        pe_ovf_any = 1'b0;
        model_reset();
        repeat (3) @(posedge clk);
        @(negedge clk);
        rst_n = 1'b1;
        check_regs();
    endtask

    task automatic directed_tests();
        $display("[%0t] Directed tests", $time);
        tick(1'b1, OP_LOAD,  4'h0, 8'hA5);            // LOAD -> inbuf = A5
        tick(1'b1, OP_NOP,   4'h0);
        tick(1'b1, OP_RUN,   4'h0);                   // RUN  -> run_busy next tick
        tick(1'b1, OP_NOP,   4'h0, 8'h00, 1'b0, 1'b0, 1'b1); // acc with overflow
        tick(1'b1, OP_CLEAR, 4'h3);                   // clear inbuf + flags
        tick(1'b1, OP_RUN,   4'h0, 8'h00, 1'b0, 1'b1);       // RUN while frozen -> illegal
        tick(1'b1, OP_DLOAD, 4'h0, 8'h00, 1'b1);             // DUMP_LOAD while busy -> illegal
        tick(1'b1, OP_DFLAG, 4'h1);                   // bad FLAGS bank -> illegal
        tick(1'b1, 4'hF,     4'h0);                   // reserved opcode -> illegal
        tick(1'b0, OP_LOAD,  4'h0, 8'h3C);            // en low: state holds
        tick(1'b1, OP_CLEAR, 4'h1);                   // clear flags
    endtask

    // Hold-gating test (SPEC section 2, Enable): with en low, every command
    // output must be 0 even though ins and run_busy stay frozen, and the
    // command must execute exactly once on the first enabled edge after.
    // Arguments: tick(en, op, arg, d, dump_busy, fz_open, pe_ovf_any)
    task automatic hold_gating_test();
        $display("[%0t] Hold-gating test", $time);

        // 1. RUN in flight, then hold with RUN still on ins:
        //    no run_now, no repeated acc_en (phase 2 must not add again)
        test_step = 1;
        tick(1'b1, OP_LOAD, 4'h0, 8'h77);
        tick(1'b1, OP_RUN,  4'h0, 8'h11);           // phase 1
        repeat (4) tick(1'b0, OP_RUN, 4'h0, 8'h11); // hold: run_busy frozen at 1
        tick(1'b1, OP_NOP,  4'h0);                  // phase 2 happens exactly once
        tick(1'b1, OP_NOP,  4'h0);                  // acc_en back to 0

        // 2. CLEAR of every bit on hold edges: nothing cleared until enabled
        test_step = 2;
        repeat (3) tick(1'b0, OP_CLEAR, 4'hF);
        tick(1'b1, OP_CLEAR, 4'hF);
        tick(1'b1, OP_NOP,   4'h0);

        // 3. DUMP_LOAD on hold edges: no capture / restart
        test_step = 3;
        repeat (3) tick(1'b0, OP_DLOAD, 4'h0);
        tick(1'b1, OP_DLOAD, 4'h0);
        tick(1'b1, OP_NOP,   4'h0, 8'h00, 1'b1);

        // 4. DUMP_ABORT on hold edges while a dump is busy
        test_step = 4;
        repeat (3) tick(1'b0, OP_DABRT, 4'h0, 8'h00, 1'b1);
        tick(1'b1, OP_DABRT, 4'h0, 8'h00, 1'b1);
        tick(1'b1, OP_NOP,   4'h0);

        // 5. Freezing debug reads on hold edges: no capture / restart
        test_step = 5;
        repeat (3) tick(1'b0, OP_DFLAG, 4'h0);      // DEBUG_FLAGS bank 0
        tick(1'b1, OP_DFLAG, 4'h0);
        tick(1'b1, OP_NOP,   4'h0);
        repeat (3) tick(1'b0, 4'h8, 4'h2);          // DEBUG_PARTIAL_SUM PE2
        tick(1'b1, 4'h8, 4'h2);
        tick(1'b1, OP_NOP,   4'h0);

        // 6. Hold in the middle of a back-to-back RUN stream
        test_step = 6;
        tick(1'b1, OP_RUN, 4'h0, 8'h21);
        repeat (2) tick(1'b0, OP_RUN, 4'h0, 8'h21);
        tick(1'b1, OP_RUN, 4'h0, 8'h43);
        tick(1'b1, OP_NOP, 4'h0);
        tick(1'b1, OP_NOP, 4'h0);

        // 7. Overflow reported while a phase 2 is frozen by hold:
        //    acc_en and the ovf register must not change until enabled
        test_step = 7;
        tick(1'b1, OP_CLEAR, 4'h1);
        tick(1'b1, OP_RUN,   4'h0, 8'h77);
        repeat (3) tick(1'b0, OP_NOP, 4'h0, 8'h00, 1'b0, 1'b0, 1'b1);
        tick(1'b1, OP_NOP, 4'h0, 8'h00, 1'b0, 1'b0, 1'b1);
        tick(1'b1, OP_NOP, 4'h0);

        test_step = 0;
    endtask

    task automatic random_tests(input int n);
        ctrl_txn txn = new();
        $display("[%0t] Random tests: %0d ticks", $time, n);
        for (int i = 0; i < n; i++) begin
            if (!txn.randomize()) $fatal(1, "randomize() failed");
            tick(txn.en, txn.op, txn.arg, txn.d,
                 txn.dump_busy, txn.fz_open, txn.pe_ovf_any);
        end
    endtask

    // ------------------------------------------------------------------ main
    initial begin
        string dumpfile;
        if (!$value$plusargs("dumpfile=%s", dumpfile))
            dumpfile = "../logs_waveforms/tb_polite_ctrl.vcd";
        $dumpfile(dumpfile);
        $dumpvars(0, tb_polite_ctrl);

        // Only the hold-gating test runs, so the waveform contains just it.
        // To run the full regression again, uncomment the block below.
        apply_reset();
        hold_gating_test();
        directed_tests();
        random_tests(NUM_RANDOM);
        tick(1'b1, OP_LOAD, 4'h0, 8'hFF);   // async reset mid-activity
        apply_reset();
        tick(1'b1, OP_NOP, 4'h0);
        @(negedge clk);
        check_regs();

        $display("------------------------------------------------");
        $display(" polite_ctrl_tb (hold gating): %0d checks, %0d errors -> %s",
                 chk_count, err_count, (err_count == 0) ? "PASS" : "FAIL");
        $display("------------------------------------------------");
        $finish;
    end

endmodule

// ============================================================================
// SystemVerilog assertions for polite_ctrl (moved from sva/polite_sva.sv, unchanged)
// ============================================================================
module polite_ctrl_sva (input logic clk, rst_n, en, fz_open, dump_busy, pe_ovf_any,
                        input logic phase, run_busy, illegal, ovf, run_now, acc_en,
                        input logic clr_psum, clr_outbuf, dump_load, dump_abort, dbg_start,
                        input logic [7:0] inbuf, status, input logic clr_flg);

    // Hold edge: no command fires, no register moves
    a_hold_quiet: assert property (@(posedge clk) disable iff (!rst_n) !en |-> !(run_now || acc_en || clr_psum || clr_outbuf ||
                                             dump_load || dump_abort || dbg_start));
    a_hold_regs:  assert property (@(posedge clk) disable iff (!rst_n) !en |=> $stable({phase, run_busy, inbuf, illegal, ovf}));
    // Pipeline and phase
    a_phase:      assert property (@(posedge clk) disable iff (!rst_n) en |=> phase != $past(phase));
    a_run_busy:   assert property (@(posedge clk) disable iff (!rst_n) en |=> run_busy == $past(run_now));
    // Legality
    a_no_run_fz:  assert property (@(posedge clk) disable iff (!rst_n) fz_open   |-> !run_now && !dbg_start);
    a_no_dload:   assert property (@(posedge clk) disable iff (!rst_n) dump_busy |-> !dump_load && !clr_outbuf);
    a_no_clr_ps:  assert property (@(posedge clk) disable iff (!rst_n) run_busy  |-> !clr_psum);
    a_one_cmd:    assert property (@(posedge clk) disable iff (!rst_n) $onehot0({run_now, dump_load, dump_abort, dbg_start,
                                             clr_psum | clr_outbuf}));
    // Sticky flags
    a_ill_sticky: assert property (@(posedge clk) disable iff (!rst_n) illegal && !clr_flg |=> illegal);
    a_ovf_sticky: assert property (@(posedge clk) disable iff (!rst_n) ovf && !clr_flg |=> ovf);
    a_ovf_new:    assert property (@(posedge clk) disable iff (!rst_n) en && acc_en && pe_ovf_any |=> ovf);
    a_status7:    assert property (@(posedge clk) disable iff (!rst_n) status[7]);
endmodule

bind polite_ctrl polite_ctrl_sva u_sva (.*);
