`default_nettype none

module polite_pe_sva (
    input wire               clk,
    input wire               rst_n,
    input wire               en,
    input wire signed [ 3:0] a,
    input wire signed [ 3:0] b,
    input wire               run_now,
    input wire               acc_en,
    input wire               clr,
    input wire signed [23:0] psum,
    input wire signed [ 7:0] mul,
    input wire        [23:0] sum,
    input wire               ovf
);

  property p_enable_hold;
    @(posedge clk) disable iff (!rst_n) !en |=> $stable(
        psum
    ) && $stable(
        mul
    );
  endproperty

  property p_acc_priority;
    @(posedge clk) disable iff (!rst_n) (en && acc_en) |=> psum == $past(
        sum
    );
  endproperty

  property p_mul_hold;
    @(posedge clk) disable iff (!rst_n) (en && !run_now) |=> $stable(
        mul
    );
  endproperty


  assert property (p_enable_hold);
  assert property (p_mul_hold);
  assert property (p_acc_priority);

  covergroup arithmetic_cg @(posedge clk); // Sample on clock edge since binded
    cp_a: coverpoint a;
    cp_b: coverpoint b;
    cp_ovf: coverpoint ovf;
  endgroup

  covergroup protocol_cg @(posedge clk);
    cp_en: coverpoint en;
    cp_clr: coverpoint clr;
    cp_run_now: coverpoint run_now;
    cp_acc_en: coverpoint acc_en;

    cx_protocol: cross cp_en, cp_clr, cp_run_now, cp_acc_en;
  endgroup

  arithmetic_cg a_cg = new();
  protocol_cg p_cg = new();
endmodule

`default_nettype wire
