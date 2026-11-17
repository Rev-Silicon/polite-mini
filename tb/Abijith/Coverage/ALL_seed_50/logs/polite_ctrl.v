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
 026189     input  wire       clk,
 000023     input  wire       rst_n,
 000014     input  wire       en,
 002868     input  wire [7:0] d,            // registered ui_in
 003396     input  wire [7:0] ins,          // registered uio_in
~002418     input  wire       dump_busy,    // from outbuf (start of tick)
 001252     input  wire       fz_open,      // from dbg (start of tick)
 001990     input  wire       pe_ovf_any,   // OR of the four PE wrap24(psum+mul) flags
        
 006512     output reg        phase,        // 1 = this core tick is an output tick
 000488     output reg        run_busy,     // phase 2 in flight on this tick
 000458     output reg  [7:0] inbuf,
 000627     output reg        illegal,
 000132     output reg        ovf,
 000645     output wire       illegal_d,
 000194     output wire       ovf_d,
        
 000488     output wire       run_now,      // legal RUN: PEs latch products
 000494     output wire       acc_en,       // PEs accumulate
 000320     output wire       clr_psum,     // CLEAR bit 3 accepted
~000244     output wire       clr_outbuf,   // CLEAR bit 2 accepted
~000682     output wire       dump_load,    // legal DUMP_LOAD
~000742     output wire       dump_abort,   // DUMP_ABORT
 001284     output wire       dbg_start,    // legal freezing debug read
 003396     output wire [3:0] dbg_op,       // debug opcode 0x6..0xB
 002908     output wire [1:0] dbg_pe,       // PE index (dump order)
~006512     output wire [7:0] status        // DEBUG_FLAGS bank 0 byte
        );
            localparam [3:0] OP_NOP   = 4'h0, OP_LOAD  = 4'h1, OP_RUN   = 4'h2,
                             OP_DLOAD = 4'h3, OP_DABRT = 4'h4, OP_CLEAR = 4'h5,
                             OP_DFLAG = 4'h6, OP_DINP  = 4'hB;
        
 003396     wire [3:0] op = ins[7:4];
 002908     wire [3:0] a  = ins[3:0];
        
 000976     wire is_load  = (op == OP_LOAD);
 001050     wire is_run   = (op == OP_RUN);
 000838     wire is_dload = (op == OP_DLOAD);
 001326     wire is_clear = (op == OP_CLEAR);
 002040     wire is_rsvd  = (op >  OP_DINP);                     // 0xC..0xF
 002588     wire is_dbg   = (op >= OP_DFLAG) && (op <= OP_DINP);  // 0x6..0xB
 000578     wire bad_bank = (op == OP_DFLAG) && (a != 4'h0);      // FLAGS bank != 0
 002368     wire dbg_req  = is_dbg && !bad_bank;                  // would freeze
        
            // Without an output buffer, DUMP_LOAD / DUMP_ABORT / CLEAR bit 2 are
            // illegal (chip.c: !c->has_outbuf).
~000001     wire no_ob    = !HAS_OUTBUF;
 000744     wire is_dabrt = (op == OP_DABRT);
        
            // CLEAR collisions: whole CLEAR ignored, illegal set.
 002718     wire clr_coll = (a[3] && run_busy) || (a[2] && (dump_busy || no_ob));
 001218     wire clr_ok   = is_clear && !clr_coll;
 000718     wire clr_flg  = clr_ok && a[0];
        
            // Command strobes are gated with en: on a hold edge (en = 0) no command
            // fires (SPEC 2, Enable). Consumers are en-gated too, so this does not
            // change behavior; it makes every strobe 0 on hold ticks so the rule is
            // explicit and checkable (polite_ctrl_tb check_hold_quiet / a_hold_quiet).
            assign run_now    = en && is_run && !fz_open;
            assign acc_en     = en && run_busy;
            assign clr_psum   = en && clr_ok && a[3];
            assign clr_outbuf = en && clr_ok && a[2];
            assign dump_load  = en && is_dload && !dump_busy && !no_ob;
            assign dump_abort = en && is_dabrt && !no_ob;
            assign dbg_start  = en && dbg_req && !fz_open;
            assign dbg_op     = op;
            assign dbg_pe     = a[1:0];
        
 002800     wire ill_set = (is_run   && fz_open)
                         | (is_dload && (dump_busy || no_ob))
                         | (is_dabrt && no_ob)
                         | (is_clear && clr_coll)
                         | bad_bank
                         | (dbg_req  && fz_open)
                         | is_rsvd;
        
            // OVF raised by this tick's phase-2 add survives a same-tick CLEAR flags.
            // Uses run_busy, not the en-gated acc_en: a hold must not hide a pending
            // OVF from ovf_d (uo_out[4]) or status bit 4.
 000198     wire acc_ovf = run_busy && pe_ovf_any;
        
            assign illegal_d = ill_set | (illegal & ~clr_flg);
            assign ovf_d     = acc_ovf | (ovf & ~clr_flg);
        
            // [7] debug busy (1: this read freezes)  [6] dump busy at start
            // [5] illegal at start                    [4] OVF incl. in-flight add
            // [3] outbuf non-empty (= dump busy)      [2] output-tick phase
            // [1] dump paused (= dump busy)           [0] run busy
            assign status = {1'b1, dump_busy, illegal, ovf | acc_ovf,
                             dump_busy, phase, dump_busy, run_busy};
        
 000472     wire [7:0] inbuf_d = is_load ? d : ((clr_ok && a[1]) ? 8'h00 : inbuf);
        
 013106     always @(posedge clk or negedge rst_n) begin
 006583         if (!rst_n) begin
 006583             phase    <= 1'b0;
 006583             run_busy <= 1'b0;
 006583             inbuf    <= 8'h00;
 006583             illegal  <= 1'b0;
 006583             ovf      <= 1'b0;
 006568         end else if (en) begin
 006502             phase    <= ~phase;
 006502             run_busy <= run_now;
 006502             inbuf    <= inbuf_d;
 006502             illegal  <= illegal_d;
 006502             ovf      <= ovf_d;
                end
            end
        
            // NOP needs no logic; keep the name for readability.
            wire _unused = &{1'b0, (op == OP_NOP)};
        endmodule
        `default_nettype wire
