// =============================================================================
// Top-level assertions for tt_um_polite_mini (verification plan: assert_*)
// Bound to the DUT, so they run in every test. Names match the testplan.
// =============================================================================
module polite_top_sva (
    input logic        clk, rst_n, ena,
    input logic [7:0]  uo_out, uio_out, uio_oe,
    input logic        ena_q, otick_q,
    input logic [7:0]  in_d_q, in_i_q, uo_q, uo_pad,
    input logic [95:0] psum_all,
    input logic [31:0] mul_all,
    input logic        run_now, acc_en, clr_psum, run_busy,
    input logic        dump_load, dump_busy, ofz, dbg_start, fz_open,
    input logic [4:0]  dump_idx
);
    default clocking cb @(posedge clk); endclocking

    // ---- pins and reset
    assert_uio_inputs:        assert property (disable iff (!rst_n) uio_oe == 8'h00 && uio_out == 8'h00);
    assert_reset_outputs:     assert property ($rose(rst_n) |-> uo_out == 8'h00 && ena_q);
    assert_no_x_out:          assert property (disable iff (!rst_n) !$isunknown({uo_out, uio_out, uio_oe}));

    // ---- enable / hold
    assert_ena_lag:           assert property (disable iff (!rst_n) $past(rst_n) |-> ena_q == $past(ena));
    assert_hold_pads:         assert property (disable iff (!rst_n) !ena_q |=> $stable({in_d_q, in_i_q, uo_q, uo_pad, otick_q}));
    assert_hold_datapath:     assert property (disable iff (!rst_n) !ena_q |=> $stable({psum_all, mul_all}));

    // ---- output timing and markers
    assert_out_rate:          assert property (disable iff (!rst_n) $changed(uo_out) |-> $past(ena_q && otick_q));
    assert_markers_exclusive: assert property (disable iff (!rst_n) uo_out[7] |-> !uo_out[6]);
    assert_idle_nibble:       assert property (disable iff (!rst_n) !uo_out[7] && !uo_out[6] |-> uo_out[3:0] == 4'h0);

    // ---- datapath
    assert_mul_sticky:        assert property (disable iff (!rst_n) !(ena_q && run_now) |=> $stable(mul_all));
    assert_psum_update:       assert property (disable iff (!rst_n) !(ena_q && (acc_en || clr_psum)) |=> $stable(psum_all));

    // ---- integration assumptions of the sub-modules
    assert_no_clr_during_acc: assert property (disable iff (!rst_n) !(clr_psum && acc_en));
    assert_load_not_busy:     assert property (disable iff (!rst_n) dump_load |-> !dump_busy);

    // ---- dump / debug
    assert_dump_idx_range:    assert property (disable iff (!rst_n) dump_busy |-> dump_idx <= 5'd23);
    assert_dump_pause:        assert property (disable iff (!rst_n) ena_q && ofz && !dump_load |=> $stable(dump_idx));
    assert_no_freeze_restart: assert property (disable iff (!rst_n) dbg_start |-> !fz_open);

    // ---- cover points (counted in the coverage .dat, see `make cov`)
    c_hold_during_dump:   cover property (disable iff (!rst_n) !ena_q && dump_busy);
    c_hold_during_freeze: cover property (disable iff (!rst_n) !ena_q && fz_open);
    c_hold_phase2:        cover property (disable iff (!rst_n) !ena_q && run_busy);
    c_dump_paused:        cover property (disable iff (!rst_n) ena_q && ofz && dump_busy);
    c_dload_after_run:    cover property (disable iff (!rst_n) dump_load && run_busy);
    c_overflow_pin:       cover property (disable iff (!rst_n) $rose(uo_out[4]));
    c_illegal_pin:        cover property (disable iff (!rst_n) $rose(uo_out[5]));
    c_dbg_nibble_in_dump: cover property (disable iff (!rst_n) uo_out[7] && dump_busy);
endmodule

bind tt_um_polite_mini polite_top_sva u_top_sva (
    .clk(clk), .rst_n(rst_n), .ena(ena),
    .uo_out(uo_out), .uio_out(uio_out), .uio_oe(uio_oe),
    .ena_q(ena_q), .otick_q(otick_q),
    .in_d_q(in_d_q), .in_i_q(in_i_q), .uo_q(uo_q), .uo_pad(uo_pad),
    .psum_all(psum_all), .mul_all(mul_all),
    .run_now(run_now), .acc_en(acc_en), .clr_psum(clr_psum), .run_busy(run_busy),
    .dump_load(dump_load), .dump_busy(dump_busy), .ofz(ofz),
    .dbg_start(dbg_start), .fz_open(fz_open),
    .dump_idx(g_outbuf.u_outbuf.idx)
);
