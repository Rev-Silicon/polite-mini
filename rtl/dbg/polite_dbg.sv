// Debug read mux (combinational). Raw reads (PSUM/MUL) are pre-commit; ADD previews pending acc (R4).
// wide=1: DEBUG_PARTIAL_SUM / DEBUG_ADD return 24 bits over 3 output ticks (LSB first); arg[3:2] reserved/ignored.
// MUL returns the sticky product register (last latched). ADD with no phase 2 in flight = psum (sticky mul ignored).
module polite_dbg (input logic [3:0] op, arg, input logic [7:0] flags8, inbuf, data,
  input logic [95:0] psums, pends, input logic [31:0] muls, input logic run_phase2,
  output logic freeze, illegal, wide, output logic [23:0] val);
  logic [23:0] ps, pd;
  assign ps = psums[24*arg[1:0] +: 24];
  assign pd = pends[24*arg[1:0] +: 24];
  always_comb begin
    freeze = 1'b0; illegal = 1'b0; wide = 1'b0; val = '0;
    case (op)
      4'h6: if (arg != 4'h0) illegal = 1'b1; else begin freeze = 1'b1; val = {16'h0, flags8}; end
      4'h7: begin freeze = 1'b1; val = {16'h0, inbuf}; end
      4'h8: begin freeze = 1'b1; wide = 1'b1; val = ps; end
      4'h9: begin freeze = 1'b1; val = {16'h0, muls[8*arg[1:0] +: 8]}; end
      4'hA: begin freeze = 1'b1; wide = 1'b1; val = run_phase2 ? pd : ps; end
      4'hB: begin freeze = 1'b1; val = {16'h0, data}; end
      default: ;
    endcase
  end
endmodule
