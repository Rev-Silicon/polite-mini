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
    input  wire       clk,
    input  wire       rst_n,
    input  wire       en,
    input  wire [7:0] d,            // registered ui_in
    input  wire [7:0] ins,          // registered uio_in
    input  wire       dump_busy,    // from outbuf (start of tick)
    input  wire       fz_open,      // from dbg (start of tick)
    input  wire       pe_ovf_any,   // OR of the four PE wrap24(psum+mul) flags

    output reg        phase,        // 1 = this core tick is an output tick
    output reg        run_busy,     // phase 2 in flight on this tick
    output reg  [7:0] inbuf,
    output reg        illegal,
    output reg        ovf,
    output wire       illegal_d,
    output wire       ovf_d,

    output wire       run_now,      // legal RUN: PEs latch products
    output wire       acc_en,       // PEs accumulate
    output wire       clr_psum,     // CLEAR bit 3 accepted
    output wire       clr_outbuf,   // CLEAR bit 2 accepted
    output wire       dump_load,    // legal DUMP_LOAD
    output wire       dump_abort,   // DUMP_ABORT
    output wire       dbg_start,    // legal freezing debug read
    output wire [3:0] dbg_op,       // debug opcode 0x6..0xB
    output wire [1:0] dbg_pe,       // PE index (dump order)
    output wire [7:0] status        // DEBUG_FLAGS bank 0 byte
);
    localparam [3:0] OP_NOP   = 4'h0, OP_LOAD  = 4'h1, OP_RUN   = 4'h2,
                     OP_DLOAD = 4'h3, OP_DABRT = 4'h4, OP_CLEAR = 4'h5,
                     OP_DFLAG = 4'h6, OP_DINP  = 4'hB;

    wire [3:0] op = ins[7:4];
    wire [3:0] a  = ins[3:0];

    wire is_load  = (op == OP_LOAD);
    wire is_run   = (op == OP_RUN);
    wire is_dload = (op == OP_DLOAD);
    wire is_clear = (op == OP_CLEAR);
    wire is_rsvd  = (op >  OP_DINP);                     // 0xC..0xF
    wire is_dbg   = (op >= OP_DFLAG) && (op <= OP_DINP);  // 0x6..0xB
    wire bad_bank = (op == OP_DFLAG) && (a != 4'h0);      // FLAGS bank != 0
    wire dbg_req  = is_dbg && !bad_bank;                  // would freeze

    // Without an output buffer, DUMP_LOAD / DUMP_ABORT / CLEAR bit 2 are
    // illegal (chip.c: !c->has_outbuf).
    wire no_ob    = !HAS_OUTBUF;
    wire is_dabrt = (op == OP_DABRT);

    // CLEAR collisions: whole CLEAR ignored, illegal set.
    wire clr_coll = (a[3] && run_busy) || (a[2] && (dump_busy || no_ob));
    wire clr_ok   = is_clear && !clr_coll;
    wire clr_flg  = clr_ok && a[0];

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

    wire ill_set = (is_run   && fz_open)
                 | (is_dload && (dump_busy || no_ob))
                 | (is_dabrt && no_ob)
                 | (is_clear && clr_coll)
                 | bad_bank
                 | (dbg_req  && fz_open)
                 | is_rsvd;

    // OVF raised by this tick's phase-2 add survives a same-tick CLEAR flags.
    // Uses run_busy, not the en-gated acc_en: a hold must not hide a pending
    // OVF from ovf_d (uo_out[4]) or status bit 4.
    wire acc_ovf = run_busy && pe_ovf_any;

    assign illegal_d = ill_set | (illegal & ~clr_flg);
    assign ovf_d     = acc_ovf | (ovf & ~clr_flg);

    // [7] debug busy (1: this read freezes)  [6] dump busy at start
    // [5] illegal at start                    [4] OVF incl. in-flight add
    // [3] outbuf non-empty (= dump busy)      [2] output-tick phase
    // [1] dump paused (= dump busy)           [0] run busy
    assign status = {1'b1, dump_busy, illegal, ovf | acc_ovf,
                     dump_busy, phase, dump_busy, run_busy};

    wire [7:0] inbuf_d = is_load ? d : ((clr_ok && a[1]) ? 8'h00 : inbuf);

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            phase    <= 1'b0;
            run_busy <= 1'b0;
            inbuf    <= 8'h00;
            illegal  <= 1'b0;
            ovf      <= 1'b0;
        end else if (en) begin
            phase    <= ~phase;
            run_busy <= run_now;
            inbuf    <= inbuf_d;
            illegal  <= illegal_d;
            ovf      <= ovf_d;
        end
    end

    // NOP needs no logic; keep the name for readability.
    wire _unused = &{1'b0, (op == OP_NOP)};
endmodule
`default_nettype wire
