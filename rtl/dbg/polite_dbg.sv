// Debug read mux (combinational). Raw reads (PSUM/MUL) are pre-commit; ADD previews pending acc (R4).
module polite_dbg (input logic [3:0] op, arg, input logic [7:0] flags8, left, top, data,
  input logic [95:0] psums, pends, input logic [31:0] muls, input logic run_phase2,
  output logic freeze, illegal, output logic [7:0] val);
  logic [23:0] ps; logic [7:0] pd;
  assign ps = psums[24*arg[1:0] +: 24];
  assign pd = pends[24*arg[1:0] +: 8];
  always_comb begin
    freeze = 1'b0; illegal = 1'b0; val = '0;
    case (op)
      4'h6: if (arg != 4'h0) illegal = 1'b1; else begin freeze = 1'b1; val = flags8; end
      4'h7: begin freeze = 1'b1; val = arg[0] ? top : left; end
      4'h8: if (arg[3:2] == 2'd3) illegal = 1'b1; else begin freeze = 1'b1; val = ps[8*arg[3:2] +: 8]; end
      4'h9: begin freeze = 1'b1; val = muls[8*arg[1:0] +: 8]; end
      4'hA: begin freeze = 1'b1; val = run_phase2 ? pd : ps[7:0]; end
      4'hB: begin freeze = 1'b1; val = data; end
      default: ;
    endcase
  end
endmodule
