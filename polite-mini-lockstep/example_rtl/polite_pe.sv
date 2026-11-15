`default_nettype none
// EXAMPLE implementation derived from chip.c; not the user's original RTL.
module polite_pe (
    input wire clk, rst_n, en, run_now, acc_en, clr,
    input wire signed [3:0] a, b,
    output logic signed [23:0] psum,
    output wire signed [23:0] sum,
    output logic signed [7:0] mul,
    output wire ovf
);
    assign sum = psum + {{16{mul[7]}}, mul};
    assign ovf = (psum[23] == mul[7]) && (sum[23] != psum[23]);
    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            psum <= '0;
            mul <= '0;
        end else if (en) begin
            if (run_now) mul <= a * b;
            if (acc_en) psum <= sum;
            else if (clr) psum <= '0;
        end
    end
endmodule
`default_nettype wire
