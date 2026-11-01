# POLITE V(−1) — Tiny Tapeout product A specification

| | |
|---|---|
| Status | V(−1), Tiny Tapeout product **A** (`HAS_OUTBUF=1`), source of truth for host software and review |
| Base tip | `d702ad5` (timing rev, A0 re-PnR) — see References for the commit that adds this file |
| Date | 2026-10-31 (America/Chicago) |
| Repo | Local working tree only. No public repo, no remote. |

Tags: **[Alex]** decided by Alex, **[Forge]** Forge lock (golden-proven), **[Cast]** found by Cast adversarial review.

## 1. Overview

POLITE V(−1) is a 2×2 array of signed int4 multiply-accumulate (MAC) processing elements (PEs) for a Tiny Tapeout demo. Each PE keeps a 24-bit signed partial sum. The host does everything else: scale, zero point, ReLU and bias [Alex]. There is no on-chip ReLU, bias or scale.

The host drives one data byte and one instruction byte every clock, and reads a 4-bit data nibble plus 4 live flags back.

## 2. Product decision

- **The TT product is Cfg A only: `HAS_OUTBUF=1`** [Alex]. It has an output buffer, so a result dump streams out while new `RUN`s execute (RUN ∥ dump).
- Cfg B (`HAS_OUTBUF=0`) remains an RTL parameter build. It exists only for comparison quotes (QUOTES.md, Appendix A). It is not the shipped TT chip.
- Golden model and RTL support both; this spec describes A. Where B differs, it is noted.

## 3. Pins and clock

| Pin | Dir | Meaning |
|---|---|---|
| `ui_in[7:0]` | in | Data byte (used by `LOAD`, echoed by `DBG_INPUT`) |
| `uio_in[7:4]` | in | Opcode |
| `uio_in[3:0]` | in | Opcode arguments |
| `uo_out[3:0]` | out | Data nibble (dump stream; 0 when idle) |
| `uo_out[7:4]` | out | Live flags: `[4]`OVF `[5]`illegal `[6]`dump_busy `[7]`debug_busy |

All 16 input bits are inputs every cycle [Alex]. A debug freeze replaces all 8 output bits for one cycle (Section 7.6).

**Clock.** Single rising edge [Alex]. Target 66 MHz in and 33 MHz out on pads. PnR uses a 15.15 ns clock (66 MHz).

**Pad pipeline** [Forge, Alex GO]. `ui_in`/`uio_in` are registered at the top: sampled on edge k, executed on edge k+1. All 8 `uo_out` bits come from one register loaded every edge. Pin-level latency is **2 edges**: an op applied before edge k shows its result on `uo_out` after edge k+2. Reset loads NOP into the input flops and 0 into `uo_out`. `ena` is registered once (resets to 1), so an ena hold takes effect one edge after the pad changes.

All semantics below are written at core level (one call to `chip_core_step` = one edge). Add the 2-edge pad latency for pin timing.

## 4. Parameters

| Parameter | Product A | Meaning |
|---|---|---|
| `HAS_OUTBUF` | **1** | 1: outbuf, `DUMP_LOAD`, `DUMP_ABORT`, RUN ∥ dump. 0 (Cfg B): no DUMP ops, sums read via `DBG_PSUM`. |
| `OP_PLACE` | 0 or 1 | LOAD placement (Section 8.1). Readable as `DBG_FLAGS` bit 6. |

Both are real RTL parameters, not ifdefs [Alex]. `DBG_FLAGS` bit 7 reports `HAS_OUTBUF` (reads 1 on product A).

## 5. Opcodes

Instruction = `uio[7:4]` op, `uio[3:0]` args [Alex].

| Op | Name | Args | Effect | Freezes uo? |
|---|---|---|---|---|
| 0 | NOP | – | none | no |
| 1 | LOAD | – | `ui_in` → input buffer, 1 cycle | no |
| 2 | RUN | – | one MAC step, 2 clocks | no |
| 3 | DUMP_LOAD | – | snapshot PE sums → outbuf, start 24-nibble stream (A only) | no |
| 4 | DUMP_ABORT | – | stop stream, dump_busy=0 (A only) | no |
| 5 | CLEAR | bitmask `[0]`flags `[1]`inbuf `[2]`outbuf `[3]`PE sums | clear selected state; any collision → whole CLEAR ignored + illegal | no |
| 6 | DBG_FLAGS | bank; only 0 defined | 8b flag bank (Section 7.6) | yes |
| 7 | DBG_BUFFER | `[0]` 0=left 1=top | input buffer byte | yes |
| 8 | DBG_PSUM | `[1:0]` PE (dump order), `[3:2]` byte 0..2 | one byte of a 24b sum | yes |
| 9 | DBG_MUL | `[1:0]` PE | last product, sign-extended 8b | yes |
| A | DBG_ADD | `[1:0]` PE | adder output low byte (Section 7.7) | yes |
| B | DBG_INPUT | – | echo of the latched `ui_in` | yes |
| C–F | illegal | – | set sticky illegal | no |

Illegal encodings that set sticky illegal and do **not** freeze: ops C–F, `DBG_FLAGS` bank ≠ 0, `DBG_PSUM` byte 3. In Cfg B, ops 3 and 4 are also illegal.

PE index (for args and dump order): 0=PE(2,2), 1=PE(2,1), 2=PE(1,2), 3=PE(1,1).

## 6. Flags

| Flag | Kind | Set by | Cleared by |
|---|---|---|---|
| OVF | sticky | a 24b accumulate wrapping | `CLEAR` bit 0 |
| illegal | sticky | any illegal op or collision | `CLEAR` bit 0 |
| dump_busy | level | `DUMP_LOAD` | end of stream, `DUMP_ABORT` |
| debug_busy | level | any freezing DBG (high during the frozen cycle) | next cycle |
| run_busy | level | `RUN` (phase 1) | end of phase 2 |
| dump_paused | level | freezing DBG during an active dump | next cycle |

Reset gives known zeros [Alex]. Live `uo[7:4]` carries the first four; run_busy and dump_paused are only visible through `DBG_FLAGS`.

## 7. Semantics for host writers

### 7.1 RUN
`RUN` is one full MAC step over 2 clocks [Alex]. Phase 1 (the RUN cycle) computes the four products into `mul`. Phase 2 (next cycle) accumulates `psum += mul` with 24b wrap and consumes `mul` (sets it to 0).

A `RUN` on the phase-2 cycle is "while busy": it is ignored and sets sticky illegal. Max rate is one RUN per 2 clocks: `RUN, NOP, RUN, NOP, …` (any non-RUN op may fill the gap).

On phase 2 the RUN still counts as in flight: other opcodes that cycle see `run_busy=1` and the pre-accumulate psum/mul. The accumulate commits after the opcode [Forge, Cast F1/F15].

**RUN during a debug freeze is allowed in product A** [Alex]. Cfg B forbids it (RUN is ignored and sets illegal).

### 7.2 DUMP_LOAD / DUMP_ABORT (A only)
`DUMP_LOAD` copies the four PE sums into outbuf and streams 24 nibbles, one per cycle, starting on the next cycle's output. RUNs may proceed in parallel; they do not disturb the stream.

- `DUMP_LOAD` is **illegal while a dump is busy at cycle start**, including the final-nibble cycle. It does not restart; the current stream ends normally [Forge, Cast R3-F12].
- `DUMP_LOAD` on a RUN phase-2 cycle captures the committed result, `wrap24(psum+mul)`. OVF from that capture is not double-counted; OVF commits only through the accumulate [Forge, R5-F22].
- `DUMP_ABORT` stops the stream; `dump_busy` drops to 0.

There is no plain `DUMP` opcode [Alex].

### 7.3 CLEAR
Args are a bitmask: `[0]` flags (OVF and illegal), `[1]` input buffer (left, top), `[2]` outbuf, `[3]` PE sums. Any collision ignores the **whole** CLEAR and sets illegal [Alex]:

- `[3]` PE while a RUN is in flight, including the phase-2 cycle [Cast F1].
- `[2]` outbuf while the dump was busy at cycle start, including the final-nibble cycle [Cast R2-F8]. (In Cfg B, `[2]` is always a collision.)

An OVF raised by this cycle's phase-2 accumulate survives a same-cycle `CLEAR` flags; prior OVF and illegal are cleared [Forge, R2-F11].

### 7.4 Sticky flags
OVF and illegal stay set until `CLEAR` bit 0. Illegal is set once; repeated illegal events do not toggle it.

### 7.5 Idle output
When no dump is active and no freeze is showing, the data nibble `uo[3:0]` is 0 and the flags in `uo[7:4]` stay live [Alex].

### 7.6 Debug reads (DBG_*)
A freezing DBG op replaces all 8 `uo_out` bits with its byte for **1 cycle** (the cycle after the op at core level), with `debug_busy=1` [Alex]. The next cycle returns to live output.

`DBG_FLAGS` bank 0 bit layout:

| bit | 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 |
|---|---|---|---|---|---|---|---|---|
| | OVF | illegal | dump_busy | debug_busy | run_busy | dump_paused | OP_PLACE | HAS_OUTBUF |

- debug_busy (bit 3) reads 1 in the frozen byte [Cast F5].
- dump_busy is busy-at-start; with a freeze during a dump, dump_paused=1 too, so the pair is coherent even on the final-nibble cycle [Cast R3-F13].
- On RUN phase 2, run_busy=1 [Cast R3-F14], and bit 0 includes the pending OVF from the accumulate committing that cycle [R4-F16].

**Dump pause.** Only a freezing DBG pauses the dump. That cycle the stream does not advance, `dump_paused=1`, and it resumes next cycle. No nibbles are lost. An illegal non-freezing DBG (`DBG_FLAGS` bank≠0, `DBG_PSUM` byte 3) does not pause: the nibble goes out and the stream stays 24 intact [Forge, R2-F10].

### 7.7 Phase-2 debug reads (high level)
On the RUN phase-2 cycle:

- `DBG_PSUM`, `DBG_MUL`: raw registers before the commit.
- `DBG_ADD`: preview of the pending result, low byte of `wrap24(psum+mul)`. Outside phase 2 it returns low byte of psum (mul is 0 after a completed RUN). It never sets OVF [Forge, R3-F15].
- `DBG_FLAGS`: busy-at-start plus pending OVF.

Rule of thumb: anything that reports "this cycle's result" or outlives the cycle (DBG_ADD, DBG_FLAGS OVF, dump capture) sees the pending accumulate; raw register reads stay pre-commit. Adversarial edge cases are in `LESSONS.md` (Cast F1–F22).

## 8. Datapath

### 8.1 LOAD packing
A LOAD byte holds two signed int4 lanes: `{hi = lane1, lo = lane0}` [Alex].

| OP_PLACE | Effect of LOAD |
|---|---|
| 0 | old left → top; new byte → left |
| 1 | old top → left; new byte → top |

So two LOADs fill both buffers. With OP_PLACE=0 the first byte ends in top and the second in left.

### 8.2 PE accumulate
`PE(i,j) += left[i] * top[j]`, i,j ∈ {1,2}, where lane 0 is index 1 and lane 1 is index 2. Products fit in 8 bits signed. Sums are 24-bit two's complement and wrap; any wrap sets sticky OVF [Alex]. The RTL uses a carry-select adder, checked equivalent over 131.7M cases.

### 8.3 Dump stream order
24 nibbles = 4 PEs × 6 nibbles [Alex]:

- PE order: (2,2), (2,1), (1,2), (1,1).
- Within each 24b partial: **little endian, low nibble first** [Alex].

Host reconstruction: for nibble n (0..23), `sum[n/6] |= nib << (4*(n%6))`, then sign-extend from bit 23.

## 9. Timing and physical (A0, timing rev re-PnR)

LibreLane 3.0.14, sky130A hd, clock 15.15 ns (66 MHz), post-GPL repair on, `clkdlybuf4s*` excluded. Source: `pnr/results/QUOTES.md`, "Timing rev re-PnR" table.

| Metric | A0 |
|---|---|
| Die | TT 1x2, 334.88 × 225.76 µm |
| Stdcell area / count | 29633.4 µm² / 4702 |
| Utilization | 44.9% |
| Setup WNS max_ss_100C | **+2.128 ns** |
| Setup WNS nom_ss / min_ss | +2.549 / +3.018 ns |
| Setup WNS nom_tt / nom_ff | +8.620 / +9.576 ns |
| Setup TNS | 0 |
| Hold WNS (all corners) | +0.207 ns |
| Route DRC / Magic / KLayout / LVS | 0 / 0 / 0 / 0 |
| max slew / max cap vios | 494 / 24 (ss only) |

A0 does not fit 1x1 (detailed placement failed at 76% effective utilization), so product A needs a 1x2 tile.

Footnote (comparison only): B0 closes in 1x1, ss WNS +2.749 ns, hold +0.065 ns.

## 10. Open items and non-goals

- Remaining ss-corner slew/cap violations on A0 (494 / 24) are not yet fixed or waived.
- No public repo and no git remote yet.
- Cfg B is not the TT product; its thin hold margin (+65 ps) is deferred and not being worked.
- `DBG_FLAGS` banks other than 0 are undefined (illegal).
- Golden does not model `ena`.

## 11. References

- `docs/LOCKS.md` — locked decisions
- `docs/OPCODE_PROPOSAL.md` — opcode table
- `LESSONS.md` — adversarial findings and phase-2 detail
- `pnr/results/QUOTES.md` — PnR quotes
- `golden/chip.c` — golden model (`chip_core_step` core, `chip_step` pin-level); RTL matches it cycle-exact on `uo_out` (3×200k random cycles × 4 configs)
- Commit: the commit that added this file (`git log -1 -- docs/SPEC.md`); based on `d702ad5`.

## Appendix A — Cfg B differences

`HAS_OUTBUF=0`: no outbuf; ops 3/4 illegal; `CLEAR [2]` always collides; sums read with `DBG_PSUM`; RUN during a debug freeze is ignored and sets illegal. Single 1x1 tile. Not shipped on TT.
