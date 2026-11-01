# POLITE V(−1) — Architecture and Instruction Set Specification

| | |
|---|---|
| Chip | POLITE V(−1), Tiny Tapeout demonstration chip |
| Document | Architecture and instruction set architecture (ISA) specification |
| Date | 2026-10-31 (US Central) |

## 1. Overview

POLITE V(−1) is a 2×2 array of signed 4-bit integer (int4) multiply-accumulate units, called processing elements. Each processing element keeps a 24-bit signed partial sum. The host does everything else: scale, zero point, rectified linear unit (ReLU) and bias. There is no on-chip ReLU, bias or scale.

The chip has an output buffer, so a result dump streams out while new multiply-accumulate steps run in parallel.

The host drives one data byte and one instruction byte every clock, and reads back a 4-bit data nibble plus 4 live status flags, updated once per beat (2 clocks).

Terms used below:

| Term | Meaning |
|---|---|
| Processing element (PE) | One of the four multiply-accumulate cells, named PE(row, column) |
| Multiply-accumulate (MAC) | Multiply two int4 values and add the product to a running sum |
| Partial sum | The 24-bit signed running sum held in each processing element |
| Output buffer | Copy of the four partial sums that the dump stream reads from |
| Beat | One output update period: 2 clocks (30.30 ns). `uo_out` changes at most once per beat |
| Freeze | One beat in which a debug read replaces all 8 output pins (2 core edges inside the core) |
| Core edge | One rising edge of the 66 MHz clock. "Edge", "clock" and "cycle" below all mean one core edge |
| Output tick | A core edge on which the output phase register (RTL `out_phase_q`) is 1. The dump advances only on output ticks |
| Load placement | Build-time layout setting, RTL parameter `OP_PLACE`; product = 0 (Section 3) |
| Output buffer present | RTL parameter `HAS_OUTBUF`; the product chip has it (= 1, debug flags bit 7) |
| RUN phase 1 / phase 2 | First and second clock of a RUN (RTL `run_phase2` = phase 2) |
| Other short names | inbuf / outbuf = input / output buffer; OVF = overflow; DBG_* = DEBUG_* |

## 2. Pins and clock

| Pin | Direction | Meaning |
|---|---|---|
| `clk` | input | Single rising-edge clock, 66 MHz target |
| `rst_n` | input | Active-low reset: all state 0, input registers hold NOP, `ena` register = 1 |
| `ena` | input | Registered once (resets to 1); low holds the whole chip, one edge after the pin changes |
| `ui_in[7:0]` | input | Data byte (used by LOAD, echoed by DEBUG_INPUT) |
| `uio_in[7:4]` | input | Opcode |
| `uio_in[3:0]` | input | Opcode arguments |
| `uo_out[3:0]` | output | Data nibble (dump stream; 0 when idle) |
| `uo_out[7:4]` | output | Live flags: bit 4 overflow, bit 5 illegal, bit 6 dump busy (1 exactly on the beats that carry a dump nibble), bit 7 debug busy |

The `uio` pads are bidirectional in the Tiny Tapeout package, but this design drives `uio_oe = 0` on all 8 bits and ties `uio_out` to 0, so they are used as inputs only. All 16 input bits (`ui_in` and `uio_in`) are sampled on every rising edge.

![Pins between the host and the chip](figures/pins.svg)

<p align="center">Figure 1: pins between the host and the chip</p>

A debug read replaces all 8 output bits for one beat, which is 2 clocks (Section 6.6).

**Clock.** Single rising edge. The core and inputs run at 66 MHz (15.15 ns clock). The outputs change at no more than 33 MHz. An output phase register resets to 0 and toggles on every edge. An edge where it is 1 is an *output tick*. `uo_out` is loaded only on the edge right after an output tick, so the pins hold each value for one beat (2 clocks). Place-and-route uses the 15.15 ns clock with a 2-cycle multicycle constraint on `uo_out`.

**Pad pipeline.** `ui_in` and `uio_in` are registered at the top level: sampled on edge k, executed on edge k+1. All 8 `uo_out` bits come from one register, loaded once per beat. An operation applied before edge k executes on edge k+1. Its result is on `uo_out` after edge k+2 when edge k+1 is an output tick, and after edge k+3 otherwise. The host knows the beat phase by counting clocks from reset. Reset loads NOP into the input registers and 0 into `uo_out`. The `ena` pin is registered once (resets to 1), so a hold driven by `ena` takes effect one edge after the pin changes.

The behavior in the rest of this document is described one edge at a time inside the core. For pin timing, add the pad latency (2 or 3 edges) and the once-per-beat output update.

## 3. Load placement

The chip has one layout setting, load placement, fixed at build time. It is the RTL parameter `OP_PLACE`. It decides which input buffer a LOAD writes first (Section 7.1). The host can read it from debug flags bit 6. The product chip is built with load placement 0 (debug flags bit 6 reads 0).

## 4. Commands

A command is one 8-bit instruction byte on `uio_in`: bits [7:4] are the opcode, bits [3:0] the arguments. A new command can be given on every rising edge.

| Op | Name | What it does | Freezes output? |
|---|---|---|---|
| 0x0 | NOP | Nothing; the dump stream and flags keep flowing | no |
| 0x1 | LOAD | Shift `ui_in` into the input buffer (1 edge) | no |
| 0x2 | RUN | One multiply-accumulate step (2 edges) | no |
| 0x3 | DUMP_LOAD | Copy the partial sums to the output buffer and start the 24-nibble stream | no |
| 0x4 | DUMP_ABORT | Stop the stream; dump busy = 0 | no |
| 0x5 | CLEAR | Zero the selected state; any conflict ignores the whole CLEAR and sets illegal | no |
| 0x6 | DEBUG_FLAGS | Return the 8-bit flag byte (Section 6.6) | yes, 1 byte |
| 0x7 | DEBUG_BUFFER | Return the left or top input buffer byte | yes, 1 byte |
| 0x8 | DEBUG_PARTIAL_SUM | Return one byte of a 24-bit partial sum | yes, 1 byte (3 commands for 24 bits) |
| 0x9 | DEBUG_MULTIPLY | Return the last product, sign-extended to 8 bits | yes, 1 byte (full product) |
| 0xA | DEBUG_ADD | Return the low byte of the adder output (Section 6.7) | yes, 1 byte (low byte only) |
| 0xB | DEBUG_INPUT | Return the registered `ui_in` byte | yes, 1 byte |
| 0xC–0xF | — | Illegal: set the illegal flag | no |

| Command | Argument bits |
|---|---|
| NOP, LOAD, RUN, DUMP_LOAD, DUMP_ABORT, DEBUG_INPUT | [3:0] reserved, drive 0 |
| CLEAR | [3] partial sums, [2] output buffer, [1] input buffer (left and top), [0] flags (overflow and illegal); any combination |
| DEBUG_FLAGS | [3:0] bank, only 0 is defined |
| DEBUG_BUFFER | [3:1] reserved, [0] buffer (0 = left, 1 = top) |
| DEBUG_PARTIAL_SUM | [3:2] byte (0 = bits 7:0, 1 = bits 15:8, 2 = bits 23:16), [1:0] processing element |
| DEBUG_MULTIPLY / DEBUG_ADD | [3:2] reserved, [1:0] processing element |

Whenever a command takes a processing element index, it sits in [1:0]. Only DEBUG_PARTIAL_SUM uses [3:2], as its byte select; CLEAR uses all four bits as a mask. Processing element index (also the dump order): 0 = PE(2,2), 1 = PE(2,1), 2 = PE(1,2), 3 = PE(1,1).

These argument values set the illegal flag and do **not** freeze: DEBUG_FLAGS with bank ≠ 0, and DEBUG_PARTIAL_SUM with byte 3. Reserved bits are ignored.

## 5. Flags

| Flag | Kind | Set by | Cleared by |
|---|---|---|---|
| Overflow | sticky | a 24-bit accumulate wrapping around | CLEAR bit 0 |
| Illegal | sticky | an illegal opcode (0xC–0xF); RUN on RUN phase 2; DUMP_LOAD while a dump is in progress; a CLEAR conflict (Section 6.3); DEBUG_FLAGS bank ≠ 0; DEBUG_PARTIAL_SUM byte 3 | CLEAR bit 0 |
| Dump busy | level | DUMP_LOAD | end of stream, DUMP_ABORT |
| Debug busy | level | a freezing debug read. Pins: during the frozen beat all 8 `uo_out` bits are the frozen debug byte, and bit 3 of that byte is 1. Core: 1 for the edge after the debug opcode executes | the following edge (core) |
| Run busy | level | RUN phase 1 | end of RUN phase 2 |
| Dump paused | level | a freezing debug read during an active dump; the freeze covers any output tick in its 2-edge window, so the dump does not advance. Visible only in a DEBUG_FLAGS frozen byte (bit 5) | end of the freeze |

Sticky means the flag stays set until CLEAR with bit 0. Reset sets every flag and register to zero, except the registered `ena`, which resets to 1. The live pins `uo[7:4]` carry the first four flags; run busy and dump paused are visible only through DEBUG_FLAGS.

## 6. Behavior for host software

### 6.1 RUN
RUN is one full multiply-accumulate step over 2 clocks. On RUN phase 1 (first clock) the chip computes the four products. On RUN phase 2 (second clock) it adds them to the partial sums, wrapping at 24 bits, and clears the products to 0.

A RUN on phase 2 of a previous RUN is ignored and sets the illegal flag. The maximum rate is one RUN every 2 clocks: `RUN, NOP, RUN, NOP, …` (any opcode other than RUN can fill the gap).

On RUN phase 2 the RUN still counts as in progress. Other opcodes on that cycle see run busy = 1 and the partial sums before the add; the add takes effect at the end of the cycle.

RUN is allowed during a debug freeze.

### 6.2 DUMP_LOAD and DUMP_ABORT
DUMP_LOAD copies the four partial sums into the output buffer and streams 24 nibbles, one per output tick (one per beat), starting at the first output tick after the DUMP_LOAD edge. A dump keeps dump busy high for 48 clocks (49 if DUMP_LOAD lands on an output tick). RUNs can continue during the stream without affecting it.

- DUMP_LOAD is **illegal while a dump is in progress** at the start of the cycle, including the cycle that sends the last nibble. It does not restart; the current stream finishes normally.
- DUMP_LOAD on RUN phase 2 captures the result of that RUN. The overflow flag is still set only once, by the RUN itself.
- DUMP_ABORT stops the stream; dump busy drops to 0. DUMP_ABORT with no dump running is a legal no-op (illegal is not set).

**Reading the stream at the pins.** The dump nibbles are the beats with `uo_out[6]` = 1 that are not frozen by a debug read, in order. The DUMP_LOAD beat shows bit 6 = 0, the last-nibble beat shows bit 6 = 1, and the beat after it shows 0, on either beat phase. The host does not need to track the phase. Nibble 0 is on the pins 3 or 4 edges after DUMP_LOAD is applied.

There is no separate plain DUMP opcode.

### 6.3 CLEAR
The arguments are a bit mask: bit 0 flags (overflow and illegal), bit 1 input buffer (left and top), bit 2 output buffer, bit 3 partial sums. If any selected bit conflicts with work in progress, the **whole** CLEAR is ignored and the illegal flag is set:

- Bit 3 (partial sums) while a RUN is in progress, including RUN phase 2.
- Bit 2 (output buffer) while a dump was in progress at the start of the cycle, including the last-nibble cycle.

If RUN phase 2 overflows on the same cycle as a CLEAR of the flags, the new overflow stays set. Earlier overflow and illegal are cleared.

### 6.4 Sticky flags
Overflow and illegal stay set until CLEAR bit 0. Repeated illegal events leave the flag at 1.

### 6.5 Idle output
When no dump is running and no debug freeze is showing, the data nibble `uo[3:0]` is 0 and the flags in `uo[7:4]` stay live.

### 6.6 Debug reads
A freezing debug read replaces all 8 `uo_out` bits with its byte for **1 beat (2 clocks)**, with debug busy = 1. Inside the core the frozen byte is held for 2 edges (the opcode's edge and the next one), so exactly one output tick carries it to the pins. The next beat returns to live output. Two freezing reads on consecutive edges are not supported: which bytes reach the pins depends on the beat phase. Space debug reads at least one beat (2 clocks) apart: opcode, NOP. Spaced reads always return one byte per beat, in order.

DEBUG_FLAGS bank 0 bit layout:

| Bit | Meaning |
|---|---|
| 0 | Overflow |
| 1 | Illegal |
| 2 | Dump busy |
| 3 | Debug busy (reads 1 in the frozen byte) |
| 4 | Run busy |
| 5 | Dump paused |
| 6 | Load placement setting |
| 7 | Output buffer present (reads 1) |

- Dump busy reports the state at the start of the cycle. A freeze during a dump also shows dump paused = 1, so the two bits agree even on the last-nibble cycle.
- On RUN phase 2, run busy = 1, and bit 0 includes any overflow from the add that finishes on that cycle.

#### 6.6.1 Debug read latency and width

One debug opcode produces one freeze, and one freeze returns one byte. There is no multi-byte burst. At the pins, an opcode sampled on rising edge k shows its byte on `uo_out` after edge k+2 or k+3, depending on the beat phase, and holds it for one beat (2 clocks). Reading `uo_out` after edge k+3 always returns the byte. Issue debug opcodes at least one beat (2 clocks) apart: opcode, NOP; each returns its byte one beat after the previous one.

| Opcode | Width per freeze | Opcodes for the full value | Byte visible at pins (opcode sampled on edge k) |
|---|---|---|---|
| DEBUG_FLAGS | 8 bits | 1 | after edge k+2 or k+3 |
| DEBUG_BUFFER | 8 bits (left or top) | 1 | after edge k+2 or k+3 |
| DEBUG_PARTIAL_SUM | 8 of 24 bits (argument picks byte 0, 1 or 2) | 3 | issued on edges k, k+2, k+4: one byte per beat, visible after edges k+2/k+3, k+4/k+5, k+6/k+7 depending on the beat phase; read after k+3, k+5, k+7 to be safe |
| DEBUG_MULTIPLY | full 8-bit product (int4 × int4, sign-extended) | 1 | after edge k+2 or k+3 |
| DEBUG_ADD | low 8 bits of the 24-bit wrapped sum only | 1 (low byte only) | after edge k+2 or k+3 |
| DEBUG_INPUT | 8 bits | 1 | after edge k+2 or k+3 |

DEBUG_ADD never returns the upper 16 bits. To read the full 24-bit result of an add, let the RUN finish and then read the partial sum with three DEBUG_PARTIAL_SUM opcodes.

![Debug read timing](figures/debug_timing.svg)

<p align="center">Figure 2: debug reads at the pins, one byte per opcode, held for one beat (2 clocks)</p>

**Dump pause.** Only a debug read that freezes the output pauses the dump. The stream does not advance on any output tick covered by the freeze (dump paused = 1). It resumes on the next output tick that is not frozen. No nibbles are lost. An illegal debug read that does not freeze (DEBUG_FLAGS bank ≠ 0, DEBUG_PARTIAL_SUM byte 3) does not pause: the nibble goes out and the stream stays complete.

### 6.7 Debug reads on RUN phase 2
- DEBUG_PARTIAL_SUM and DEBUG_MULTIPLY return the registers as they are before the add.
- DEBUG_ADD returns a preview of the result: the low byte of the 24-bit wrapped sum of partial sum plus product. At other times it returns the low byte of the partial sum (the product is 0 after a finished RUN). It never sets overflow.
- DEBUG_FLAGS returns the start-of-cycle busy flags plus any overflow from the add.

In short: reads that report this cycle's result, or that keep a copy past this cycle (DEBUG_ADD, DEBUG_FLAGS overflow, DUMP_LOAD capture), see the add. Plain register reads see the values before it.

## 7. Datapath

### 7.1 LOAD packing
A LOAD byte holds two signed int4 lanes: high nibble = lane 1, low nibble = lane 0. LOAD shifts the input buffers by one byte:

| Load placement (debug flags bit 6) | Effect of LOAD |
|---|---|
| 0 | old left → top; new byte → left |
| 1 | old top → left; new byte → top |

Two LOADs fill both buffers. With setting 0, the first byte ends up in top and the second in left. With setting 1, the first byte ends up in left and the second in top.

![Load path into the array](figures/load_path.svg)

<p align="center">Figure 3: LOAD path. High nibble [7:4] is lane 1 (index 2), low nibble [3:0] is lane 0 (index 1). The daisy-chain dump is removed; results leave through the output buffer (DUMP_LOAD).</p>

### 7.2 Accumulate
`PE(i,j) += left[i] × top[j]`, with i, j ∈ {1, 2}; lane 0 is index 1 and lane 1 is index 2. Products fit in 8 signed bits. Partial sums are 24-bit two's complement and wrap around; any wrap sets the sticky overflow flag.

### 7.3 Dump stream order
24 nibbles = 4 processing elements × 6 nibbles:

- Processing element order: (2,2), (2,1), (1,2), (1,1).
- Within each 24-bit partial sum: **little-endian, low nibble first**.

Host reconstruction: for nibble n (0..23), `sum[n/6] |= nibble << (4*(n%6))`, where `n/6` is integer division (processing element order above) and `sum` starts at 0. Then sign-extend each sum from bit 23: `if (sum & 0x800000) sum -= 0x1000000` (equivalently `sum |= ~0xFFFFFF` in a 32-bit signed integer).

## 8. Timing and physical results

Flow: LibreLane 3.0.14, SkyWater 130 nm (sky130A) high-density cells, 15.15 ns clock (66 MHz), with a 2-cycle multicycle constraint on `uo_out`.

**The physical results below are pre-half-rate.** They come from the earlier place-and-route run of the product chip, before the output-tick RTL and the `uo_out` multicycle constraint. They are not results for commit `677ce98`; a new place-and-route run on that commit is pending.

| Metric | Value |
|---|---|
| Die | Tiny Tapeout 1×2 tile, 334.88 × 225.76 µm |
| Standard cell area / count | 29633.4 µm² / 4702 cells |
| Utilization | 44.9% |
| Setup worst negative slack (WNS), slow corner 100 °C | **+2.128 ns** |
| Setup WNS, nominal slow / minimum slow | +2.549 / +3.018 ns |
| Setup WNS, nominal typical / nominal fast | +8.620 / +9.576 ns |
| Setup total negative slack (TNS) | 0 |
| Hold WNS, all corners | +0.207 ns |
| Routing design rule check (DRC) / Magic DRC / KLayout DRC / layout versus schematic (LVS) | 0 / 0 / 0 / 0 errors |
| Max slew / max capacitance violations | 494 / 24 (slow corner only) |

The design does not fit a 1×1 tile, so it uses a 1×2 tile. Verified at commit `677ce98`: the register-transfer level (RTL) design matches the reference model (`golden/chip.c`) cycle for cycle on `uo_out` in random simulation; the reference model self-test `gcc -Wall -O2 -o chip_test golden/chip.c && ./chip_test` reports ALL PASS; and the adversarial suite, including round R7, passes 70 / 0 / 0 (pass / fail / gap). The physical table above predates this commit (see above).

## 9. Open items

- The remaining slow-corner slew and capacitance violations (494 / 24) are not yet fixed or waived.
- DEBUG_FLAGS banks other than 0 are undefined and illegal.
- The reference model does not model `ena`. Holding `ena` low also holds the output phase register, so the beat phase picks up where it stopped.

## 10. References

- `docs/LOCKS.md` — design decisions
- `docs/OPCODE_PROPOSAL.md` — opcode table
- `LESSONS.md` — edge-case findings
- `pnr/results/QUOTES.md` — place-and-route results
- `golden/chip.c` — cycle-level reference model
