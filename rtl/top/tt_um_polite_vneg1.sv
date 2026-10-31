module tt_um_polite_vneg1 #(parameter bit HAS_OUTBUF = 1, parameter bit OP_PLACE = 0) (
  input wire [7:0] ui_in, output wire [7:0] uo_out, input wire [7:0] uio_in, output wire [7:0] uio_out,
  output wire [7:0] uio_oe, input wire ena, clk, rst_n);
  assign uio_out = 8'h00; assign uio_oe = 8'h00; // all uio are inputs (instr)
  logic freeze; logic [7:0] dbg_out; logic [3:0] live_flags, data_nib;
  assign uo_out = freeze ? dbg_out : {live_flags, data_nib}; // {OVF, illegal, dump_busy, debug_busy}
  assign live_flags = '0; assign data_nib = '0; assign freeze = 1'b0; assign dbg_out = '0; // TBD wire submodules
endmodule
