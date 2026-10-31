// Lockstep tb: drives vectors from golden, compares uo_out after each edge. +VEC=file
`timescale 1ns/1ps
module tb_lockstep;
  logic clk = 0, rst_n = 0; logic [7:0] ui, uio; wire [7:0] uo, uio_out, uio_oe;
  cfg_wrap dut (.ui_in(ui), .uo_out(uo), .uio_in(uio), .uio_out, .uio_oe, .ena(1'b1), .clk, .rst_n);
  always #5 clk = ~clk;
  integer fd, n, errs, cnt; logic [7:0] d, i, e; string fn;
  initial begin
    errs = 0; cnt = 0; ui = 0; uio = 0;
    if (!$value$plusargs("VEC=%s", fn)) $fatal(1, "need +VEC");
    fd = $fopen(fn, "r");
    repeat (2) @(posedge clk); #1 rst_n = 1;
    if (uo !== 8'h00) begin $display("FAIL reset uo=%h", uo); errs++; end
    while ($fscanf(fd, "%h %h %h\n", d, i, e) == 3) begin
      ui = d; uio = i; @(posedge clk); #1; cnt++;
      if (uo !== e) begin errs++; if (errs < 10) $display("MISMATCH cyc %0d ui=%h uio=%h got=%h exp=%h", cnt, d, i, uo, e); end
    end
    $display("%s cycles=%0d mismatches=%0d", errs ? "FAIL" : "PASS", cnt, errs);
    $finish;
  end
endmodule
