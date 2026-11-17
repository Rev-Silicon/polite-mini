
## SystemVerilog testbench coverage

From the repository root, with Verilator, LCOV, and a C++ build toolchain
installed, run the five block testbenches and generate an RTL-only HTML report:

```bash
(
    set -e
    mkdir -p coverage
    for block in ctrl dbg outbuf outmux pe; do
        ./tb/Andres/sv_sb/run_verilator.sh --coverage "coverage/$block.dat" \
            "tb/Andres/sv_sb/polite_${block}_tb.sv" "rtl/polite_${block}.sv"
    done

    verilator_coverage --write-info coverage/all.info \
        coverage/ctrl.dat coverage/dbg.dat coverage/outbuf.dat coverage/outmux.dat coverage/pe.dat
    lcov --extract coverage/all.info "$PWD/rtl/polite_*.sv" --output-file coverage/rtl.info
    genhtml coverage/rtl.info --output-directory coverage/html
)
```

Open `coverage/html/index.html` to inspect line coverage by RTL file. Each
`.dat` file can also be converted separately with `verilator_coverage
--write-info`. The runner enables assertions. Rerunning a test overwrites its
`.dat` file.

Verilator does not instrument the continuous assignments in `polite_outmux`
for line coverage, so that block is absent from the RTL line report. To inspect
its signal toggles separately:

```bash
(
    set -e
    ./tb/Andres/sv_sb/run_verilator.sh --coverage-toggle coverage/outmux-toggle.dat \
        tb/Andres/sv_sb/polite_outmux_tb.sv rtl/polite_outmux.sv
    verilator_coverage --write-info coverage/outmux-toggle-all.info coverage/outmux-toggle.dat
    lcov --extract coverage/outmux-toggle-all.info "$PWD/rtl/polite_outmux.sv" \
        --output-file coverage/outmux-toggle.info
    genhtml coverage/outmux-toggle.info --output-directory coverage/outmux-toggle-html
    verilator_coverage --annotate coverage/outmux-toggle-annotated \
        --annotate-all --annotate-points --annotate-min 1 coverage/outmux-toggle.dat
)
```

The toggle HTML maps signal activity to source lines; its LCOV line percentage
is not a toggle-coverage percentage. For individual toggle points, inspect
`coverage/outmux-toggle-annotated/polite_outmux.sv`. Neither report measures
functional coverage.
