# POLITE Mini output coverage — executed results

Executed November 17, 2026 on branch verification, checkout f8b39906e50a3e1c393e10f3c8d07380faa17513.

**Coverage only: no functional correctness checks or DUT PASS claims.**

Verilator and coverage utility: 5.038 (release archive; UNKNOWN.REV suffix). Z3 supplies constrained randomization. RTL and teammates' files were not edited.

## Full-run matrix

| Suite | Seed | Scenarios completed | All defined functional bins | Raw samples | Run |
|---|---:|---:|---|---:|---|
| polite_outbuf | 1 | 15/15 | 100% of defined bins | 11695 | [log](polite_outbuf/all_seed1/run.log) |
| polite_outbuf | 42 | 15/15 | 100% of defined bins | 11695 | [log](polite_outbuf/all_seed42/run.log) |
| polite_outbuf | 123 | 15/15 | 100% of defined bins | 11695 | [log](polite_outbuf/all_seed123/run.log) |
| polite_outmux | 1 | 7/7 | 100% of defined bins | 14164 | [log](polite_outmux/all_seed1/run.log) |
| polite_outmux | 42 | 7/7 | 100% of defined bins | 14164 | [log](polite_outmux/all_seed42/run.log) |
| polite_outmux | 123 | 7/7 | 100% of defined bins | 14164 | [log](polite_outmux/all_seed123/run.log) |
| output_path | 1 | 20/20 | 100% of defined bins | 12010 | [log](output_path/all_seed1/run.log) |
| output_path | 42 | 20/20 | 100% of defined bins | 12010 | [log](output_path/all_seed42/run.log) |
| output_path | 123 | 20/20 | 100% of defined bins | 12009 | [log](output_path/all_seed123/run.log) |

Buffer and integration full runs each include directed traffic plus 10000 randomized core ticks per seed. Mux runs include all 4096 distinct raw input vectors plus directed traffic and 10000 random vectors. Individual named-test runs intentionally leave unrelated bins uncovered.

Key functional bin sets: outbuf 24 positions × 16 values = 384; mux 4096 independent packed inputs; integration source/flag combinations, debug enter/leave during idle/active dump, and requested 2/6-output-tick debug windows. All declared bins were hit in every full run.

## Native simulator coverage, merged seeds

These are raw instrumented-point hits (at least one event), separate from manual functional bins. Continuous-only outmux has no native statement/branch/expression points; those cells are N/A, not a fabricated percentage.

| Suite | Line points | Branch points | Expression points | Toggle points | Native annotated-row summary |
|---|---|---|---|---|---|
| polite_outbuf | 12/12 | 18/18 | 6/6 | 244/246 | (48/49) 97.00% |
| polite_outmux | N/A | N/A | N/A | 20/20 | (7/7) 100.00% |
| output_path | 12/12 | 18/18 | 6/6 | 264/266 | (55/56) 98.00% |

Annotations use Verilator's default minimum-hit threshold of 10 and summarize source rows, so those percentages differ from raw point ratios. Per-seed reset-toggle counts are below that annotation threshold; merged seeds cover the reachable low-count point.

The only zero-hit native points are the two upper bits of the buffer's sub decode. Under legal progression, idx is 0..23 while active and can become 24 on completion; pe_sel maps that to sub 0..6. Thus sub[3] and sub[4] remain zero. Raw gaps are retained without RTL pragmas or percentage adjustments:

- polite_outbuf: /home/vitthalps/polite-mini/rtl/polite_outbuf.sv:32 sub[3] (v_toggle/polite_outbuf)
- polite_outbuf: /home/vitthalps/polite-mini/rtl/polite_outbuf.sv:32 sub[4] (v_toggle/polite_outbuf)
- output_path: /home/vitthalps/polite-mini/rtl/polite_outbuf.sv:32 sub[3] (v_toggle/polite_outbuf)
- output_path: /home/vitthalps/polite-mini/rtl/polite_outbuf.sv:32 sub[4] (v_toggle/polite_outbuf)

## Evidence

Each module has per-seed metadata, run.log, functional_coverage.txt, coverage.dat, coverage.info, annotated RTL, and code_coverage.log. Seed 1 additionally has a full representative wave.fst:

- [outbuf FST](polite_outbuf/all_seed1/wave.fst)
- [outmux FST](polite_outmux/all_seed1/wave.fst)
- [integration FST](output_path/all_seed1/wave.fst)

The FSTs contain actual observations, not expected waveforms. No GUI inspection or correctness comparison is claimed.

## Infrastructure and limits

[Infrastructure checks](infrastructure_checks.txt) cover argument rejection, old tool rejection, named tests, wave/clean expansion, lint, and same-seed reproducibility. A final Makefile-only fix deferred wave argument expansion and disabled core dumps; the full-run SV sources did not change. The final flow was exercised by named/infrastructure tests.

The buffer index is read only for stimulus positioning and coverage. Integration drives debug ownership/data/flags externally, so this does not verify polite_dbg, polite_ctrl, or the top pad pipeline. No expected-data comparisons, numerical scoreboards, correctness assertions, C model runs, or formal proof are present. A future self-checking phase would be needed to establish functional correctness.
