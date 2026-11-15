// Expose only signals already present in the supplied top. The scoreboard
// never consults implementation state inside any of the five submodules.
module sim_top #(parameter bit HAS_OUTBUF=1) (
    input wire clk, rst_n, ena,
    input wire [7:0] ui_in, uio_in,
    output wire [7:0] uo_out, uio_out, uio_oe,
    output wire ena_q, phase, otick_q, run_busy, illegal, ovf, dump_busy, fz_open,
    output wire [7:0] in_i_q, in_d_q, uo_q, core_uo, inbuf,
    output wire [23:0] psum [4],
    output wire [7:0] product [4]
);
    tt_um_polite_mini #(.HAS_OUTBUF(HAS_OUTBUF)) dut (
        .clk(clk), .rst_n(rst_n), .ena(ena), .ui_in(ui_in), .uio_in(uio_in),
        .uo_out(uo_out), .uio_out(uio_out), .uio_oe(uio_oe)
    );
    assign ena_q = dut.ena_q;
    assign phase = dut.phase;
    assign otick_q = dut.otick_q;
    assign run_busy = dut.run_busy;
    assign illegal = dut.illegal;
    assign ovf = dut.ovf;
    assign dump_busy = dut.dump_busy;
    assign fz_open = dut.fz_open;
    assign in_i_q = dut.in_i_q;
    assign in_d_q = dut.in_d_q;
    assign uo_q = dut.uo_q;
    assign core_uo = dut.core_uo;
    assign inbuf = dut.inbuf;
    for (genvar g = 0; g < 4; g++) begin : probes
        assign psum[g] = dut.psum_all[24*g +: 24];
        assign product[g] = dut.mul_all[8*g +: 8];
    end
endmodule
