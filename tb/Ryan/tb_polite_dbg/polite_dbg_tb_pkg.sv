`timescale 1ns / 1ps 
`default_nettype none

package polite_dbg_tb_pkg;

  class polite_dbg_txn;
    rand bit        en;
    rand bit        start;
    rand bit [ 3:0] op;
    rand bit [ 1:0] pe;
    rand bit        run_busy;

    rand bit [ 7:0] status;
    rand bit [ 7:0] inbuf;
    rand bit [ 7:0] d;
    rand bit [95:0] psum_all;
    rand bit [31:0] mul_all;
    rand bit [95:0] sum_all;

    bit             can_start;
    bit             phase;

    logic           open;
    logic           ofz;
    logic           dbg_tick;
    logic    [ 3:0] dbg_nib;

    constraint c_debug {
      en dist {
        1 := 90,
        0 := 10
      };  // Enable most of the time

      op inside {[4'h6 : 4'hB]};  // Legal ops

      if (!can_start || !en)  // Start legally only if enabled and sequence is done
      start == 0;
      else
      start dist {
        1 := 30,
        0 := 70
      };
    }

  endclass


  class polite_dbg_scoreboard;
    int          pass_count;
    int          error_count;
    int          cycle_count;

    logic [ 3:0] exp_fz_left;
    logic [ 2:0] exp_fz_k;
    logic [23:0] exp_fz_val;

    logic        exp_open;
    logic        exp_ofz;
    logic        exp_dbg_tick;
    logic [ 3:0] exp_dbg_nib;

    function new();
      pass_count  = 0;
      error_count = 0;
      cycle_count = 0;
      reset();
    endfunction

    function void reset();
      exp_fz_left = '0;
      exp_fz_k = '0;
      exp_fz_val = '0;

      exp_open = 0;
      exp_ofz = 0;
      exp_dbg_tick = 0;
      exp_dbg_nib = '0;
    endfunction

    // Select the value specified by the debug command
    function automatic logic [23:0] capture_value(polite_dbg_txn tr);
      logic [23:0] ps;
      logic [23:0] sm;
      logic [ 7:0] mu;
      logic [23:0] result;

      case (tr.pe) // Extract selected pe
        2'd0: begin
          ps = tr.psum_all[23:0];
          sm = tr.sum_all[23:0];
          mu = tr.mul_all[7:0];
        end

        2'd1: begin
          ps = tr.psum_all[47:24];
          sm = tr.sum_all[47:24];
          mu = tr.mul_all[15:8];
        end

        2'd2: begin
          ps = tr.psum_all[71:48];
          sm = tr.sum_all[71:48];
          mu = tr.mul_all[23:16];
        end

        2'd3: begin
          ps = tr.psum_all[95:72];
          sm = tr.sum_all[95:72];
          mu = tr.mul_all[31:24];
        end
      endcase

      case (tr.op)
        4'h6: result = {16'b0, tr.status};
        4'h7: result = {16'b0, tr.inbuf};
        4'h8: result = ps;
        4'h9: result = {16'b0, mu};
        4'hA: result = tr.run_busy ? sm : ps;
        4'hB: result = {16'b0, tr.d};
        default: result = '0;
      endcase

      return result;
    endfunction

    function void check(polite_dbg_txn tr);
      logic [23:0] active_value;
      int unsigned nib_index;

      cycle_count++;

      // Legal debug commands must not overlap
      if (tr.start) begin
        if (!(tr.op inside {[4'h6 : 4'hB]})) $fatal(1, "Invalid debug opcode in stimulus");

        if (exp_fz_left != 0) $fatal(1, "Overlapping debug requests in stimulus");
      end

      // Calculate combinational outputs
      exp_open = (exp_fz_left != 0);
      exp_ofz = tr.start || exp_open;
      exp_dbg_tick = exp_ofz && tr.phase;

      if (tr.start) begin
        active_value = capture_value(tr);
        nib_index = 0;
      end else begin
        active_value = exp_fz_val;
        nib_index = int'(exp_fz_k);
      end

      // Non-output ticks repeat the previous nibble
      if (!tr.phase && nib_index > 0) nib_index--;

      if (nib_index > 5) nib_index = 5;

      exp_dbg_nib = active_value[4*nib_index+:4];

      // Compare outputs
      if (tr.open !== exp_open) begin
        $display("[Cycle %0d] OPEN mismatch: expected=%b observed=%b", cycle_count, exp_open,
                 tr.open);
        error_count++;
      end else pass_count++;

      if (tr.ofz !== exp_ofz) begin
        $display("[Cycle %0d] OFZ mismatch: expected=%b observed=%b", cycle_count, exp_ofz, tr.ofz);
        error_count++;
      end else pass_count++;

      if (tr.dbg_tick !== exp_dbg_tick) begin
        $display("[Cycle %0d] DBG_TICK mismatch: expected=%b observed=%b", cycle_count,
                 exp_dbg_tick, tr.dbg_tick);
        error_count++;
      end else pass_count++;

      if (exp_ofz) begin
        if (tr.dbg_nib !== exp_dbg_nib) begin
          $display("[Cycle %0d] DBG_NIB mismatch: expected=%h observed=%h", cycle_count,
                   exp_dbg_nib, tr.dbg_nib);
          $display("op=%h pe=%0d phase=%b start=%b", tr.op, tr.pe, tr.phase, tr.start);
          error_count++;
        end else pass_count++;
      end

      // Update golden state for the next cycle
      if (tr.en) begin
        if (tr.start) begin
          exp_fz_val = capture_value(tr);

          if (tr.op == 4'h8 || tr.op == 4'hA) exp_fz_left = 4'd11;
          else exp_fz_left = 4'd3;

          exp_fz_k = tr.phase ? 3'd1 : 3'd0;

        end else if (exp_fz_left != 0) begin
          exp_fz_left--;

          if (tr.phase) exp_fz_k++;
        end
      end
    endfunction

    function void report();
      if (error_count != 0)
        $display("FAIL: %0d errors across %0d cycles", error_count, cycle_count);
      else if (cycle_count == 0) $display("NO CHECKS PERFORMED");
      else $display("PASS: %0d checks across %0d cycles", pass_count, cycle_count);
    endfunction

  endclass


endpackage

`default_nettype wire
