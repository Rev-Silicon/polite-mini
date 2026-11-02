# POLITE Mini LibreLane PnR quotes — 2026-10-31 (tower, librelane 3.0.14, sky130A hd)
Clock 15.15 ns (66 MHz), single-edge SDC `pnr/polite_mini.sdc`; RUN_POST_GPL_DESIGN_REPAIR=false; density 55%; met4 max; docker cap 9g.

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

## A0 PnR + G6 slew/cap fix (fix-not-waive) — 2026-11-01 ~16:15 CT
- Tip SHA: 54f4beb709ba1fa1c381e4a54807655521849ae8 | host=server | LibreLane 3.0.14, --cpus=8, mem 24g
- SDC: half-rate multicycle to uo_out (setup 2 / hold 1), CLOCK_PERIOD 15.15
- Supersedes old tower baseline (494 slew / 24 cap ss, WNS +2.128).

Run 1 (RUN_2026-11-01_22-10-30, log pnr/logs/a0_g6_server_1.log): MAX_TRANSITION 1.0, DESIGN_REPAIR slew/cap 30/30, GRT 20/20, post-GRT repair on
- max_slew: max_ss 614, nom_ss 368, min_ss 306; tt/ff 0
- max_cap: max_ss 30, nom_ss 19, min_ss 15; tt/ff 0
- setup WS worst +2.503 ns (max_ss); WNS 0; hold WS +0.200

Run 2 (RUN_2026-11-01_22-13-05, log pnr/logs/a0_g6_server_2.log; config saved pre-change as pnr/a0/config.g6_run1.json): MAX_TRANSITION 0.75, DESIGN_REPAIR 50/50, GRT 40/40, MAX_FANOUT 8
- max_slew: max_ss 44; nom_ss 0; min_ss 0; tt/ff 0
- max_cap: max_ss 2; nom_ss 0; min_ss 0; tt/ff 0
- setup WS worst +3.940 ns (max_ss); WNS 0; hold WS +0.201

STATUS: NOT CLEAN. G6 remaining punches: 44 max_slew + 2 max_cap at max_ss_100C_1v60 only. Not waived.

### G6 pass 3 — server — 2026-11-01 ~16:27 CT — **G6 CLEAN**
Tip RTL/SDC 54f4beb (host=server). Run RUN_2026-11-01_22-26-48, log pnr/logs/a0_g6_server_3.log; prior knobs saved as pnr/a0/config.g6_run2.json.
Knobs: MAX_TRANSITION 0.6, DESIGN_REPAIR slew/cap 70/70, GRT_DESIGN_REPAIR 50/50, MAX_FANOUT 8, RUN_POST_GRT_DESIGN_REPAIR true, CLOCK_PERIOD 15.15, half-rate multicycle SDC.
Signoff STA (9 corners): max_slew 0, max_cap 0 at every corner (Run 2 had 44/2 at max_ss). Setup WS +3.927 ns (max_ss_100C_1v60), 0 viol. Hold WS +0.201 ns (min_ff_n40C_1v95), 0 viol.
Route DRC 0, Magic DRC 0, KLayout DRC 0, LVS clean, antenna 0, util 49.5%. Info only: max_fanout_violation count 114 (fanout limit 8). That is not part of G6 slew/cap; nothing waived.
Peak memory in logs: DRT 743 MB. OpenROAD RSS stayed well below 20 GiB.

## A0 fanout closure (server, 2026-11-01 ~17:05 CT) — G6 CLEAN + fanout 0
- host=server, RTL 54f4beb (HEAD unchanged), knobs base cc79d7d pass-3 (backup pnr/a0/config.g6_pass3.json)
- Run: pnr/a0/runs/RUN_2026-11-01_22-51-47 (1 iteration); log pnr/logs/a0_fanout_iter1.log
- Root cause of 114: RUN_HEURISTIC_DIODE_INSERTION added ~1 diode per sink after GRT (post-CTS fanout was 6 -> 114 at step 45), plus pnr SDC set_max_fanout 10 (signoff limit was 10, not 8).
- Knobs added: MAX_FANOUT_CONSTRAINT 8 (unchanged); PNR/SIGNOFF_SDC_FILE -> pnr/a0/polite_mini_fo8.sdc (copy of polite_mini.sdc with set_max_fanout 8); RUN_HEURISTIC_DIODE_INSERTION false; RUN_ANTENNA_REPAIR true; DESIGN_REPAIR_BUFFER_INPUT/OUTPUT_PORTS true; DESIGN_REPAIR_REMOVE_BUFFERS false; SYNTH_BUFFERING true; CTS_SINK_CLUSTERING_SIZE 8. G6 knobs kept (MAX_TRANSITION 0.6, DR 70/70, GRT 50/50).
- Signoff (9 corners): max_fanout 0 (was 114), max_slew 0, max_cap 0 -> G6 CLEAN. Setup WS min +4.061 ns, hold WS min +0.045 ns, 0 setup/hold vios. Antenna 0, Magic/KLayout DRC 0, LVS 0.
