# polite_outmux: stimulus plan

Coverage-only implementation. No assertions, scoreboards, or expected-output
checks. A named testcase completing records only that its stimulus finished.

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

Legal outbuf strobes come from observed busy: load/clear only idle, abort either
state, no overlapping commands. Phase alternates only on enabled rising edges.
The integration bench supplies debug ownership/data/flags; it does not instantiate
or verify the debug/controller/top modules.

Invalid TEST/NUM, randomization failure, and watchdog expiration are fatal
stimulus/infrastructure failures. DUT output values are never judged correct.
