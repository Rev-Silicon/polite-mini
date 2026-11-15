# POLITE Mini — Verilator / chip.c lockstep testbench

A complete, runnable pin-level verification package for `tt_um_polite_mini.sv`, with the actual C golden model, a C++ driver/scoreboard, an SV observation wrapper, directed and random tests, coverage counters, record/replay, and GTKWave traces.

**Source boundary:** `rtl/tt_um_polite_mini.sv` preserves the logic of the top pasted in this request. `golden/chip.c` is the complete, unchanged model recovered from your November 15 pasted-text file; `golden/chip.h` has the declarations and structure you supplied. The five files in `example_rtl/` are newly corrected example implementations derived from that model. Your original five submodule files were not supplied. Passing the included examples validates this top and test environment; run the same bench with your own submodules before claiming your full RTL passes.

## Quick start (Linux or WSL)

Install Verilator 5.x, a C++17-capable compiler, GNU Make, and GTKWave. Python 3 is needed only for the optional mutation test. For Debian/Ubuntu:

```bash
sudo apt-get update
sudo apt-get install -y verilator gtkwave build-essential python3
```

Extract the ZIP, then:

```bash
cd polite-mini-lockstep

# Test your actual RTL against your project's golden model
make test RTL_DIR=.. GOLDEN_DIR=../golden

# Run directed tests and open GTKWave
make wave CONFIG=1 RTL_DIR=.. GOLDEN_DIR=../golden

# Test/view the configuration without the output buffer
make wave CONFIG=0 RTL_DIR=.. GOLDEN_DIR=../golden
```

`make test` returns nonzero on a build error, mismatch, failed directed requirement, or unmet full-suite coverage goal. GTKWave requires a graphical display; under Windows, use WSLg or a configured X server. Simulation and VCD generation work without a display.

Open the included short demo immediately:

```bash
gtkwave waves/demo.vcd waves/polite.gtkw
```

Run without opening a GUI:

```bash
make directed CONFIG=1 ARGS='--trace build/example/buf1/polite.vcd'
gtkwave build/example/buf1/polite.vcd waves/polite.gtkw
```

Verilator's `--cc --exe --build` compiles the SV model and links the C++ harness. The C reference is separately compiled as C11 with `CHIP_NO_MAIN`; `extern "C"` preserves its linkage. VCD generation uses `--trace` and `VerilatedVcdC`. The GTKWave CLI accepts the dump and saved signal view as positional arguments. Official command references: [Verilator](https://verilator.org/guide/latest/exe_verilator.html), [GTKWave](https://gtkwave.github.io/gtkwave/man/gtkwave.1.html).

## Test your actual RTL

Put these five files in one folder: `polite_ctrl.sv`, `polite_pe.sv`, `polite_outbuf.sv`, `polite_dbg.sv`, and `polite_outmux.sv`.

```bash
make test RTL_DIR=/absolute/path/to/your/rtl
make wave RTL_DIR=/absolute/path/to/your/rtl CONFIG=1
```

If that folder also contains `tt_um_polite_mini.sv`, Make uses that copy. Otherwise it uses the provided top. `RTL_DIR` is added as an include directory. Additional headers/RTL can be supplied with `EXTRA_VFLAGS`. Both parameter settings always use the same selected source set.

Other overrides:

```bash
make test RTL_DIR=/path/to/rtl TOP=/path/to/tt_um_polite_mini.sv
make test RTL_DIR=/path/to/rtl GOLDEN_DIR=/path/to/golden
```

Use paths without spaces. Each `RTL_DIR` gets a separate build directory. Run `make clean` after changing `TOP`, `GOLDEN_DIR`, compiler flags, or included headers in an existing build directory, because those choices are not all encoded in its directory name. Build sources must expose the top-level internal signal names present in the supplied top; no submodule-internal signal names are referenced.

`--pins-only` disables internal state comparisons but still uses the same wrapper. It compares the public pins every edge and runs the directed stream checks. It does not remove the wrapper's hierarchical references at compile time.

## Commands

| Command | Work performed |
| --- | --- |
| `make test` | C self-test, then all suites for both configurations |
| `make check CONFIG=1` | Full regression for one configuration; writes `stats.csv` and `coverage.dat` |
| `make directed CONFIG=1` | Reset, pipeline, decode, debug, dump, collision and enable tests |
| `make exhaustive CONFIG=1` | Every pair of packed operand bytes: 65,536 combinations |
| `make wrap CONFIG=1` | Positive/negative wrap and CLEAR/new-overflow collision |
| `make random CONFIG=1 SEED=42 CYCLES=100000` | Seeded arbitrary and compute-heavy pin traffic |
| `make golden-test` | Run the original C model's own self-tests |
| `make wave CONFIG=1` | Generate directed VCD and open GTKWave |
| `make view CONFIG=1` | Open an already generated VCD |
| `make clean` | Delete generated `build/` only; bundled demo and validation files remain |

The optional `scripts/run.sh` forwards arguments to Make from the correct project directory.

## Scoreboard and scheduling

1. Drive `ui_in`, `uio_in`, and `ena` while the clock is low. Verify that sequential observations have not changed.
2. Save the model's pre-edge state. Call `chip_step_ena(&ref, data, instruction, ena)` exactly once per non-reset rising edge.
3. Raise the RTL clock, evaluate, then compare every public output and the observable state against the model. Check again after the falling edge.
4. Count a pad publication only when **pre-edge** `ena_q && otick_q` is true. Repeated identical bytes are separate beats; unchanged `uo_out` is not a new beat on every core edge.

No expected output is obtained from the RTL's `core_uo`, `phase`, or PE values. Those signals can be observed or checked; all expected timing/state comes from the C model or explicit directed expectations. Only reset and the external pins modify the DUT. The bench never forces internal state.

The SV wrapper exposes signals already present in the top: registered enable and inputs, phase, delayed output tick, core/pad pipeline bytes, input buffer, busy/illegal/overflow/freeze flags, and four sums/products. Both UIO output buses must remain zero. The pin checker runs even when internal checking is disabled.

The model uses enabled core edges, so a hold does not advance its phase, input pipeline, RUN, dump, freeze, or output pipeline. `ena` itself is sampled every rising edge; falling and rising enable pins both take effect one edge later. Reset is asserted between clock edges and is checked even while the registered enable is low. The clock period is 15,152 ps nominally (~66 MHz); this is functional verification, not setup/hold or static timing analysis.

## Tests and coverage

| Area | Cases exercised |
| --- | --- |
| Reset / enable | Initial reset with `ena=0`; delayed falling/rising enable; changing pins during a hold; outstanding RUN/debug/dump; asynchronous reset in active and held situations |
| Arithmetic | Four signed int4 lane mappings; positive/negative/zero products; all 65,536 byte pairs; all 256 signed nibble pairs per PE; back-to-back RUN; LOAD during deferred accumulate; sticky products after CLEAR |
| Decoder | Every instruction byte 0x00–0xFF at both phases; ignored argument aliases; every CLEAR mask idle and during a pending add; busy dump CLEAR masks; invalid flags banks; reserved opcodes |
| Debug | Every PE selector and reserved selector alias; two- and six-nibble LS-first streams; exact freeze boundaries for both start phases; blocked RUN; rejected nested read; pre-add PSUM versus pending ADD; idle ADD; captured input remains frozen despite later LOAD |
| Flags | Entire `uo_out` byte on every edge; bank-0 phase, run-pending, dump-busy and paused bits; sticky illegal and overflow; no freeze on invalid flags bank |
| Dump | Exact 24-nibble order; pending-add snapshot; live sums change after capture; debug pause and enable stall; last-nibble busy-at-start rejection; abort/reload; abort inside debug; dump started during debug |
| No output buffer | DUMP_LOAD, DUMP_ABORT and every CLEAR mask containing bit 2 rejected; no dump-marked pad beats |
| Overflow | 131,072 additions of +64 and 149,797 additions of −56; wrapped signed readback; CLEAR flags coincident with the overflowing add; later sticky flag clear |
| Random | Reproducible arbitrary data/instructions; biased compute bursts; long enable stalls; periodic reset; final debug readback |

`stats.csv` reports measured counts, including every instruction-byte/phase bin. The full suite fails if any instruction/phase bin, signed operand pair, or debug length/phase bin is missing, or if required enable/dump interactions were not reached. Overflow must occur in both directions. These are functional coverage goals, not a claim of exhaustive temporal verification or 100% RTL code coverage.

Verilator additionally writes line/toggle/user coverage data from `--coverage`; for example:

```bash
verilator_coverage --annotate build/annotated build/example/buf1/coverage.dat
```

Inspect actual annotation results before making code coverage claims. A C-model agreement can still share a specification error with the RTL; independent arithmetic and decoded-packet checks supplement lockstep but do not constitute a formal proof. Verilator is primarily a two-state simulator; this bench does not establish four-state X/Z propagation or metastability behavior.

## Failure diagnosis and exact replay

A failure prints configuration, scenario, seed, edge, simulation time, expected/observed value, and the last 16 pin transactions, including the registered instruction actually executing. The VCD is flushed before failure.

```bash
make random CONFIG=1 SEED=42 CYCLES=100000 \
  ARGS='--record build/pins.txt --trace build/failing.vcd'

build/example/buf1/Vsim_top --replay build/pins.txt \
  --trace build/replay.vcd
```

Replay with the **same CONFIG** used for recording. The text format is `R ena` for the asynchronous reset sequence and `T data instruction ena` for one pin edge; numbers are decimal. The file includes every testbench-driven pin edge, including follow-up readback transactions. The original seed rerun can use a trace window:

```bash
build/example/buf1/Vsim_top --suite random --seed 42 --cycles 100000 \
  --trace build/window.vcd --trace-from 90000 --trace-to 90500
```

Trace windows reduce file size; the entire simulation still executes. For interactive inspection, follow `in_i_q`/`in_d_q`, `run_now`, `run_busy`, `acc_en`, sums/products, `phase`, `otick_q`, `uo_q`, and `uo_out`. Nibble output markers are bit 7 debug, bit 6 dump; bit 5 is illegal and bit 4 overflow.

## Negative controls

```bash
python3 scripts/mutation_test.py
```

This copies the example RTL into separate build folders and introduces four faults: stale pre-add dump capture, enable without its one-edge delay, swapped PE rows, and a shortened debug freeze. Each must compile and fail at simulation time. A tool/build error does **not** count as a detected fault. Original sources are never edited. Results and full logs go under `build/mutations/`.

## Files

| Path | Purpose |
| --- | --- |
| `rtl/tt_um_polite_mini.sv` | Supplied top logic |
| `example_rtl/*.sv` | Five clearly marked example submodules |
| `golden/chip.c`, `golden/chip.h` | Golden model, original C self-tests, and interface |
| `tb/sim_top.sv` | SV wrapper exposing the supplied top's signals |
| `tb/testbench.cpp` | Driver, lockstep scoreboard, tests, coverage, trace and replay |
| `tb/demo.pins` | Short reproducible signed RUN / dump / debug / stall demo |
| `Makefile`, `scripts/run.sh` | CLI build and run entry points |
| `scripts/mutation_test.py` | Four negative-control tests |
| `waves/polite.gtkw`, `waves/demo.vcd` | Saved waveform groups and recorded demo |
| `scripts/gtkwave_smoke.tcl` | Optional load/check/exit script for GTKWave |
| `scripts/check_wave.py` | Verify saved signal names, clock half-periods and an optional VCD/FST round trip |
| `validation/` | Actual validation results and provenance |

No generated simulator binaries, object files, or third-party tool distributions are bundled. The package contains all design/model/test source files used by its standalone run; normal system tools remain prerequisites.

## Validation notes

See `validation/RESULTS.md` for the completed runs and limitations. `validation/buf0.csv` and `validation/buf1.csv` contain the measured functional counters, and `validation/mutation-results.csv` identifies the four detected faults. The full build transcript is in `validation/regression.log`.
