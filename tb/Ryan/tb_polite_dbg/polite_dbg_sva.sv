`timescale 1ns / 1ps 
`default_nettype none

module polite_dbg_sva (
    input logic        clk,
    input logic        rst_n,
    input logic        en,
    input logic        phase,
    input logic        dbg_start,
    input logic [ 3:0] op,
    input logic [ 1:0] pe,
    input logic        run_busy,
    input logic [ 7:0] status,
    input logic [ 7:0] inbuf,
    input logic [ 7:0] d,
    input logic [95:0] psum_all,
    input logic [31:0] mul_all,
    input logic [95:0] sum_all,
    input logic        open,
    input logic        ofz,
    input logic        dbg_tick,
    input logic [ 3:0] dbg_nib
);

  // Assertions
  ap_dbg_tick :
  assert property (@(posedge clk) disable iff (!rst_n) dbg_tick == (ofz && phase));

  ap_ofz :
  assert property (@(posedge clk) disable iff (!rst_n) ofz == (dbg_start || open));

  ap_enable_hold :
  assert property (@(posedge clk) disable iff (!rst_n) !en |=> $stable(open));

  // Freeze window must become active after an enabled start
  ap_window_start :
  assert property (@(posedge clk) disable iff (!rst_n) (en && dbg_start) |=> open);

  // Freeze window must end after the final tick
  ap_window_end :
  assert property (@(posedge clk) disable iff (!rst_n) (en && open && !dbg_start && !en) |=> !open);

  // Debug data is valid only on output ticks
  ap_debug_valid :
  assert property (@(posedge clk) disable iff (!rst_n) dbg_tick |-> (ofz && phase));

  covergroup cg_opcode @(posedge clk);
    cp_op: coverpoint op iff (rst_n && en && dbg_start) {
      bins flags = {4'h6};
      bins buffer = {4'h7};
      bins psum = {4'h8};
      bins mul = {4'h9};
      bins add = {4'hA};
      bins input_d = {4'hB};
    }

    cp_pe: coverpoint pe iff (rst_n && en && dbg_start) {
      bins pe0 = {0}; bins pe1 = {1}; bins pe2 = {2}; bins pe3 = {3};
    }

    cross_op_pe: cross cp_op, cp_pe;
  endgroup

  cg_opcode opcode_cov = new();

  covergroup cg_control @(posedge clk);
    cp_en: coverpoint en iff (rst_n);
    cp_start: coverpoint dbg_start iff (rst_n);
    cp_phase: coverpoint phase iff (rst_n);
    cp_run_busy: coverpoint run_busy iff (rst_n);

    cross_start_phase: cross cp_start, cp_phase;
    cross_start_en: cross cp_start, cp_en {
    ignore_bins disabled_start = // Defined illegal combination
        binsof(cp_start) intersect {1} &&
        binsof(cp_en) intersect {0};
    }
    
  endgroup

  cg_control control_cov = new();

endmodule

`default_nettype wire
