`default_nettype none

package polite_pe_tb_pkg;

  class polite_pe_txn;
    rand bit                 en;
    rand logic signed [ 3:0] a;
    rand logic signed [ 3:0] b;
    rand bit                 run_now;
    rand bit                 acc_en;
    rand bit                 clr;

    logic signed      [23:0] psum;
    logic signed      [ 7:0] mul;
    logic             [23:0] sum;
    logic                    ovf;

    // Bias toward operational controls to mirror actual scenarios
    constraint control_dist {
    en       dist {1 := 90, 0 := 10};
    run_now  dist {1 := 80, 0 := 20};
    acc_en   dist {1 := 80, 0 := 20};
    clr      dist {1 := 10, 0 := 90};
    }
  endclass

  class polite_pe_scoreboard;
    // TODO: Add golden state variables and pass/error counters
    int pass_count;
    int error_count;

    logic signed [23:0] predicted_sum;

    logic signed [23:0] exp_psum;
    logic signed [7:0] exp_mul;
    logic [23:0] exp_sum;
    logic exp_ovf;

    function new();
      pass_count = 0;
      error_count = 0;
      exp_psum = '0;
      exp_mul = '0;
      exp_sum = '0;
      exp_ovf = '0;
    endfunction

    function void reset();
      exp_psum = '0;
      exp_mul  = '0;
      exp_sum  = '0;
      exp_ovf  = '0;
    endfunction

    function void check(polite_pe_txn tr);
      // Called every time transaction is pushed, outputs will be from cycle before
      // Check, then update for next cycle

      // Checking
      if (exp_psum !== tr.psum) begin
        $display("Mismatch partial sum!");
        $display("Expected partial sum: ", exp_psum);
        $display("Observed partial sum: ", tr.psum);
        error_count++;
      end else pass_count++;

      if (exp_mul !== tr.mul) begin
        $display("Mismatch product!");
        $display("Expected product: ", exp_mul);
        $display("Observed product: ", tr.mul);
        error_count++;
      end else pass_count++;

      if (exp_sum !== tr.sum) begin
        $display("Mismatch sum!");
        $display("Expected sum: ", exp_sum);
        $display("Observed sum: ", tr.sum);
        error_count++;
      end else pass_count++;

      if (exp_ovf !== tr.ovf) begin
        $display("Mismatch overflow flag!");
        $display("Expected overflow flag: ", exp_ovf);
        $display("Observed overflow flag: ", tr.ovf);
        error_count++;
      end else pass_count++;

      // Update golden model
      if (tr.en) begin
        // Update mul
        if (tr.run_now) begin
          exp_mul = tr.a * tr.b;
        end

        // Update psum
        if (tr.acc_en) begin
          exp_psum = exp_sum;
        end else if (tr.clr) begin
          exp_psum = '0;
        end
      end
      exp_sum = 24'(exp_mul) + exp_psum;
      exp_ovf = (exp_psum[23] == exp_mul[7]) && (exp_sum[23] != exp_psum[23]);  // Check sign bits
    endfunction

    function void report();
      if (error_count != 0) begin
        $display("FAIL: Error count: ", error_count);
      end else begin
        $display("PASS: Pass count: ", pass_count);
      end
    endfunction
  endclass

endpackage

`default_nettype wire
