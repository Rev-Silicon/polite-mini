# Output-block verification — checked results

Executed November 17, 2026 on branch `verification`, checkout
`f8b39906e50a3e1c393e10f3c8d07380faa17513`. RTL is unchanged:

- `polite_outbuf.sv`: blob `0af76c1fbaf6da76f8dd9f4fb63455624a9790b7`.
- `polite_outmux.sv`: blob `74907ae2cf4c154b65fa729ae5452838d96fe586`.

Simulator and matching coverage utility: Verilator 5.038 2025-07-08,
`rev UNKNOWN.REV`; system Verilator 4.038 was preserved. Z3 supplies class
randomization. `CHECK=1` enables independent scoreboards; procedural comparisons
use `$fatal` on a mismatch. Existing coverage-only evidence is preserved in
`../results/`, with its matching test sources archived separately.

## Full-run matrix

Each buffer/integration run includes all directed scenarios and 10,000 randomized
core ticks. Each mux run includes all 4,096 independent input vectors, directed
scenarios, and 10,000 random vectors. All nine runs completed with no mismatches.
The integration check count below sums buffer and complete-output checkpoints;
storage checks and individual stream/frame comparisons are additional.

| Suite | Seed | Scenarios | Scoreboard checkpoints | Functional bins | Evidence |
|---|---:|---:|---:|---|---|
| polite_outbuf | 1 | 15/15 | 35,089 | 100% of defined bins | [log](polite_outbuf/all_seed1/run.log) |
| polite_outbuf | 42 | 15/15 | 35,089 | 100% of defined bins | [log](polite_outbuf/all_seed42/run.log) |
| polite_outbuf | 123 | 15/15 | 35,089 | 100% of defined bins | [log](polite_outbuf/all_seed123/run.log) |
| polite_outmux | 1 | 7/7 | 14,164 | 100% of defined bins | [log](polite_outmux/all_seed1/run.log) |
| polite_outmux | 42 | 7/7 | 14,164 | 100% of defined bins | [log](polite_outmux/all_seed42/run.log) |
| polite_outmux | 123 | 7/7 | 14,164 | 100% of defined bins | [log](polite_outmux/all_seed123/run.log) |
| output_path | 1 | 20/20 | 72,068 | 100% of defined bins | [log](output_path/all_seed1/run.log) |
| output_path | 42 | 20/20 | 72,068 | 100% of defined bins | [log](output_path/all_seed42/run.log) |
| output_path | 123 | 20/20 | 72,062 | 100% of defined bins | [log](output_path/all_seed123/run.log) |

`scoreboard_counts.json` records each scoreboard's counters and all individual
hit/total bin counts. Each full run hit all defined bins: 24 stream positions,
16 values and their 384-bin cross; all 4,096 independent mux inputs; integration
source/flag/debug-transition bins. No manual bins remain uncovered in these full
runs. This does not establish exhaustive correctness or complete coverage.

## Checks performed

The buffer model saves accepted input and queues 24 expected nibbles without
using the DUT index or decoder. It checks capture order, busy/completion, enable
and hold pauses, cap changes during dumps, abort, asynchronous reset, and recovery.
Actual completed frames are reconstructed and compared with the saved input.
The private word array is compared as actual data against input-derived state;
this makes idle clear and retained snapshot checks observable. It never supplies
expected data. Private-array naming is a bench coupling to this RTL revision.

Mux checks compare all eight bits against an independent bit-field reference,
including debug priority, dump suppression, live flags, and raw idle-port data.
Integration predicts the output using expected buffer state, with externally
driven debug ownership/data/flags. Checks run before rising-edge updates, after
settling, after falling-edge input changes, and after asynchronous reset settles.

## Failure-path evidence

All three canaries deliberately corrupt one expectation, leave the DUT intact,
and fail at the intended comparison. `make` returns 2 and simulator metadata
records nonzero exit. None prints `TEST PASS`:

| Suite / testcase | Expected failure | Evidence |
|---|---|---|
| outbuf / stream_order | OUTBUF_MISMATCH, injected=1 | [log](polite_outbuf/stream_order_seed77_inject/run.log) |
| outmux / idle | OUTMUX_MISMATCH, injected=1 | [log](polite_outmux/idle_seed77_inject/run.log) |
| integration / stream_order | OUTPUT_PATH_MISMATCH, injected=1 | [log](output_path/stream_order_seed77_inject/run.log) |

Three temporary RTL mutations were also detected without expectation injection:
ignored hold (`OUTBUF_MISMATCH`), ignored clear (`OUTBUF_STORAGE_MISMATCH`), and
wrong debug nibble (`OUTMUX_MISMATCH`). Only isolated `/tmp` copies were mutated;
real RTL and default binaries were preserved. See [mutation records](mutations/summary.json)
for commands and each subfolder's diff, source hashes, and failure log. These
three checks are examples of fault detection, not a comprehensive mutation score.

Additional checks: `CHECK=0` completes with the coverage-only message, injection
with checking disabled fails as invalid, and an unknown testcase fails as
invalid. [Failure records](failure_checks.json) retain exact commands and exits.
All three final lint targets complete without warnings. Build logs are retained
in `build_logs/`; compiler outputs and executables remain ignored.

## Native simulator coverage, merged seeds

Raw instrumented-point hits (at least one event), separate from functional bins:

| Suite | Line | Branch | Expression | Toggle |
|---|---|---|---|---|
| polite_outbuf | 12/12 | 18/18 | 6/6 | 244/246 |
| polite_outmux | N/A | N/A | N/A | 20/20 |
| output_path | 12/12 | 18/18 | 6/6 | 264/266 |

Per-seed and merged raw data, annotation, LCOV, and utility logs are retained.
Native annotation uses its default minimum-hit threshold of 10 and aggregates
source rows, so it need not match raw point percentages. Zero-hit point details
are listed in each `merged/native_points.json`. The buffer's `sub[3]` and `sub[4]`
remain zero under legal index progression (active 0..23, completion may reach 24);
these gaps remain visible, without RTL coverage waivers. Continuous-only mux has
no native line/branch/expression points, recorded as N/A rather than 100%.

## Reproduction and limits

From repository root, select modern tools as shown in `../README.md`, then:

```bash
for seed in 1 42 123; do
  make -C tb/Vitthal run CHECK=1 TEST=all NUM=10000 SEED=$seed
  make -C tb/Vitthal cov CHECK=1 TEST=all SEED=$seed
done
# Expected failure, testing the checker:
make -C tb/Vitthal/tb_polite_outbuf run TEST=stream_order SEED=77 INJECT=1
```

Each run's `metadata.txt` records exact tools, source/Makefile hashes, seed,
arguments, checkout, and simulator exit. Representative checked FSTs are saved
for seed 1 in each module's `all_seed1/wave.fst` (`WAVE=1`); other matrix seeds
use `WAVE=0`. No GUI waveform inspection is claimed.

Illegal simultaneous commands and load/clear while busy are outside the legal
controller stimulus. External debug windows exercise the buffer/mux connection;
the actual debug, controller, pad pipeline, and full chip are outside scope.
Finite two-state simulation does not establish X/Z behavior, analog timing,
metastability safety, or exhaustive correctness. No C model, formal verification,
RTL changes, commits, pushes, or PRs were used.
