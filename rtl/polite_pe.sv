`default_nettype none
// POLITE Mini processing element (one of four).
//
// golden/chip.c chip_core_step:
//   phase 1 (RUN tick)  : mul <= buf_lane * bus_lane      (run_now)
//   phase 2 (next tick) : psum <= wrap24(psum + mul)       (acc_en = run_busy)
// Products are sticky: mul only changes on a legal RUN.
// CLEAR bit 3 (clr) never coincides with acc_en (ctrl rejects that collision).
//
// sum / ovf are the combinational wrap24(psum + mul) and its wrap flag.
// They feed the accumulate, the DUMP_LOAD phase-2 capture, DEBUG_ADD and
// the DEBUG_FLAGS pending-OVF bit; consumers gate them with run_busy.
module polite_pe (
    input  wire               clk,
    input  wire               rst_n,
    input  wire               en,       // registered ena (hold = 0)
    input  wire signed [3:0]  a,        // input-buffer lane (row)
    input  wire signed [3:0]  b,        // bus lane (column)
    input  wire               run_now,  // legal RUN this tick: latch product
    input  wire               acc_en,   // phase 2 in flight: accumulate
    input  wire               clr,      // CLEAR bit 3 accepted
    output reg  signed [23:0] psum,
    output reg  signed [7:0]  mul,
    output wire        [23:0] sum,      // wrap24(psum + mul)
    output wire               ovf       // psum + mul did not fit in 24 bits
);
    wire signed [7:0]  prod = $signed({{4{a[3]}}, a}) * $signed({{4{b[3]}}, b});
    wire signed [24:0] full = {psum[23], psum} + {{17{mul[7]}}, mul};

    assign sum = full[23:0];
    assign ovf = full[24] ^ full[23];

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            psum <= 24'sd0;
            mul  <= 8'sd0;
        end else if (en) begin
            if (acc_en)
                psum <= sum;
            else if (clr)
                psum <= 24'sd0;
            if (run_now)
                mul <= prod;
        end
    end
endmodule
`default_nettype wire
