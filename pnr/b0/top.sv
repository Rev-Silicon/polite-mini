module tt_um_polite_mini_b0 (
  input wire [7:0] ui_in, output wire [7:0] uo_out, input wire [7:0] uio_in, output wire [7:0] uio_out,
  output wire [7:0] uio_oe, input wire ena, clk, rst_n);
  tt_um_polite_mini #(.HAS_OUTBUF(0), .OP_PLACE(0)) u(.*);
endmodule
