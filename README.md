# POLITE V(−1): Tiny Tapeout demo chip (local working tree)
Alex GO 2026-10-31. Forge owns Maintenance/RevSilicon. **No public repo and no git remote yet.**
A 2×2 signed-int4 MAC array. The host handles scale, zero point, ReLU and bias.
- Pins: ui_in = 8b data and uio = 8b instruction ([7:4] op, [3:0] args), both inputs every cycle. uo_out = {flags[3:0], data[3:0]} live. A debug freeze takes all 8 outputs.
- Pad pipeline: inputs registered, uo_out fully registered; 2 or 3 edge pin latency (phase-dependent); uo_out updates once per output tick (every 2nd core tick; see LOCKS).
- Output buffer: the chip always has one, so the PE sums stream out (DUMP_LOAD / DUMP_ABORT) while RUN continues.
- Param: `OP_PLACE` (0: bus→left→top, 1: swapped); obsolete under buffer + bus, kept for compatibility.
- Clock: single edge, target 66 MHz in and 33 MHz out.
**TT product: one chip, with the output buffer.** Spec: docs/SPEC.md (PDF: docs/SPEC.pdf). See docs/LOCKS.md and docs/OPCODE_PROPOSAL.md. Golden model: `gcc -Wall -O2 -o chip_test golden/chip.c && ./chip_test`
