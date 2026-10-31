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
