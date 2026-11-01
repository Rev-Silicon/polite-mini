shared/: tests valid for both configs (LOAD, RUN, illegal, CLEAR, DBG_FLAGS, DBG_PSUM) checked against golden/chip.c.
cfg_a/: DUMP_LOAD/DUMP_ABORT, dump∥RUN, CLEAR outbuf collision.  cfg_b/: DUMP_* illegal, RUN forbidden during debug read.
Planned: cocotb + iverilog/verilator, golden model via ctypes (build with -DCHIP_NO_MAIN -shared).

## Extended RTL lockstep (`verify/rtl_sim/run_sim_adv.sh`, 2026-11-01)
`run_sim.sh` is the default smoke (4 cfgs × 3 seeds, random ops incl. all of 0xC–0xF, ena=1). `run_sim_adv.sh` is heavier (~30 s; cfg a0 and b0, N=400k per mode by default):
- mode0: random all-16-opcode stream with random `ena` toggles (golden stepped only on enabled edges; the RTL's registered ena is mirrored);
- mode1: directed 24-bit overflow ramp (≈131k back-to-back RUNs wrap every PE, CLEAR flags, re-wrap, reverse) with debug reads, dumps and ena drops (the default fuzz never wraps);
- mode2: host-legal stream (freezing debug reads ≥ 6 core ticks apart) with ena toggles;
- mnist: `host/mnist` pin traffic (2 images) recorded through golden by `mnist_record.py` and replayed on RTL.
Results in `verify/rtl_sim/out/adv/results.txt` (git-ignored). Adversarial C suites: `verify/adversarial/run_all.sh` runs R1–R9.
