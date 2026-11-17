//      // verilator_coverage annotation
         `default_nettype none
        // POLITE Mini control: decode, legality/collision rules, input buffer,
        // output-tick phase, RUN pipeline flag and the sticky flags.
        //
        // Mirrors the opcode switch in golden/chip.c chip_core_step. All checks use
        // state at the start of the core tick ("busy-at-start"):
        //   fz_open   = freeze window already open (c->fz_left > 0, "mid")
        //   dump_busy = dump busy at start (dump_adv)
        //   run_busy  = RUN executed on the previous tick (run_phase2)
        //
        // illegal_d / ovf_d are the values after this tick; they drive uo[5]/uo[4]
        // of this tick's core output, exactly like the C return value.
        module polite_ctrl #(
            parameter bit HAS_OUTBUF = 1'b1   // chip_reset(c, has_outbuf, ...)
        ) (
 004134     input  wire       clk,
%000003     input  wire       rst_n,
 000953     input  wire       en,
 001038     input  wire [7:0] d,            // registered ui_in
 001048     input  wire [7:0] ins,          // registered uio_in
 001004     input  wire       dump_busy,    // from outbuf (start of tick)
 001006     input  wire       fz_open,      // from dbg (start of tick)
 000986     input  wire       pe_ovf_any,   // OR of the four PE wrap24(psum+mul) flags
        
 000899     output reg        phase,        // 1 = this core tick is an output tick
 000070     output reg        run_busy,     // phase 2 in flight on this tick
 000086     output reg  [7:0] inbuf,
 000032     output reg        illegal,
 000014     output reg        ovf,
 000088     output wire       illegal_d,
 000044     output wire       ovf_d,
        
 000072     output wire       run_now,      // legal RUN: PEs latch products
 000104     output wire       acc_en,       // PEs accumulate
 000020     output wire       clr_psum,     // CLEAR bit 3 accepted
 000010     output wire       clr_outbuf,   // CLEAR bit 2 accepted
 000030     output wire       dump_load,    // legal DUMP_LOAD
 000134     output wire       dump_abort,   // DUMP_ABORT
 000250     output wire       dbg_start,    // legal freezing debug read
 000940     output wire [3:0] dbg_op,       // debug opcode 0x6..0xB
 001048     output wire [1:0] dbg_pe,       // PE index (dump order)
~001004     output wire [7:0] status        // DEBUG_FLAGS bank 0 byte
        );
            localparam [3:0] OP_NOP   = 4'h0, OP_LOAD  = 4'h1, OP_RUN   = 4'h2,
                             OP_DLOAD = 4'h3, OP_DABRT = 4'h4, OP_CLEAR = 4'h5,
                             OP_DFLAG = 4'h6, OP_DINP  = 4'hB;
        
 000940     wire [3:0] op = ins[7:4];
 001048     wire [3:0] a  = ins[3:0];
        
 000536     wire is_load  = (op == OP_LOAD);
 000250     wire is_run   = (op == OP_RUN);
 000140     wire is_dload = (op == OP_DLOAD);
 000112     wire is_clear = (op == OP_CLEAR);
 000286     wire is_rsvd  = (op >  OP_DINP);                     // 0xC..0xF
 000874     wire is_dbg   = (op >= OP_DFLAG) && (op <= OP_DINP);  // 0x6..0xB
 000070     wire bad_bank = (op == OP_DFLAG) && (a != 4'h0);      // FLAGS bank != 0
 000846     wire dbg_req  = is_dbg && !bad_bank;                  // would freeze
        
            // Without an output buffer, DUMP_LOAD / DUMP_ABORT / CLEAR bit 2 are
            // illegal (chip.c: !c->has_outbuf).
%000000     wire no_ob    = !HAS_OUTBUF;
 000230     wire is_dabrt = (op == OP_DABRT);
        
            // CLEAR collisions: whole CLEAR ignored, illegal set.
 000744     wire clr_coll = (a[3] && run_busy) || (a[2] && (dump_busy || no_ob));
 000080     wire clr_ok   = is_clear && !clr_coll;
 000054     wire clr_flg  = clr_ok && a[0];
        
            assign run_now    = en && is_run && !fz_open;
            assign acc_en     = en && run_busy;
            assign clr_psum   = en && clr_ok && a[3];
            assign clr_outbuf = en && clr_ok && a[2];
            assign dump_load  = en && is_dload && !dump_busy && !no_ob;
            assign dump_abort = en && is_dabrt && !no_ob;
            assign dbg_start  = en && dbg_req && !fz_open;
            assign dbg_op     = op;
            assign dbg_pe     = a[1:0];
        
 000784     wire ill_set = (is_run   && fz_open)
                         | (is_dload && (dump_busy || no_ob))
                         | (is_dabrt && no_ob)
                         | (is_clear && clr_coll)
                         | bad_bank
                         | (dbg_req  && fz_open)
                         | is_rsvd;
        
            // OVF raised by this tick's phase-2 add survives a same-tick CLEAR flags.
 000064     wire acc_ovf = run_busy && pe_ovf_any;
        
            assign illegal_d = ill_set | (illegal & ~clr_flg);
            assign ovf_d     = acc_ovf | (ovf & ~clr_flg);
        
            // [7] debug busy (1: this read freezes)  [6] dump busy at start
            // [5] illegal at start                    [4] OVF incl. in-flight add
            // [3] outbuf non-empty (= dump busy)      [2] output-tick phase
            // [1] dump paused (= dump busy)           [0] run busy
            assign status = {1'b1, dump_busy, illegal, ovf | acc_ovf,
                             dump_busy, phase, dump_busy, run_busy};
        
 000278     wire [7:0] inbuf_d = is_load ? d : ((clr_ok && a[1]) ? 8'h00 : inbuf);
        
 002067     always @(posedge clk or negedge rst_n) begin
%000007         if (!rst_n) begin
%000007             phase    <= 1'b0;
%000007             run_busy <= 1'b0;
%000007             inbuf    <= 8'h00;
%000007             illegal  <= 1'b0;
%000007             ovf      <= 1'b0;
 001162         end else if (en) begin
 000898             phase    <= ~phase;
 000898             run_busy <= run_now;
 000898             inbuf    <= inbuf_d;
 000898             illegal  <= illegal_d;
 000898             ovf      <= ovf_d;
                end
            end
        
            // NOP needs no logic; keep the name for readability.
            wire _unused = &{1'b0, (op == OP_NOP)};
        endmodule
        `default_nettype wire
        
