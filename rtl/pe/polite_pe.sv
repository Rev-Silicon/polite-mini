// One PE: RUN phase 1 latches mul = a*b; phase 2 commits psum = wrap24(psum+mul). Products are sticky (no zeroing);
// the next phase 1 overwrites them. Phase 1 of RUN N and phase 2 of RUN N-1 share an edge: acc reads old mul_q, mul_q <= p.
// pend/pend_ovf expose the pending phase-2 result for DBG_ADD / DBG_FLAGS / DUMP_LOAD previews (R3-F15, R4-F16, R5-F22).
module polite_pe (input logic clk, rst_n, ena, mul_en, acc_en, clr,
  input logic signed [3:0] a, b,
  output logic signed [23:0] psum, pend, output logic signed [7:0] mul_q, output logic pend_ovf);
  logic signed [7:0] p;
  logic signed [23:0] psum_q;
  logic signed [7:0] mul_q_r;
  polite_mac u_mac (.a(a), .b(b), .p(p));
  // wrap24(psum + sext(mul)) as 8b add + carry-select on the upper 16b. Avoids fanning the mul sign bit
  // out across a 17b sign extension (B0 ss critical path, timing rev 2026-10-31). Upper delta = carry - sign.
  logic [8:0] lo;
  logic [15:0] hi, hi_add, hi_sub, hi_pass, hi_cmp, sum_up, sum_dn, pend_hi;
  logic [15:0] up_b, dn_b;
  logic [7:0] psum_lo;
  logic [23:0] psum_h, psum_rd;
  logic mul_s_add, mul_s_sel, mul_s_rd;
  logic [3:0] s_n, c_n, up_w, dn_w, up_n, dn_n;
  logic up_ov, dn_ov, cmp_pos, cmp_neg;
  // psum FF Q taps. Cast A0 @14f03f6 left _4195_/Q (pe[1].hi[8], D=psum_d[16])
  // at fanout 9: 7 structural loads (4 arith bufs, hold mux, DBG mux, dump mux)
  // plus two antenna diodes, over MAX_FANOUT 8. g_hi_buf only covered the arith
  // cone, so the raw Q still fed the port and the feedback. Each of the 24 Qs
  // now drives only buffers: arith (lo adder, or a trunk into add/sub/pass/cmp),
  // hold/feedback, and the psum readout port. Same bits, same cycle.
  for (genvar i = 0; i < 24; i++) begin : g_psum_tap
    (* keep *) (* dont_touch *) sky130_fd_sc_hd__buf_2 u_hold (.A(psum_q[i]), .X(psum_h[i]));
    (* keep *) (* dont_touch *) sky130_fd_sc_hd__buf_2 u_rd   (.A(psum_q[i]), .X(psum_rd[i]));
  end
  for (genvar i = 0; i < 8; i++) begin : g_lo_buf
    (* keep *) (* dont_touch *) sky130_fd_sc_hd__buf_2 u_lo (.A(psum_q[i]), .X(psum_lo[i]));
  end
  assign psum = psum_rd;
  // Kept copies of psum[23:8]. Cast A0 @09b821f left _3643_/Q (pe[1].hi[11]) at
  // fanout 9: 8 structural loads plus an antenna diode, over MAX_FANOUT 8. One shared
  // arithmetic copy still sat at 8, which a later diode would push to 9, so +1, −1,
  // passthrough and the overflow compare each have their own buffer. u_src is the
  // only arith load on the FF Q. keep stops yosys from folding those copies together.
  for (genvar i = 0; i < 16; i++) begin : g_hi_buf
    (* keep *) (* dont_touch *) sky130_fd_sc_hd__buf_2 u_src  (.A(psum_q[i+8]), .X(hi[i]));
    (* keep *) (* dont_touch *) sky130_fd_sc_hd__buf_2 u_add  (.A(hi[i]), .X(hi_add[i]));
    (* keep *) (* dont_touch *) sky130_fd_sc_hd__buf_2 u_sub  (.A(hi[i]), .X(hi_sub[i]));
    (* keep *) (* dont_touch *) sky130_fd_sc_hd__buf_2 u_pass (.A(hi[i]), .X(hi_pass[i]));
    (* keep *) (* dont_touch *) sky130_fd_sc_hd__buf_2 u_cmp  (.A(hi[i]), .X(hi_cmp[i]));
  end
  // mul_q[7] FF Q synthesized at fanout 10-14 (adder MSB, carry-select sign, DBG
  // mux). Three kept copies; sign and carry are one copy per high nibble, then
  // one up/dn copy per result bit, so no select net is the whole 16b mux.
  // Same bits, same cycle.
  (* keep *) (* dont_touch *) sky130_fd_sc_hd__buf_2 u_mul_add (.A(mul_q_r[7]), .X(mul_s_add));
  (* keep *) (* dont_touch *) sky130_fd_sc_hd__buf_2 u_mul_sel (.A(mul_q_r[7]), .X(mul_s_sel));
  (* keep *) (* dont_touch *) sky130_fd_sc_hd__buf_2 u_mul_rd  (.A(mul_q_r[7]), .X(mul_s_rd));
  assign mul_q = {mul_s_rd, mul_q_r[6:0]};
  assign lo = {1'b0, psum_lo} + {1'b0, mul_s_add, mul_q_r[6:0]};
  assign sum_up = hi_add + 16'd1;
  assign sum_dn = hi_sub - 16'd1;
  for (genvar t = 0; t < 4; t++) begin : g_sgn
    (* keep *) (* dont_touch *) sky130_fd_sc_hd__buf_2 u_s (.A(mul_s_sel), .X(s_n[t]));
    (* keep *) (* dont_touch *) sky130_fd_sc_hd__buf_2 u_c (.A(lo[8]), .X(c_n[t]));
    assign up_w[t] = c_n[t] & ~s_n[t];
    assign dn_w[t] = ~c_n[t] & s_n[t];
    (* keep *) (* dont_touch *) sky130_fd_sc_hd__buf_2 u_up (.A(up_w[t]), .X(up_n[t]));
    (* keep *) (* dont_touch *) sky130_fd_sc_hd__buf_2 u_dn (.A(dn_w[t]), .X(dn_n[t]));
  end
  for (genvar i = 0; i < 16; i++) begin : g_pend_hi
    localparam int ti = i / 4;
    (* keep *) (* dont_touch *) sky130_fd_sc_hd__buf_2 u_up (.A(up_n[ti]), .X(up_b[i]));
    (* keep *) (* dont_touch *) sky130_fd_sc_hd__buf_2 u_dn (.A(dn_n[ti]), .X(dn_b[i]));
    assign pend_hi[i] = up_b[i] ? sum_up[i] : dn_b[i] ? sum_dn[i] : hi_pass[i];
  end
  // Overflow compare gets its own select copies. Sharing up_n[3] with the mux
  // pushed that net through the 16b equality (synth fanout 9-10).
  (* keep *) (* dont_touch *) sky130_fd_sc_hd__buf_2 u_up_ov (.A(up_w[3]), .X(up_ov));
  (* keep *) (* dont_touch *) sky130_fd_sc_hd__buf_2 u_dn_ov (.A(dn_w[3]), .X(dn_ov));
  assign cmp_pos = (hi_cmp == 16'h7FFF);
  assign cmp_neg = (hi_cmp == 16'h8000);
  assign pend     = {pend_hi, lo[7:0]};
  assign pend_ovf = (up_ov && cmp_pos) || (dn_ov && cmp_neg);
  // psum update selects. Cast A0 @d0c5138 left clkbuf _2803_/X (net _0904_) in
  // g_pe[3] at fanout 9: the shared hold select drove 8 psum-mux loads, and an
  // antenna diode made 9. ABC buffers to MAX_FANOUT 8, so one shared select
  // sits on the limit. Private ena/acc/clr copies stop that select being common
  // across PEs. A 4-trunk x 6-leaf tree then gives each bit its own load and
  // hold copy (structural fanout ≤6). clr still wins over acc_en. Same bits, same cycle.
  logic ena_l, acc_l, clr_l, load_sel, hold_sel;
  (* keep *) (* dont_touch *) sky130_fd_sc_hd__buf_2 u_ena (.A(ena),    .X(ena_l));
  (* keep *) (* dont_touch *) sky130_fd_sc_hd__buf_2 u_acc (.A(acc_en), .X(acc_l));
  (* keep *) (* dont_touch *) sky130_fd_sc_hd__buf_2 u_clr (.A(clr),    .X(clr_l));
  assign load_sel = ena_l & ~clr_l & acc_l;                 // write pend
  assign hold_sel = ~ena_l | (~clr_l & ~acc_l);             // else recirculate; both 0 => clear
  logic [3:0] load_t, hold_t;
  logic [23:0] load_b, hold_b, psum_d;
  for (genvar t = 0; t < 4; t++) begin : g_sel_trunk
    (* keep *) (* dont_touch *) sky130_fd_sc_hd__buf_2 u_load (.A(load_sel), .X(load_t[t]));
    (* keep *) (* dont_touch *) sky130_fd_sc_hd__buf_2 u_hold (.A(hold_sel), .X(hold_t[t]));
  end
  for (genvar i = 0; i < 24; i++) begin : g_sel_leaf
    localparam int ti = i / 6;
    (* keep *) (* dont_touch *) sky130_fd_sc_hd__buf_2 u_load (.A(load_t[ti]), .X(load_b[i]));
    (* keep *) (* dont_touch *) sky130_fd_sc_hd__buf_2 u_hold (.A(hold_t[ti]), .X(hold_b[i]));
    assign psum_d[i] = (load_b[i] & pend[i]) | (hold_b[i] & psum_h[i]);
  end
  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin psum_q <= '0; mul_q_r <= '0; end
    else begin
      psum_q <= psum_d;
      if (ena && mul_en) mul_q_r <= p;
    end
  end
endmodule
