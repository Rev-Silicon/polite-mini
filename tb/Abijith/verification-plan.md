# polite_ctrl verification plan

`polite_ctrl` decides which instruction is legal and generates control signals for the other blocks. It stores the input byte, tracks RUN phase 2 and output phase, and maintains sticky illegal/overflow flags.

This is a controller unit test: arithmetic, debug nibble streaming, dump data, and top-level pin timing are outside its scope.

## Start here

Requires Linux/WSL with GNU make, Bash, Verilator (including `verilator_coverage`), a C++ toolchain and Python 3. Put `polite_ctrl.sv`, `tb.sv`, `Makefile`, `coverage_summary.py`, `run_verification.py` and this README in the project root.

```bash
cd ~/PM
make regression                    # Build once; seeds 10 20 30 40 50; VCD on
make regression VCD=0              # Same regression without waveforms
make organize                      # Existing results only; no build or simulation
make coverage-seeds SEEDS="10 20 30 40 50"  # Print the coverage comparison again
```

`make regression` runs ALL by default: 11 tests in each of two configurations per seed, or 110 test/configuration executions over five seeds. Any simulation failure or missing coverage produces a nonzero command exit. The summary distinguishes PASS from failed/incomplete simulation; coverage percentages do not determine simulation correctness.

## Three-folder layout

| Folder | Contents |
|---|---|
| `TB/` | Copies of the testbench, verification scripts and README; simulation logs under `TB/logs/`; overall results in `TB/ALL_regression_summary.txt` |
| `Coverage/ALL_seed_10/` (and 20, 30, 40, 50) | Raw `coverage.dat`, functional reports, code/toggle summaries, Verilator report and annotated RTL under `logs/` |
| `Coverage/ALL_coverage_by_seed.txt` | One row per seed with functional, code and toggle percentages; not merged coverage |
| `VCD/` | `ALL_seed_10.vcd`, `ALL_seed_20.vcd`, etc. when dumping is enabled |

The script copies artifacts from `results/`; it leaves original source files and results in place. Run builds from the project root, not from `TB/`. Repeating a test/seed replaces its current run files and refreshes matching copies. `make clean` removes `obj_dir/` and `results/`, but retains organized copies in TB/Coverage/VCD; those copies are historical until refreshed. VCD copying uses additional disk space.

## Other useful commands

```bash
make build
make run-one TEST=LOAD SEED=10          # Reuse an existing build
make seeds TEST=ALL SEEDS="10 20 30"     # Standard run directories only
make regression TEST=RANDOM SEEDS="10 20" ITERATIONS=10000 VCD=0
python3 run_verification.py --organize-only --seeds 10 20 30 40 50
```

Names are uppercase. Rebuild after changing RTL, testbench, or build flags. Seed, test selection, iteration count and VCD selection need no rebuild. Seeds affect RANDOM; directed tests use fixed inputs. `make regression`/`make seeds` perform the build check automatically. The remaining commands and test descriptions below form the verification plan.

## How to read timing

Each test starts with reset. Inputs are driven on a falling edge. Control signals are checked before the next rising edge; stored state is checked just after it.

`illegal_d` and `ovf_d` describe the current tick's resulting flags. `illegal` and `ovf` store those results after the enabled rising edge. Busy inputs describe the state at the start of the tick.

Example: RUN then NOP:

| Tick | Expected control before edge | Expected state after edge |
|---|---|---|
| RUN | `run_now=1`, `acc_en=0` | `run_busy=1` |
| NOP | `run_now=0`, `acc_en=1` | `run_busy=0` |
| NOP | Both controls 0 | `run_busy=0` |

This assumes no previous RUN and no freeze. Back-to-back RUNs can assert `run_now` and `acc_en` together.

## Every named test

| TEST | What is driven | What must happen |
|---|---|---|
| **LOAD** | LOAD `A5`, NOP with data `FF`, CLEAR input, LOAD `3C` with reserved argument bits set | `inbuf`: `A5` -> stays `A5` -> `00` -> `3C`. Reserved LOAD argument bits are ignored. |
| **RUN** | One RUN, idle ticks, four consecutive RUNs while dump busy, DUMP_LOAD during final phase 2, busy/idle DUMP_ABORT | Legal RUN asserts `run_now`; its following tick asserts `run_busy`/`acc_en`. RUN remains legal during a dump. Buffered DUMP_LOAD asserts `dump_load`; DUMP_ABORT asserts `dump_abort` even when idle. See the no-buffer differences below. |
| **ILLEGAL** | Opcodes C, D, E and F, clearing flags before each | Every reserved opcode sets `illegal_d`, then stored `illegal`. No operation strobe is asserted. Following NOP keeps illegal set. |
| **CLEAR** | All 16 masks with phase 2 busy/not busy and dump busy/not busy; input buffer preloaded and illegal flag preset | A legal mask clears only selected state. Bit 3 conflicts with RUN phase 2; bit 2 conflicts with dump busy or absent output buffer. Any conflict rejects the entire mask: no clear strobes, input byte preserved, illegal set, and selected flags not cleared. |
| **STICKY** | Inject overflow during phase 2, wait four NOPs, clear flags, then clear flags during a new phase-2 overflow | Overflow becomes 1 and stays 1 through NOPs. Accepted CLEAR bit 0 clears old flags. A new overflow on the same clear tick wins: `ovf=1`, while old `illegal` clears. |
| **DEBUG** | Opcodes 6 through B with all arguments; repeat while freeze is open; attempt RUN, LOAD, dump commands and CLEAR during freeze | Accepted reads assert `dbg_start`, select the opcode and `ins[1:0]`. DEBUG_FLAGS bank other than 0 sets illegal and does not start. Open freeze rejects every debug read and RUN. LOAD and nonconflicting CLEAR remain legal; dump legality still follows buffer/busy rules. RUN becomes legal when freeze closes. |
| **STATUS** | DEBUG_FLAGS with combinations of sticky flags, dump busy, phase and pending RUN overflow | `status` matches the bit layout below. Illegal is the old stored flag; overflow includes the pending add. A pending RUN is visible in bit 0. |
| **HOLD** | LOAD `D2`, RUN, then all opcode values with `en=0`; finally re-enable | During hold: phase, input byte, pipeline flag and sticky flags do not change. Pending phase 2 remains pending. On resume, it completes once; the next idle tick has `run_busy=0`. All seven operation strobes must be 0 during hold. Status and next-flag buses remain live, including pending overflow. |
| **RESET** | Set illegal/overflow, LOAD `EF`, leave a RUN pending, disable, assert reset | Before another rising edge, `phase`, `run_busy`, `inbuf`, `illegal` and `ovf` all become 0. Reset works even with `en=0`. |
| **OVF** | All eight combinations of enable, RUN phase 2 and raw PE overflow; also overflow high while idle/clearing flags | A raw PE overflow sets sticky overflow only when accumulation is active and the edge is enabled. With no phase 2 it is ignored. A disabled edge changes no stored flag. |
| **RANDOM** | Default 5,000 random instructions/data bytes, dump busy and raw overflow; simulated 3/11-tick freeze windows | Every tick must match the same reference rules used by directed tests. Random stimulus is checked, not just generated. Different seeds explore different sequences. |

### CLEAR mask reminder

Instruction `5<mask>` selects: bit 3 = partial sums, bit 2 = output buffer, bit 1 = input buffer, bit 0 = both sticky flags. For example, `52` clears the input byte and `51` clears flags.

### Status byte expected on every sampled tick

| Bit | Expected value |
|---|---|
| 7 | 1: a DEBUG_FLAGS capture is itself a debug read |
| 6 | `dump_busy` |
| 5 | Stored `illegal` |
| 4 | Stored `ovf OR (run_busy AND pe_ovf_any)` |
| 3 | `dump_busy`: output-buffer occupancy |
| 2 | `phase` |
| 1 | `dump_busy`: dump paused for a debug capture |
| 0 | `run_busy` |

With all other flags clear, status is `80` for phase 0 or `84` for phase 1. The status bus is checked continuously at sampled ticks, not only during STATUS.

## Both parameter configurations

Every named test runs first with `HAS_OUTBUF=1`, then with `HAS_OUTBUF=0`.

| Operation | Buffer present | Buffer absent |
|---|---|---|
| DUMP_LOAD | Allowed only if dump not busy | Illegal; `dump_load=0` |
| DUMP_ABORT | Legal, including idle | Illegal; `dump_abort=0` |
| CLEAR selecting bit 2 | Allowed only if dump not busy | Entire CLEAR rejected |
| `dump_busy` test input | Busy/idle conditions injected | Tied to 0, matching top-level wiring |

Thus ALL runs 22 test/configuration pairs. A single named test runs 2 pairs.

## Expected console output and pass criteria

```text
START OF TEST: LOAD HAS_OUTBUF=1
END OF TEST: LOAD HAS_OUTBUF=1 PASS
...
Tests run: 22  Passed: 22  Failed: 0
```

A test passes only if all its comparisons match; a mismatch prints the signal, actual value, expected value and context. An expected illegal command is not a failed test: it passes when the DUT correctly rejects it. Unknown test names fail explicitly.

For ALL, every required functional bin must also be hit. Missing bins fail the overall run separately from test failures. A single test may pass with low suite-wide coverage.

## Coverage reports

`make run-one` runs simulation, then produces the three percentages. `make coverage TEST=ALL SEED=42` only rereads that run's saved files; it does not run tests.

| Metric | What the percentage measures | File |
|---|---|---|
| Functional | Defined scenario bins hit / total bins. Includes opcode, CLEAR-mask/busy crosses, raw-overflow/enable/pipeline crosses, debug/freeze crosses, phase and reset enable. | `coverage_outbuf_0.txt`, `coverage_outbuf_1.txt` |
| DUT code | Hit Verilator line/basic-block instrumentation points / total such points | `coverage.dat`, summarized by `coverage_summary.py` |
| DUT toggle | Hit Verilator signal-bit toggle points / total such points | `coverage.dat`, summarized by `coverage_summary.py` |

The combined readable report is `coverage_summary.txt`. Detailed annotations are under `logs/`. Code and toggle counts exclude testbench instrumentation; a count greater than zero means a point was hit. Functional bins total 120 with the buffer and 88 without it: 208 combined. Reports are per seed, not merged across seeds.

## What a full pass does not prove

100% functional coverage means all **defined bins** occurred; it does not mean all possible input sequences were tested. Passing means the RTL agrees with this reference checker on sampled ticks, so checker mistakes can still hide bugs.

The bench mocks PE overflow, dump busy and debug freeze. It does not verify multiply/accumulate results, actual buffer contents outside `inbuf`, dump/debug nibble order, automatic freeze/dump timing, or registered pad latency. Those require separate block/integration tests. Status tests exercise several combinations but do not exhaust every possible status/input combination. Hold checks verify stored state is unchanged and all seven operation strobes are 0. Status and next-flag buses remain combinational: pending overflow uses `run_busy AND pe_ovf_any`, even though `acc_en = en AND run_busy` is 0 during hold.

## Compare coverage for several saved seeds

```bash
make coverage-seeds TEST=ALL SEEDS="1 7 42 123"
make coverage-all TEST=ALL   # Discover every saved seed for this test
```

These commands do not build or simulate. They recalculate functional, DUT code and toggle coverage from each saved run and print one row per seed. The table is saved as `results/ALL_coverage_by_seed.txt` (or the selected test name). Missing data is reported as UNAVAILABLE; other seeds are still processed and the command exits with failure. No seed percentages are merged or averaged. To generate data first, use `make seeds TEST=ALL SEEDS="1 7 42 123"`.
