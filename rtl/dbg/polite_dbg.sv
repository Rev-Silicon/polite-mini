module polite_dbg (input logic clk, rst_n, input logic [3:0] op, arg, input logic [7:0] flags8, left, top, last_in,
  input logic [95:0] psums, output logic freeze, output logic [7:0] dbg_out);
  always_ff @(posedge clk or negedge rst_n) if (!rst_n) begin freeze <= 1'b0; dbg_out <= '0; end else begin /* TBD */ end
endmodule
