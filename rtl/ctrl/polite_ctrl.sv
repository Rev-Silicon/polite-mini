module polite_ctrl #(parameter bit HAS_OUTBUF = 1, parameter bit OP_PLACE = 0) (
  input logic clk, rst_n, ena, input logic [7:0] data, instr,
  output logic [7:0] left, top, output logic run_p1, run_p2, output logic [3:0] clr_mask,
  output logic dump_load, dump_abort, output logic [3:0] dbg_op, output logic [3:0] dbg_arg,
  output logic illegal_set, output logic run_busy);
  // decode per docs/OPCODE_PROPOSAL.md; ena=0 => hold (pause = chip hold)
  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin left <= '0; top <= '0; run_busy <= 1'b0; end
    else if (ena) begin /* TBD */ end
  end
endmodule
