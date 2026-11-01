`timescale 1ns/1ps
// Extended lockstep tb: +VEC=file of "ena ui uio uo_expected" (gen_adv.c / mnist_record.py)
module tb_adv; logic clk=0,rst_n=0,ena=1; logic [7:0] ui,uio; wire [7:0] uo,uio_out,uio_oe;
  cfg_wrap dut(.ui_in(ui),.uo_out(uo),.uio_in(uio),.uio_out,.uio_oe,.ena(ena),.clk,.rst_n);
  always #5 clk=~clk; integer fd,errs=0,cnt=0,ovfseen=0; logic [7:0] d,i,e; logic en; string fn;
  initial begin ui=0;uio=0; void'($value$plusargs("VEC=%s",fn)); fd=$fopen(fn,"r");
    repeat(2) @(posedge clk); #1 rst_n=1;
    while($fscanf(fd,"%h %h %h %h\n",en,d,i,e)==4) begin ena=en; ui=d; uio=i; @(posedge clk); #1; cnt++;
      if(uo[4]) ovfseen++;
      if(uo!==e) begin errs++; if(errs<10) $display("MISMATCH %0d en=%b ui=%h uio=%h got=%h exp=%h",cnt,en,d,i,uo,e); end end
    $display("%s cycles=%0d mismatches=%0d uo4_cycles=%0d", errs?"FAIL":"PASS",cnt,errs,ovfseen); $finish; end
endmodule
