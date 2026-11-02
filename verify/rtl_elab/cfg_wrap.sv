// Elab wrapper: maps configs/*.vh defines onto real top parameters.
`include "cfg.vh"
module cfg_wrap (input wire [7:0] ui_in, output wire [7:0] uo_out, input wire [7:0] uio_in,
  output wire [7:0] uio_out, output wire [7:0] uio_oe, input wire ena, clk, rst_n);
  tt_um_polite_mini #(.HAS_OUTBUF(`POLITE_HAS_OUTBUF), .OP_PLACE(`POLITE_OP_PLACE)) dut (.*);
endmodule
