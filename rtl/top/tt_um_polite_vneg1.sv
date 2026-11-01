// POLITE V(-1) Tiny Tapeout top. ui_in = data, uio_in = instr (all inputs).
// Pad pipeline: ui_in/uio_in sampled into in_d_q/in_i_q (executed next edge). uo_out is an 8b register (uo_q) loaded
// once per beat (2 clk, 33 MHz pad-out): only on the edge after an out_tick (out_phase_q==1). See docs/LOCKS.md.
module tt_um_polite_vneg1 #(parameter bit HAS_OUTBUF = 1, parameter bit OP_PLACE = 0) (
  input wire [7:0] ui_in, output wire [7:0] uo_out, input wire [7:0] uio_in, output wire [7:0] uio_out,
  output wire [7:0] uio_oe, input wire ena, clk, rst_n);
  assign uio_out = 8'h00; assign uio_oe = 8'h00;
  logic [7:0] left, top, flags8, dbg_val;
  logic run_phase2, mul_en, acc_en, clr_pe, clr_ob, dump_load, dump_abort;
  logic ovf, illegal, debug_busy, freeze_now, frozen_q, dbg_freeze, dbg_illegal;
  logic dump_busy_q; logic [3:0] dnib;
  logic [95:0] psums, pends; logic [31:0] muls; logic [3:0] povf;
  logic [7:0] in_d_q, in_i_q, uo_q;
  // ena is registered once (resets to 1) so the TT enable is a reg->reg fanout, not a pad->every-flop path.
  // Effect: a hold via ena takes effect one edge after the pad changes (golden does not model ena).
  logic ena_q, en;
  always_ff @(posedge clk or negedge rst_n) if (!rst_n) ena_q <= 1'b1; else ena_q <= ena;
  assign en = ena_q;
  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin in_d_q <= '0; in_i_q <= '0; end      // reset = NOP
    else if (en) begin in_d_q <= ui_in; in_i_q <= uio_in; end
  end

  polite_ctrl #(.HAS_OUTBUF(HAS_OUTBUF), .OP_PLACE(OP_PLACE)) u_ctrl (
    .clk, .rst_n, .ena(en), .data(in_d_q), .instr(in_i_q), .dump_adv(dump_busy_q), .pend_ovf_any(|povf),
    .had_freeze(frozen_q), .dbg_freeze, .dbg_illegal, .left, .top, .flags8, .run_phase2, .mul_en, .acc_en,
    .clr_pe, .clr_ob, .dump_load, .dump_abort, .ovf, .illegal, .debug_busy, .freeze_now);

  // dump-order k -> (row,col): 0=(2,2) 1=(2,1) 2=(1,2) 3=(1,1); lane1 = byte[7:4]
  for (genvar k = 0; k < 4; k++) begin : g_pe
    localparam int R = (k < 2) ? 1 : 0;
    localparam int C = (k % 2 == 0) ? 1 : 0;
    polite_pe u_pe (.clk, .rst_n, .ena(en), .mul_en, .acc_en, .clr(clr_pe),
      .a(left[4*R +: 4]), .b(top[4*C +: 4]), .psum(psums[24*k +: 24]), .pend(pends[24*k +: 24]),
      .mul_q(muls[8*k +: 8]), .pend_ovf(povf[k]));
  end

  // 33 MHz pad-out: out_phase_q resets 0 and toggles every enabled core edge; out_tick = out_phase_q.
  // Dump advances only on out_tick; uo_q loads only on the edge after an out_tick, so uo_out changes at most every 2 clk.
  logic out_phase_q, out_tick, fz_prev_q, ofz;
  always_ff @(posedge clk or negedge rst_n) if (!rst_n) out_phase_q <= 1'b0; else if (en) out_phase_q <= ~out_phase_q;
  assign out_tick = out_phase_q;
  assign ofz = dbg_freeze | fz_prev_q;          // core output frozen this edge (freeze is stretched to 2 edges)
  polite_outbuf #(.HAS_OUTBUF(HAS_OUTBUF)) u_ob (.clk, .rst_n, .ena(en), .load(dump_load), .abort(dump_abort),
    .clr(clr_ob), .hold(ofz), .adv(out_tick), .load_data(run_phase2 ? pends : psums), .nib(dnib), .busy(dump_busy_q));

  polite_dbg u_dbg (.op(in_i_q[7:4]), .arg(in_i_q[3:0]), .flags8, .left, .top, .data(in_d_q), .psums, .pends,
    .muls, .run_phase2, .freeze(dbg_freeze), .illegal(dbg_illegal), .val(dbg_val));

  // uo_out is a pure function of post-edge state: frozen value, or live uo[7:4]={debug_busy,dump busy-at-start (nibble valid),illegal,OVF} (uo[4]=OVF, Cast F7)
  // NOTE: live uo[7] reads 0 when unfrozen: the mux still wires debug_busy, which is 0 outside the freeze window
  // frozen_q = core output frozen (stretched 2 edges, latest DBG value wins); had_freeze for cfg B uses fz_prev_q (core timing unchanged)
  logic [7:0] fval_q; logic [3:0] dnib_q; logic ofz_q, dadv_q;
  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin fval_q <= '0; dnib_q <= '0; ofz_q <= 1'b0; fz_prev_q <= 1'b0; dadv_q <= 1'b0; end
    else if (en) begin ofz_q <= ofz; fz_prev_q <= freeze_now; if (freeze_now) fval_q <= dbg_val; dnib_q <= dnib; dadv_q <= dump_busy_q; end
  end
  assign frozen_q = fz_prev_q;
  // pad register: loaded only when the previous edge was an out_tick (out_phase_q==0 now), never combinational
  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) uo_q <= '0;
    else if (en && !out_phase_q) uo_q <= ofz_q ? fval_q : {debug_busy, dadv_q, illegal, ovf, dnib_q};
  end
  assign uo_out = uo_q;
endmodule
