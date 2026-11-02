// Debug read mux (combinational). Raw reads (PSUM/MUL) are pre-commit; ADD previews pending acc (R4).
// The value is streamed as nibbles on uo[3:0], LS first: wide=0 is 8 bits / 2 nibbles, wide=1 is 24 bits / 6 nibbles.
// arg[3:2] on PARTIAL_SUM/ADD/MUL is reserved and ignored. MUL is the sticky product. ADD with no phase 2 = psum.
// A caller that sees freeze while a window is already open must not restart it (nested DBG is illegal).
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
