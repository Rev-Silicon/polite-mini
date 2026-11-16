`timescale 1ns / 1ps 
`default_nettype none

module tb_polite_pe;
  import polite_pe_tb_pkg::*;

  logic                       clk = 1'b0;
  logic                       rst_n = 1'b0;
  logic                       en = 1'b0;
  logic signed         [ 3:0] a;
  logic signed         [ 3:0] b;
  logic                       run_now = 1'b0;
  logic                       acc_en = 1'b0;
  logic                       clr = 1'b0;

  logic signed         [23:0] psum;
  logic signed         [ 7:0] mul;
  logic                [23:0] sum;
  logic                       ovf;

  polite_pe_scoreboard        scb = new();

  always #5 clk = ~clk;

  polite_pe dut (
      .clk    (clk),
      .rst_n  (rst_n),
      .en     (en),
      .a      (a),
      .b      (b),
      .run_now(run_now),
      .acc_en (acc_en),
      .clr    (clr),
      .psum   (psum),
      .mul    (mul),
      .sum    (sum),
      .ovf    (ovf)
  );

  bind polite_pe polite_pe_sva u_sva (.*);

  task automatic apply_reset(bit enable_val = 1);  // Used for checking reset with en = 0
    @(negedge clk);
    en = enable_val;
    rst_n = 1'b0;
    scb.reset();

    #1;  // Allow asynchronous reset to propagate

    assert (psum === '0 && mul === '0)
    else $error("Asynchronous reset failed!");

    @(negedge clk);
    rst_n = 1'b1;
  endtask

  task automatic drive_txn(polite_pe_txn tr);
    @(negedge clk);  // Drive on neg edge before operating posedge
    en = tr.en;
    a = tr.a;
    b = tr.b;
    run_now = tr.run_now;
    acc_en = tr.acc_en;
    clr = tr.clr;
  endtask

  // For directed cases
  task automatic drive_case(
    bit en_v,
    logic signed [3:0] a_v,
    logic signed [3:0] b_v,
    bit run_v,
    bit acc_v,
    bit clr_v
  );
    polite_pe_txn tr = new();

    tr.en      = en_v;
    tr.a       = a_v;
    tr.b       = b_v;
    tr.run_now = run_v;
    tr.acc_en  = acc_v;
    tr.clr     = clr_v;

    drive_txn(tr);
  endtask

  // Monitor & Scoreboard loop
  always @(posedge clk) begin
    if (rst_n) begin
      polite_pe_txn obs;
      obs = new();

      obs.en = en;
      obs.a = a;
      obs.b = b;
      obs.run_now = run_now;
      obs.acc_en = acc_en;
      obs.clr = clr;
      obs.psum = psum;
      obs.mul = mul;
      obs.sum = sum;
      obs.ovf = ovf;

      scb.check(obs);
    end
  end

  // Dump waveform
  initial begin
    $dumpfile("polite_pe.fst");
    $dumpvars(0, tb_polite_pe);
  end

  // Test sequence
  initial begin
    polite_pe_txn txn;
    apply_reset();

    // Stimulus
    // Directed cases
    
    // Positive overflow
    $display("Testing positive overflow...");
    apply_reset();
    drive_case(1, -8, -8, 1, 0, 0);
    drive_case(1, 0, 0, 0, 1, 0);

    repeat (131071) @(posedge clk);
    @(negedge clk);

    assert (ovf === 1'b1)
    else $error("Positive overflow not detected!");

    @(negedge clk);
    assert (psum === 24'sh800000)
    else $error("Positive overflow wrap incorrect!");

    // Negative overflow
    $display("Testing negative overflow...");
    apply_reset();
    drive_case(1, -8, 7, 1, 0, 0);
    drive_case(1, 0, 0, 0, 1, 0);

    repeat (149796) @(posedge clk);
    @(negedge clk);

    assert (ovf === 1'b1)
    else $error("Negative overflow not detected!");

    @(negedge clk);
    assert (psum === 24'sd8388584)
    else $error("Negative overflow wrap incorrect!");

    // Reset during pending accumulation
    $display("Testing pending accumulation reset...");
    apply_reset();
    drive_case(1, 3, 4, 1, 0, 0);
    drive_case(1, 0, 0, 0, 1, 0);
    drive_case(1, 2, 5, 1, 0, 0);

    @(posedge clk);
    #1;
    rst_n = 0;
    scb.reset();
    #1;

    assert (psum === '0 && mul === '0)
    else $error("Pending accumulation reset failed!");

    @(negedge clk);
    run_now = 0;
    acc_en = 0;
    rst_n = 1;

    // Reset with en = 0
    $display("Testing reset with en = 0...");
    drive_case(1, 4, 5, 1, 0, 0);
    drive_case(1, 0, 0, 0, 1, 0);
    drive_case(0, 0, 0, 0, 0, 0);
    apply_reset(0);

    assert (psum === '0 && mul === '0)
    else $error("Reset while disabled failed!");

    drive_case(1, 0, 0, 0, 0, 0);
    $display("Directed tests completed.");

    // Constrained Random Testing
    repeat (3000) begin
      txn = new();
      if (!txn.randomize()) begin
        $error("Failed to randomize transaction!");
        $finish();
      end
      drive_txn(txn);
    end

    // Allow final transaction to execute and be checked
    @(negedge clk);
    en = 0;
    run_now = 0;
    acc_en = 0;
    clr = 0;

    repeat (2) @(negedge clk);

    // Report results
    scb.report();

    $display("Protocol Coverage: %0.2f%%", dut.u_sva.p_cg.get_inst_coverage());

    $display("Arithmetic Coverage: %0.2f%%", dut.u_sva.a_cg.get_inst_coverage());

    $finish;
  end

endmodule

`default_nettype wire
