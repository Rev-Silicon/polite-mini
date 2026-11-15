# Validation results — 2026-11-15

The supplied top plus the **five included example implementations** passed the
C-reference regression for both `HAS_OUTBUF` values. The user's original five
submodule sources were not available and have not been validated.

| Run | Pin edges | Comparisons / requirements | Result |
| --- | ---: | ---: | --- |
| Full suite, HAS_OUTBUF=0 | 556,189 | 39,317,823 | PASS |
| Full suite, HAS_OUTBUF=1 | 559,041 | 39,522,648 | PASS |
| Original C model self-tests | — | Original assertions | ALL PASS |
| Random recording, seed 42 | 10,240 | 722,638 | PASS |
| Replay of recorded pin sequence | 10,240 | 722,768 | PASS |
| Directed suite, pin-only checker, HAS_OUTBUF=1 | 60,708 | 652,647 | PASS |
| Included 116-edge waveform demo | 116 | 8,450 | PASS |

The total full-suite pin-edge count is 1,115,230; reset-held rising edges are
checked additionally and are not included in that counter. The two full runs
use seed 1347374153 and 20,000 random stimulus edges each. Replay checks differ
because it adds an initial reset check and does not re-run higher-level test
assertions; its recorded pin transactions and outputs agree.

For each full run, every instruction byte executed in both phases; every PE
saw all 256 signed nibble pairs; every debug width/start-phase combination was
hit. Positive and negative overflow each occurred in all four PEs. CLEAR flags
coincided with all eight overflow events. See the CSV files for actual counts.

## Negative controls

Four independently copied RTL mutations must compile and fail in simulation:
stale snapshot, immediate enable, swapped rows, and short debug window.
`mutation-results.csv` and `mutations.log` contain the measured outcomes. Build
failures are explicitly excluded from the detected-fault criterion. The
mutation script leaves the original design/model/test files unchanged.

## Waveform and CLI checks

- The recorded demo passes pin/internal lockstep with the C model.
- All 36 signals named in `waves/polite.gtkw` resolve in `waves/demo.vcd`.
- The clock has 7,576 ps high and low half periods during ordinary ticks.
- GTKWave 3.3.121 `vcd2fst` and `fst2vcd` complete successfully. The public-pin
  value/time sequences match through the VCD → FST → VCD round trip.
- The GTKWave GUI was **not** launched successfully here: the execution
  environment could not create an X display socket. The saved names and
  waveform data were verified programmatically; `gtkwave_smoke.tcl` is supplied
  for an optional GUI load check on a machine with a display.

## Toolchain and reproduction

The simulator came from the PyPI `verilator==5.38.0` distribution, using the
local GNU C/C++ toolchain. This distribution prints `rev UNKNOWN.REV`; the
recorded package version is not a separately verified upstream source commit.
The runtime was installed in a temporary folder because no system Verilator
was present. That wheel's make configuration needed the following build-only
workaround for its missing GCC precompiled-header include flag:

```bash
make test VERILATOR='python3 -m verilator' \
  EXTRA_VFLAGS='-MAKEFLAGS CFG_CXXFLAGS_PCH_I=-include'
```

A normal distribution-installed Verilator uses `make test` as shown in the
README. No tool binaries are bundled. `validation/regression.log` records the
actual final build/run output.

The unchanged C source has SHA-256:

`c070413456914b814cb64d424d327384637ed9de15a74b8bd7a28b8efd01a853`

It was recovered from `Pasted text(20261115-170431).txt`. The header's structure
and function declarations are the ones in the user's request. The top's logic
is the pasted `tt_um_polite_mini.sv`, with comments/spacing normalized. All five
example submodules were implemented against that C model and clearly marked
as examples. The older example package's guessed opcode mapping was not reused.

These checks establish tested behavior and checker sensitivity, not formal
proof, exhaustive sequence coverage, four-state simulation, timing closure,
or correctness of unseen original submodules.
