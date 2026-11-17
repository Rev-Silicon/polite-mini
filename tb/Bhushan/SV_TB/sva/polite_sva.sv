module polite_ctrl_sva (input logic clk, rst_n, en, fz_open, dump_busy, pe_ovf_any,
                        input logic phase, run_busy, illegal, ovf, run_now, acc_en,
                        input logic clr_psum, clr_outbuf, dump_load, dump_abort, dbg_start,
                        input logic [7:0] inbuf, status, input logic clr_flg);

    // Hold edge: no command fires, no register moves
    a_hold_quiet: assert property (@(posedge clk) disable iff (!rst_n) !en |-> !(run_now || acc_en || clr_psum || clr_outbuf ||
                                             dump_load || dump_abort || dbg_start));
    a_hold_regs:  assert property (@(posedge clk) disable iff (!rst_n) !en |=> $stable({phase, run_busy, inbuf, illegal, ovf}));
    // Pipeline and phase
    a_phase:      assert property (@(posedge clk) disable iff (!rst_n) en |=> phase != $past(phase));
    a_run_busy:   assert property (@(posedge clk) disable iff (!rst_n) en |=> run_busy == $past(run_now));
    // Legality
    a_no_run_fz:  assert property (@(posedge clk) disable iff (!rst_n) fz_open   |-> !run_now && !dbg_start);
    a_no_dload:   assert property (@(posedge clk) disable iff (!rst_n) dump_busy |-> !dump_load && !clr_outbuf);
    a_no_clr_ps:  assert property (@(posedge clk) disable iff (!rst_n) run_busy  |-> !clr_psum);
    a_one_cmd:    assert property (@(posedge clk) disable iff (!rst_n) $onehot0({run_now, dump_load, dump_abort, dbg_start,
                                             clr_psum | clr_outbuf}));
    // Sticky flags
    a_ill_sticky: assert property (@(posedge clk) disable iff (!rst_n) illegal && !clr_flg |=> illegal);
    a_ovf_sticky: assert property (@(posedge clk) disable iff (!rst_n) ovf && !clr_flg |=> ovf);
    a_ovf_new:    assert property (@(posedge clk) disable iff (!rst_n) en && acc_en && pe_ovf_any |=> ovf);
    a_status7:    assert property (@(posedge clk) disable iff (!rst_n) status[7]);
endmodule

module polite_dbg_sva (input logic clk, rst_n, en, start, open, phase, dbg_tick,
                       input logic [3:0] op, fz_left, input logic [2:0] fz_k,
                       input logic [23:0] fz_val);

    a_no_restart: assert property (@(posedge clk) disable iff (!rst_n) start |-> !open);
    a_win_wide:   assert property (@(posedge clk) disable iff (!rst_n) en && start && op inside {4'h8, 4'hA} |=> fz_left == 4'd11);
    a_win_narrow: assert property (@(posedge clk) disable iff (!rst_n) en && start && !(op inside {4'h8, 4'hA}) |=> fz_left == 4'd3);
    a_val_frozen: assert property (@(posedge clk) disable iff (!rst_n) !start |=> $stable(fz_val));
    a_tick_phase: assert property (@(posedge clk) disable iff (!rst_n) dbg_tick |-> phase);
    a_nib_count:  assert property (@(posedge clk) disable iff (!rst_n) $fell(open) |-> fz_k inside {3'd2, 3'd6});
    a_ranges:     assert property (@(posedge clk) disable iff (!rst_n) fz_left <= 4'd11 && fz_k <= 3'd6);
endmodule

bind polite_ctrl polite_ctrl_sva u_sva (.*);
bind polite_dbg  polite_dbg_sva  u_sva (.*);
