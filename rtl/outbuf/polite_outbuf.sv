module polite_outbuf #(parameter bit HAS_OUTBUF = 1) (input logic clk, rst_n, load, abort, clr,
  input logic [95:0] psums, output logic [3:0] nib, output logic dump_busy, dump_paused);
  if (HAS_OUTBUF) begin : g_ob
    logic [95:0] buf_q; logic [4:0] idx;
    always_ff @(posedge clk or negedge rst_n) if (!rst_n) begin buf_q <= '0; idx <= '0; end else begin /* TBD */ end
  end else begin : g_none
  end
  assign nib = '0; assign dump_busy = 1'b0; assign dump_paused = 1'b0; // TBD
endmodule
