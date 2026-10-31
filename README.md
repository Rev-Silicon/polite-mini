# POLITE V(−1): Tiny Tapeout demo chip (local working tree)
Alex GO 2026-10-31. Forge owns Maintenance/RevSilicon. **No public repo and no git remote yet.**
A 2×2 signed-int4 MAC array. The host handles scale, zero point, ReLU and bias.
- Pins: ui_in = 8b data and uio = 8b instruction ([7:4] op, [3:0] args), both inputs every cycle. uo_out = {flags[3:0], data[3:0]} live. A debug freeze takes all 8 outputs.
- Pad pipeline: inputs registered, uo_out fully registered; 2-edge pin latency (see LOCKS).
- Params: `HAS_OUTBUF` (cfg A=1, B=0), `OP_PLACE` (0: bus→left→top, 1: swapped).
- Clock: single edge, target 66 MHz in and 33 MHz out.
See docs/LOCKS.md and docs/OPCODE_PROPOSAL.md. Golden model: `gcc -Wall -O2 -o chip_test golden/chip.c && ./chip_test`
