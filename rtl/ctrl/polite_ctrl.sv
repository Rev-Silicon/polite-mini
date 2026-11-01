// Decode + flags, matches golden/chip.c half-rate (33 MHz pad-out) at tip 677ce98. ena=0 => hold.
module polite_ctrl #(parameter bit HAS_OUTBUF = 1, parameter bit OP_PLACE = 0) ( // OP_PLACE obsolete (buffer+bus, 2026-11-01): ignored
  input logic clk, rst_n, ena, input logic [7:0] data, instr,
  input logic dump_adv, pend_ovf_any, had_freeze,
  input logic dbg_freeze, dbg_illegal,
  output logic [7:0] inbuf, flags8,
  output logic run_phase2, mul_en, acc_en, clr_pe, clr_ob, dump_load, dump_abort,
  output logic ovf, illegal, debug_busy, freeze_now);
  // dump_paused is only observable through DBG_FLAGS on the freezing cycle (= dump_adv there), so no register is kept.
  logic [3:0] op_raw, op, arg; logic run_busy;
  assign op_raw = instr[7:4]; assign arg = instr[3:0];
  assign run_phase2 = run_busy;
  logic run_while_busy; assign run_while_busy = (op_raw == 4'h2) && run_phase2;
  assign op = run_while_busy ? 4'h0 : op_raw;

  logic run_ill, dl_ill, da_ill, clr_coll, other_ill, clr_ok;
  assign run_ill   = (op == 4'h2) && !HAS_OUTBUF && had_freeze;          // cfg B: no RUN during debug read
  assign mul_en    = (op == 4'h2) && !run_ill;
  assign dl_ill    = (op == 4'h3) && (!HAS_OUTBUF || dump_adv);          // R3-F12
  assign dump_load = (op == 4'h3) && !dl_ill;
  assign da_ill    = (op == 4'h4) && !HAS_OUTBUF;
  assign dump_abort= (op == 4'h4) && HAS_OUTBUF;
  assign clr_coll  = (op == 4'h5) && ((arg[3] && run_phase2) || (arg[2] && (dump_adv || !HAS_OUTBUF))); // F1, R2-F8
  assign clr_ok    = (op == 4'h5) && !clr_coll;
  assign clr_pe    = clr_ok && arg[3];
  assign clr_ob    = clr_ok && arg[2];
  assign other_ill = (op >= 4'hC);
  assign acc_en    = run_phase2;
  assign freeze_now= dbg_freeze;

  // DBG_FLAGS bank0: busy-at-start dump, debug_busy=1, run_busy in flight, pending OVF (R3-F13/F14, R4-F16)
  assign flags8 = {HAS_OUTBUF, 1'b0, dump_adv, run_phase2, 1'b1, dump_adv, illegal, ovf | (run_phase2 & pend_ovf_any)};

  logic ill_set; assign ill_set = run_while_busy | run_ill | dl_ill | da_ill | clr_coll | other_ill | dbg_illegal;
  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin inbuf <= '0; run_busy <= 1'b0; ovf <= 1'b0; illegal <= 1'b0;
      debug_busy <= 1'b0; end
    else if (ena) begin
      if (op == 4'h1) inbuf <= data;            // LOAD writes the single input buffer (no shift)
      if (clr_ok && arg[1]) inbuf <= '0;
      run_busy <= mul_en;                       // phase-2 always ends run (RUN while busy is converted to NOP)
      // sticky flags; CLEAR flags clears, then same-cycle phase-2 OVF re-raises (R2-F11)
      if (clr_ok && arg[0]) begin ovf <= 1'b0; illegal <= 1'b0; end
      if (ill_set) illegal <= 1'b1;
      if (acc_en && pend_ovf_any) ovf <= 1'b1;
      debug_busy  <= dbg_freeze;
    end
  end
endmodule
