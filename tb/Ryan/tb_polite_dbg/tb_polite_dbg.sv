`timescale 1ns / 1ps 
`default_nettype none

module tb_polite_dbg;
  import polite_dbg_tb_pkg::*;

  logic                        clk = 1'b0;
  logic                        rst_n = 1'b0;
  logic                        en = 1'b0;
  logic                        phase = 1'b0;
  logic                        start = 1'b0;
  logic                 [ 3:0] op = '0;
  logic                 [ 1:0] pe = '0;
  logic                        run_busy = 1'b0;

  logic                 [ 7:0] status = '0;
  logic                 [ 7:0] inbuf = '0;
  logic                 [ 7:0] d = '0;
  logic                 [95:0] psum_all = '0;
  logic                 [31:0] mul_all = '0;
  logic                 [95:0] sum_all = '0;

  logic                        open;
  logic                        ofz;
  logic                        dbg_tick;
  logic                 [ 3:0] dbg_nib;

  polite_dbg_scoreboard        scb = new();

  always #5 clk = ~clk;

  // Model phase generation from polite_ctrl, legal alternating stimulus
  always @(posedge clk or negedge rst_n) begin
    if (!rst_n) phase <= 1'b0;
    else if (en) phase <= ~phase;
  end

  polite_dbg dut (
      .clk     (clk),
      .rst_n   (rst_n),
      .en      (en),
      .phase   (phase),
      .start   (start),
      .op      (op),
      .pe      (pe),
      .run_busy(run_busy),
      .status  (status),
      .inbuf   (inbuf),
      .d       (d),
      .psum_all(psum_all),
      .mul_all (mul_all),
      .sum_all (sum_all),
      .open    (open),
      .ofz     (ofz),
      .dbg_tick(dbg_tick),
      .dbg_nib (dbg_nib)
  );

  bind polite_dbg polite_dbg_sva u_sva (
      .dbg_start(start),
      .*
  );

  task automatic apply_reset(bit enable_val = 1);
    @(negedge clk);
    en = enable_val;
    start = 0;
    rst_n = 1'b0;
    scb.reset();

    #1;
    assert (open === 0 && ofz === 0 && dbg_tick === 0)
    else $error("Debug reset failed!");

    @(negedge clk);
    rst_n = 1'b1;
  endtask

  // Drive helper
  task automatic drive_txn(polite_dbg_txn tr);
    en       = tr.en;
    start    = tr.start;
    op       = tr.op;
    pe       = tr.pe;
    run_busy = tr.run_busy;
    status   = tr.status;
    inbuf    = tr.inbuf;
    d        = tr.d;
    psum_all = tr.psum_all;
    mul_all  = tr.mul_all;
    sum_all  = tr.sum_all;
  endtask

  // Drive specific stimulus case (Directed)

  task automatic drive_case(bit en_v, bit start_v, bit [3:0] op_v, bit [1:0] pe_v, bit busy_v,
                            bit [23:0] value);
    polite_dbg_txn tr = new();

    tr.en = en_v;
    tr.start = start_v;
    tr.op = op_v;
    tr.pe = pe_v;
    tr.run_busy = busy_v;

    tr.status = value[7:0];
    tr.inbuf = value[7:0];
    tr.d = value[7:0];
    tr.psum_all = {4{value}};
    tr.mul_all = {4{value[7:0]}};
    tr.sum_all = {4{value}};

    @(negedge clk);
    drive_txn(tr);
  endtask

  // Monitor and scoreboard
  always @(posedge clk) begin
    if (rst_n) begin
      polite_dbg_txn obs;
      obs          = new();

      obs.en       = en;
      obs.phase    = phase;
      obs.start    = start;
      obs.op       = op;
      obs.pe       = pe;
      obs.run_busy = run_busy;
      obs.status   = status;
      obs.inbuf    = inbuf;
      obs.d        = d;
      obs.psum_all = psum_all;
      obs.mul_all  = mul_all;
      obs.sum_all  = sum_all;

      obs.open     = open;
      obs.ofz      = ofz;
      obs.dbg_tick = dbg_tick;
      obs.dbg_nib  = dbg_nib;

      scb.check(obs);
    end
  end

  initial begin
    $dumpfile("polite_dbg.fst");
    $dumpvars(0, tb_polite_dbg);
  end

  initial begin
    polite_dbg_txn txn;

    apply_reset();

    // Directed tests

    // 8-bit freeze window
    $display("Testing 8-bit freeze...");
    drive_case(1, 1, 4'h7, 0, 0, 24'h0000AB);
    drive_case(1, 0, 4'h7, 0, 0, 24'h0000AB);
    repeat (4) @(negedge clk);

    // 24-bit freeze window
    $display("Testing 24-bit freeze...");
    drive_case(1, 1, 4'h8, 2, 0, 24'h123456);
    drive_case(1, 0, 4'h8, 2, 0, 24'h123456);
    repeat (12) @(negedge clk);

    // Nibble ordering
    $display("Testing nibble ordering...");
    drive_case(1, 1, 4'h8, 3, 0, 24'hABCDEF);
    drive_case(1, 0, 4'h8, 3, 0, 24'hABCDEF);
    repeat (12) @(negedge clk);

    // Capture stability
    $display("Testing capture stability...");
    drive_case(1, 1, 4'h8, 1, 0, 24'h123456);
    drive_case(1, 0, 4'h8, 1, 0, 24'hFEDCBA);
    repeat (12) @(negedge clk);

    // Enable hold during freeze
    $display("Testing enable hold...");
    drive_case(1, 1, 4'h8, 0, 0, 24'h123456);
    drive_case(0, 0, 4'h8, 0, 0, 24'h123456);
    repeat (4) @(negedge clk);
    drive_case(1, 0, 4'h8, 0, 0, 24'h123456);
    repeat (12) @(negedge clk);

    // Reset during active freeze
    $display("Testing reset during freeze...");
    drive_case(1, 1, 4'h8, 0, 0, 24'hABCDEF);
    drive_case(1, 0, 4'h8, 0, 0, 24'hABCDEF);
    apply_reset();

    // Reset with en = 0
    $display("Testing reset with en = 0...");
    drive_case(1, 1, 4'h8, 0, 0, 24'h123456);
    drive_case(0, 0, 4'h8, 0, 0, 24'h123456);
    apply_reset(0);

    // Starting at both phases
    $display("Testing phase alignment...");
    apply_reset();
    drive_case(1, 1, 4'h7, 0, 0, 24'h00005A);
    drive_case(1, 0, 4'h7, 0, 0, 24'h00005A);
    repeat (4) @(negedge clk);

    drive_case(1, 0, 4'h7, 0, 0, 24'h00005A);
    drive_case(1, 1, 4'h7, 0, 0, 24'h00005A);
    drive_case(1, 0, 4'h7, 0, 0, 24'h00005A);
    repeat (4) @(negedge clk);

    // DEBUG_ADD selection
    $display("Testing DEBUG_ADD...");
    drive_case(1, 1, 4'hA, 1, 0, 24'h123456);
    drive_case(1, 0, 4'hA, 1, 0, 24'h123456);
    repeat (12) @(negedge clk);

    drive_case(1, 1, 4'hA, 1, 1, 24'hABCDEF);
    drive_case(1, 0, 4'hA, 1, 1, 24'hABCDEF);
    repeat (12) @(negedge clk);

    $display("Directed stimulus completed.");

    // Constrained-random testing
    repeat (3000) begin
      @(negedge clk);

      txn = new();
      txn.can_start = (scb.exp_fz_left == 0);

      if (!txn.randomize()) $fatal(1, "Failed to randomize transaction!");

      drive_txn(txn);
    end

    @(negedge clk);
    en = 1'b0;
    start = 1'b0;

    repeat (2) @(negedge clk);

    scb.report();

    $display("Opcode Coverage: %0.2f%%", dut.u_sva.opcode_cov.get_inst_coverage());

    $display("Control Coverage: %0.2f%%", dut.u_sva.control_cov.get_inst_coverage());

    $finish;
  end

endmodule

`default_nettype wire
