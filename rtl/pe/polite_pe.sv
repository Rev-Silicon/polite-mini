module polite_pe (input logic clk, rst_n, mul_en, acc_en, clr,
  input logic signed [3:0] a, b, output logic signed [23:0] psum, output logic signed [7:0] mul_q, output logic ovf);
  logic signed [7:0] p; polite_mac u_mac(.a, .b, .p);
  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin psum <= '0; mul_q <= '0; end
    else begin /* TBD: mul on phase1, accumulate on phase2, wrap and ovf */ end
  end
  assign ovf = 1'b0; // TBD
endmodule
