# 33 MHz pad-out: what Cast needs for A0 re-PnR

- Core clock unchanged: `create_clock -period 15.15` (66 MHz) on `clk`, single rising edge.
- New RTL: `out_phase_q` toggles every enabled edge; `uo_q[7:0]` is a `clk` flop with load enable `!out_phase_q`.
  `uo_out` therefore changes at most every 2 clk (30.30 ns).
- SDC delta (`pnr/polite_vneg1.sdc`, appended): `set_multicycle_path -setup 2 / -hold 1 -to [get_ports {uo_out[*]}]`.
  The output delay (0.25 × 15.15 ns) stays relative to `clk`, so `uo_q -> uo_out` gets a 30.30 ns setup budget. Inputs unchanged.
- I did not use a generated clock. `uo_q` is clocked by `clk`, not by the phase flop, so a `create_generated_clock` on
  `out_phase_q/Q` would reach no register clock pin. Synthesis keeps an enable mux on `uo_q`. If Cast wants a real /2 clock,
  `uo_q` would have to be clocked from `out_phase_q`, which adds a second clock tree. Not recommended on TT.
- Check after re-PnR: (1) STA reports the uo_out paths as multicycle (setup slack against 30.30 ns minus the output delay);
  (2) hold on uo_out is checked at 0 ns, not -15.15 ns; (3) the `out_phase_q` fanout (9 enable pins plus outbuf adv) meets max_fanout 10,
  or the tool buffers it.
- `pnr/a0/config.json` needs no change: it already points PNR/SIGNOFF SDC at `../polite_vneg1.sdc`.
- I did not start PnR on tower. That claim is still Cast's.
