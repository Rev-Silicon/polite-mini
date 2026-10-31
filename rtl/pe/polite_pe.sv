// One PE: RUN phase 1 latches mul = a*b; phase 2 commits psum = wrap24(psum+mul) and zeroes mul (R2-F9).
// pend/pend_ovf expose the pending phase-2 result for DBG_ADD / DBG_FLAGS / DUMP_LOAD previews (R3-F15, R4-F16, R5-F22).
module polite_pe (input logic clk, rst_n, ena, mul_en, acc_en, clr,
  input logic signed [3:0] a, b,
  output logic signed [23:0] psum, pend, output logic signed [7:0] mul_q, output logic pend_ovf);
  logic signed [7:0] p;
  logic signed [24:0] sum;
  polite_mac u_mac (.a(a), .b(b), .p(p));
  assign sum      = {psum[23], psum} + {{17{mul_q[7]}}, mul_q};
  assign pend     = sum[23:0];
  assign pend_ovf = sum[24] ^ sum[23];
  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin psum <= '0; mul_q <= '0; end
    else if (ena) begin
      if (clr)         psum <= '0;    // ctrl guarantees clr never coincides with acc_en (F1 collision)
      else if (acc_en) psum <= pend;
      if (mul_en)      mul_q <= p;
      else if (acc_en) mul_q <= '0;
    end
  end
endmodule
