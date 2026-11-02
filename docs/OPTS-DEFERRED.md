# Deferred optimizations (not implemented; for Cast/Forge to pick up)

Found in the 2026-11-01 adversarial review. No behavior change is needed for correctness; all four are optional.

- **O1 (strongest): dead `debug_busy` flop.** `rtl/ctrl/polite_ctrl.sv` registers `debug_busy <= dbg_freeze`, and `rtl/top/tt_um_polite_vneg1.sv` muxes it into live `uo[7]`. Whenever that flop is 1, the previous edge froze (`ofz_q=1`), so the frozen byte wins and live `uo[7]` is always 0 (as SPEC §2 states). DEBUG_FLAGS bit 3 is the constant `1'b1`. Fix: tie live `uo[7]` to 0 and delete the flop. One flop and one mux input saved, clearer RTL; lockstep must stay 0-mismatch.
- **O2: passthroughs / duplicate configs.** `freeze_now` is just `dbg_freeze`; `OP_PLACE` is ignored (kept per lock), so config a1 is identical to a0 (b0/b1 are retired cfg-B test builds) and much of `run_sim.sh` re-runs the same design.
- **O3: outbuf index decode.** `polite_outbuf.sv` decodes `idx` with compares against 18/12/6. Separate 2-bit PE and 3-bit sub-nibble counters (wrap at 6) remove the comparator chain: a little less area and a shorter path.
- **O4 (host): overlap dump with the next tile.** `host/mnist/chipio.py` does DUMP_LOAD and then 60 idle NOPs. Issuing the next tile's CLEAR/LOAD/RUN during the stream saves about 3% of edges and actually demonstrates the output buffer (the product feature). Requires interleaved nibble collection.
- Not an opt: MNIST spends half its issue slots on LOAD. That is inherent to outer-product tiling when both operands change every step, and SPEC §5.1 already accepts it (fused LOAD+RUN deferred).
