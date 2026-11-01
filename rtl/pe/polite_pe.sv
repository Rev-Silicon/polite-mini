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
  logic [8:0] lo; logic c, s, up, dn; logic [15:0] hi;
  assign lo = {1'b0, psum[7:0]} + {1'b0, mul_q[7:0]};
  assign c = lo[8]; assign s = mul_q[7];
  assign up = c & ~s; assign dn = ~c & s;
  assign hi = psum[23:8];
  assign pend     = {up ? hi + 16'd1 : dn ? hi - 16'd1 : hi, lo[7:0]};
  assign pend_ovf = (up && hi == 16'h7FFF) || (dn && hi == 16'h8000);
  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin psum <= '0; mul_q <= '0; end
    else if (ena) begin
      if (clr)         psum <= '0;    // ctrl guarantees clr never coincides with acc_en (F1 collision)
      else if (acc_en) psum <= pend;
      if (mul_en)      mul_q <= p;
    end
  end
endmodule
