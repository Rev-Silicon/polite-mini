# RTL elaboration + lockstep (server `bot@server:/home/bot/fleet/polite-vneg1`, LibreLane 3.0.14 docker wrappers)
Configs map `configs/*.vh` defines onto real top parameters via `cfg_wrap.sv`. Run: `verify/rtl_elab/run_elab.sh <tag>`.

| config | stub iverilog | stub verilator* | impl iverilog | impl verilator -Wall |
|---|---|---|---|---|
| a0_outbuf_place0 | PASS | PASS | PASS | PASS |
| a1_outbuf_place1 | PASS | PASS | PASS | PASS |
| b0_no_outbuf_place0 | PASS | PASS | PASS | PASS |
| b1_no_outbuf_place1 | PASS | PASS | PASS | PASS |

*stub verilator run used -Wno-UNUSEDSIGNAL/-Wno-UNUSEDPARAM (stubs are all unused); impl run is full -Wall (only -Wno-DECLFILENAME).
iverilog 13 prints harmless "sorry: constant selects in always_*" sensitivity notes (outbuf/dbg); not errors.

Lockstep vs golden/chip.c @89dad4e (`verify/rtl_sim/run_sim.sh`, N=200000 random cycles x 3 seeds x 4 configs,
cycle-by-cycle uo_out compare): 12/12 PASS, 0 mismatches. See verify/rtl_sim/out/results.txt.

Yosys generic synth (flatten, no liberty): cfg A 2481 cells / 262 DFF; cfg B 1822 cells / 156 DFF (logs in impl/yosys_A*.log).
- 2026-11-01 33 MHz pad-out tree: server iverilog+verilator elab PASS x4 cfgs; rtl_sim 12/12 PASS (200k each), run from ~/scratch/forge-halfrate (bot@server).
