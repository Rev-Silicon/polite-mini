// Output buffer + nibble streamer (cfg A). 4 x 24b, dump order PE0..3, low nibble first, 1 nibble per out_tick (every other core edge, 33 MHz pad-out).
// busy is busy-at-start (dump_adv). adv = out_tick; hold = core output frozen this edge (no nibble lost).
module polite_outbuf #(parameter bit HAS_OUTBUF = 1) (input logic clk, rst_n, ena, load, abort, clr, hold, adv,
  input logic [95:0] load_data, output logic [3:0] nib, output logic busy);
  if (HAS_OUTBUF) begin : g_ob
    logic [95:0] buf_q; logic [4:0] idx; logic busy_q;
    logic [1:0] pe; logic [2:0] sub;
    always_comb begin
      pe = 2'd0; sub = idx[2:0];
      if (idx >= 5'd18) begin pe = 2'd3; sub = 3'(idx - 5'd18); end
      else if (idx >= 5'd12) begin pe = 2'd2; sub = 3'(idx - 5'd12); end
      else if (idx >= 5'd6) begin pe = 2'd1; sub = 3'(idx - 5'd6); end
    end
    logic [23:0] word;
    assign word = buf_q[24*pe +: 24];
    assign nib  = busy_q ? word[4*sub +: 4] : 4'h0;
    assign busy = busy_q;
    always_ff @(posedge clk or negedge rst_n) begin
      if (!rst_n) begin buf_q <= '0; idx <= '0; busy_q <= 1'b0; end
      else if (ena) begin
        if (busy_q && adv && !hold) begin idx <= idx + 5'd1; if (idx == 5'd23) busy_q <= 1'b0; end
        if (clr)   buf_q <= '0;
        if (load)  begin buf_q <= load_data; idx <= '0; busy_q <= 1'b1; end
        if (abort) busy_q <= 1'b0;
      end
    end
  end else begin : g_none
    // cfg B: no outbuf; inputs intentionally unused
    logic unused_ok;
    assign unused_ok = &{1'b0, clk, rst_n, ena, load, abort, clr, hold, adv, load_data};
    assign nib = 4'h0; assign busy = 1'b0;
  end
endmodule
