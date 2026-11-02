# POLITE V(−1): Tiny Tapeout demo chip (local working tree)
Alex GO 2026-10-31. Forge owns Maintenance/RevSilicon. **No public repo and no git remote yet.**
A 2×2 signed-int4 MAC array. The host handles scale, zero point, ReLU and bias.
- Pins: ui_in = 8b data and uio = 8b instruction ([7:4] op, [3:0] args), both inputs every cycle. uo_out[3:0] is a data nibble. uo_out[7:4] stay live: bit 4 overflow, bit 5 illegal, bit 6 dump-nibble marker, bit 7 debug-nibble marker. A debug read streams 2 nibbles (8-bit) or 6 nibbles (24-bit), low nibble first; it does not take over the upper pins. RUN, and a second debug read, are illegal while that stream is still going out.
- Pad pipeline: inputs registered, uo_out fully registered; 2 or 3 edge pin latency (phase-dependent); uo_out updates once per output tick (every 2nd core tick; see LOCKS).
- Output buffer: the chip always has one, so the PE sums stream out (DUMP_LOAD / DUMP_ABORT) while RUN continues.
- Param: `OP_PLACE` (0: bus→left→top, 1: swapped); obsolete under buffer + bus, kept for compatibility.
- Clock: single edge, target 66 MHz in and 33 MHz out.
**TT product: one chip, with the output buffer.** Spec: docs/SPEC.md (PDF: docs/SPEC.pdf). See docs/LOCKS.md and docs/OPCODE_PROPOSAL.md. Golden model: `gcc -Wall -O2 -o chip_test golden/chip.c && ./chip_test`
