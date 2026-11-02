// One PE: RUN phase 1 latches mul = a*b; phase 2 commits psum = wrap24(psum+mul). Products are sticky (no zeroing);
// the next phase 1 overwrites them. Phase 1 of RUN N and phase 2 of RUN N-1 share an edge: acc reads old mul_q, mul_q <= p.
// pend/pend_ovf expose the pending phase-2 result for DBG_ADD / DBG_FLAGS / DUMP_LOAD previews (R3-F15, R4-F16, R5-F22).
module polite_pe (input logic clk, rst_n, ena, mul_en, acc_en, clr,
  input logic signed [3:0] a, b,
  output logic signed [23:0] psum, pend, output logic signed [7:0] mul_q, output logic pend_ovf);
  logic signed [7:0] p;
  polite_mac u_mac (.a(a), .b(b), .p(p));
  // wrap24(psum + sext(mul)) as 8b add + carry-select on the upper 16b. Avoids fanning the mul sign bit
  // out across a 17b sign extension (B0 ss critical path, timing rev 2026-10-31). Upper delta = carry - sign.
  logic [8:0] lo; logic c, s, up, dn; logic [15:0] hi, hi_add, hi_sub, hi_pass, hi_cmp;
  logic [15:0] sum_up, sum_dn;
  assign lo = {1'b0, psum[7:0]} + {1'b0, mul_q[7:0]};
  assign c = lo[8]; assign s = mul_q[7];
  assign up = c & ~s; assign dn = ~c & s;
  assign hi = psum[23:8];
  // Kept copies of psum[23:8]. Cast A0 @09b821f left _3643_/Q (pe[1].hi[11]) at
  // fanout 9: 8 structural loads plus an antenna diode, over MAX_FANOUT 8. One shared
  // arithmetic copy still sat at 8, which a later diode would push to 9, so +1, −1,
  // passthrough and the overflow compare each have their own buffer. keep stops yosys
  // from folding those copies together. Same bits, same cycle.
  for (genvar i = 0; i < 16; i++) begin : g_hi_buf
    (* keep *) (* dont_touch *) sky130_fd_sc_hd__buf_2 u_add  (.A(hi[i]), .X(hi_add[i]));
    (* keep *) (* dont_touch *) sky130_fd_sc_hd__buf_2 u_sub  (.A(hi[i]), .X(hi_sub[i]));
    (* keep *) (* dont_touch *) sky130_fd_sc_hd__buf_2 u_pass (.A(hi[i]), .X(hi_pass[i]));
    (* keep *) (* dont_touch *) sky130_fd_sc_hd__buf_2 u_cmp  (.A(hi[i]), .X(hi_cmp[i]));
  end
  assign sum_up   = hi_add + 16'd1;
  assign sum_dn   = hi_sub - 16'd1;
  assign pend     = {up ? sum_up : dn ? sum_dn : hi_pass, lo[7:0]};
  assign pend_ovf = (up && hi_cmp == 16'h7FFF) || (dn && hi_cmp == 16'h8000);
  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin psum <= '0; mul_q <= '0; end
    else if (ena) begin
      if (clr)         psum <= '0;    // ctrl guarantees clr never coincides with acc_en (F1 collision)
      else if (acc_en) psum <= pend;
      if (mul_en)      mul_q <= p;
    end
  end
endmodule
