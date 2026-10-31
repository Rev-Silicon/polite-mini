# POLITE V(-1) LibreLane PnR quotes — 2026-10-31 (tower, librelane 3.0.14, sky130A hd)
Clock 15.15 ns (66 MHz), single-edge SDC `pnr/polite_vneg1.sdc`; RUN_POST_GPL_DESIGN_REPAIR=false; density 55%; met4 max; docker cap 9g.

| | A0 (HAS_OUTBUF=1) | B0 (HAS_OUTBUF=0) |
|---|---|---|
| Die | 334.88×225.76 (TT 1x2) — 1x1 FAILED | 334.88×111.52 (TT 1x1) |
| Die / core area µm² | 75602.5 / 66063.4 | 37345.8 / 29067.9 |
| Stdcell area µm² | 29333.1 | 20224.4 |
| Stdcell count (excl fill/tap) | 4893 | 3080 |
| Utilization (core) | 44.4% | 69.6% |
| Setup WNS worst (max_ss_100C_1v60) | **−4.768 ns** | +0.328 ns |
| Setup TNS | −1290.5 ns (1362 vio) | 0 |
| Setup WNS nom_tt_025C | +3.267 ns | +5.327 ns |
| Hold WNS / TNS | +0.200 / 0 | +0.194 / 0 |
| Route DRC / Magic / KLayout / LVS | 0/0/0/0 | 0/0/0/0 |
| max slew / max cap vios (all corners) | 2452 / 17 | 1333 / 13 |

Notes:
- A0 at 1x1: synth-time effective util 76.2% (GPL 89%) → DPL-0036 detailed placement failed (run RUN_2026-10-31_21-10-16). Retried once at 1x2.
- A0 at 1x2 fails setup only at ss/100C/1.6V; meets tt. B0 closes at all corners.
- Slew/cap counts are pre-fix (post-GPL repair off); expected to be ss-corner dominated.
- OpenROAD stayed small (whole flows 5–6 min), no RepairDesign OOM risk observed.
- fleet-run: polite-vneg1-a0-pnr (run 1 fail DPL, run 2 exit 0), polite-vneg1-b0-pnr (first attempt blocked exit 75 cpus 7.35<8; re-run with --wait 600, exit 0).
Tower runs: see `*/RUN_PATH`.

# Timing rev re-PnR — 2026-10-31 evening (tower via fleet-run, 8 CPU/10 GB, docker 9g, repair ON)
RTL changes: input flops on ui_in/uio_in, full 8b registered uo_out (pin latency 2 edges), ena registered (resets 1),
carry-select PE accumulate. Flow: RUN_POST_GPL_DESIGN_REPAIR=true, EXTRA_EXCLUDED_CELLS=clkdlybuf4s* .

| | A0 before | A0 after | B0 before | B0 after |
|---|---|---|---|---|
| Die | 1x2 334.88×225.76 | 1x2 (unchanged) | 1x1 334.88×111.52 | 1x1 (unchanged) |
| Stdcell area µm² / count | 29333.1 / 4893 | 29633.4 / 4702 | 20224.4 / 3080 | 20235.7 / 2773 |
| Utilization | 44.4% | 44.9% | 69.6% | 69.6% |
| Setup WNS max_ss_100C | **−4.768** | **+2.128** | +0.328 | **+2.749** |
| Setup WNS nom_ss / min_ss | — | +2.549 / +3.018 | — | +3.043 / +3.377 |
| Setup TNS (all) | −1290.5 | 0 | 0 | 0 |
| Setup WNS nom_tt / nom_ff | +3.267 / — | +8.620 / +9.576 | +5.327 / — | +8.943 / +9.828 |
| Hold WNS (all corners) | +0.200 | +0.207 | +0.194 | +0.065 |
| max slew / max cap vios | 2452 / 17 | 494 / 24 (ss only) | 1333 / 13 | 110 / 5 (ss only) |
| Route DRC / Magic / KLayout / LVS | 0/0/0/0 | 0/0/0/0 | 0/0/0/0 | 0/0/0/0 |

B0 iteration log (max_ss WNS): #1 inputs+uo_out regs+repair −0.812 (all violators ena→flop D);
#2 +ena reg +0.898 (crit: mul_q sign fanout via clkdlybuf4s25 buffers); #3 +carry-select PE +0.331 (crit: en fanout
through 9 clkdlybuf4s25_1 at ~1.2 ns each); #4 +exclude clkdlybuf4s* +2.749. A0 run once with all levers.
DBG mux break and outbuf load break not needed. Remaining slew/cap vios are ss-corner only; hold on B0 is thin (+65 ps, ss/ff).
Run paths: `b0_reprn*/RUN_PATH`, `a0_reprn/RUN_PATH`. All runs exit 0 under 9g docker cap, no OOM.
