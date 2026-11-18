# polite_outmux: stimulus plan

Self-checking by default (`CHECK=1`), with independent reference comparisons
and fatal mismatches. `CHECK=0` retains coverage-only operation. Scenario
completion and functional bins are reported separately from check results.

| Scenario area | Stimulus and observations |
|---|---|
| Idle/dump/debug | Drive each source mode and all flag combinations; sample actual output encodings. |
| Overlap | Drive debug and dump ownership together with distinct nibble data. |
| Exhaustive | Enumerate each of 4096 independent packed 12-bit input vectors once. |
| Random | 10000 unconstrained representable input vectors per full run; reproducible seed. |

Test names, selected with TEST=<name> (or all):

idle, dump, debug, overlap, flags, exhaustive, random.

The full matrix uses seeds 1, 42, 123. Each full run includes directed cases and
10000 random core ticks/vectors. Build/run/cov/wave/lint/clean targets follow the
team Makefile format. See ../../README.md for commands and results locations.

Compare every settled output byte with a bit-field reference: debug marker,
dump-marker suppression during debug, live flags, and selected data nibble.
Exhaustive inputs remain independent, including nonzero raw idle dump inputs.
`INJECT=1 TEST=idle` must fail at `OUTMUX_MISMATCH`.

Invalid TEST/NUM, randomization failure, and watchdog expiration are fatal
stimulus/infrastructure failures. Enabled scoreboard mismatches are fatal DUT-check failures.
