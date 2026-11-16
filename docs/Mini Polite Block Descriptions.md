# **POLITE Mini — Block descriptions**

For each RTL block this document says: which signals come in and from where, what the block does with them on each core tick, and what goes out and to where. Signal names are the ones in the RTL. The behavior is the behavior of `golden/chip.c`, which the RTL matches edge for edge.

## **Conventions**

* **Core tick:** one rising edge of `clk` (66 MHz). All flops in every block update on it, and only when `en` (the registered `ena_q`) is 1\.  
* **Start of tick:** the value a flop holds *before* this edge. Almost every rule in the chip ("busy-at-start") looks at start-of-tick values.  
* **Output tick:** a core tick on which `phase` \= 1 (every second tick, from reset). Only the core output computed on an output tick ever reaches the `uo_out` pins.  
* **"Tick t":** the core tick on which a command executes, i.e. the edge after the host presented it on the pins.  
* **PE index \= dump order:** PE0 \= (2,2), PE1 \= (2,1), PE2 \= (1,2), PE3 \= (1,1). Packed buses put PE0 in the low bits: `psum_all = {PE3, PE2, PE1, PE0}`.  
* **Lanes:** a byte holds two signed int4 values. High nibble `[7:4]` is lane 1 \= row/column 2; low nibble `[3:0]` is lane 0 \= row/column 1\.

**Signal Map**![][image1]

---

## **1\. Pad interface — `tt_um_polite_mini` (top)**

**Job:** register the pins in and out, apply the enable hold, and slow the outputs to 33 MHz. It also instantiates and wires the other five blocks.

### **Inputs**

| Signal | Width | From | Meaning |
| ----- | ----- | ----- | ----- |
| `ui_in` | 8 | host, pins | Data byte: LOAD value, RUN bus operand, DEBUG\_INPUT echo |
| `uio_in` | 8 | host, pins | Instruction: `[7:4]` opcode, `[3:0]` arguments |
| `ena` | 1 | TT harness pin | Enable; 0 \= hold the whole chip |
| `clk` | 1 | TT harness | 66 MHz core clock |
| `rst_n` | 1 | TT harness | Asynchronous active-low reset |
| `core_uo` | 8 | output mux (6) | The core's 8-bit output for this tick |
| `phase` | 1 | control (2) | 1 when this tick is an output tick |

### **What it does**

1. **Enable register.** Every edge, including hold edges, copies the `ena` pin into `ena_q`. `ena_q` drives `en` into every block. Because it is registered, a change on the pin takes effect one edge later. When `en` \= 0 no flop anywhere in the chip changes (except `ena_q` itself), so a hold freezes the whole state, including `phase`. Reset sets `ena_q` \= 1\.  
2. **Input registers.** On every enabled edge, `in_d_q <= ui_in` and `in_i_q <= uio_in`. The rest of the chip uses only these registered copies, so a command presented before edge k is executed on edge k+1. Reset loads 0, which is the NOP instruction.  
3. **Output pipeline.** On every enabled edge:  
   * `uo_q <= core_uo` (the core output of the tick just executed);  
   * `otick_q <= phase` (remembers whether that tick was an output tick);  
   * if `otick_q` was 1, `uo_pad <= uo_q`. So `uo_pad` only ever loads a core output produced on an output tick, and it changes at most every second edge (33 MHz). Net latency from a command on the pins to its result on `uo_out`: 2 edges when the execute tick is an output tick, otherwise 3\.  
4. **PE operand wiring.** Splits `inbuf` and `in_d_q` into lanes for each PE (see block 3).  
5. **Output buffer capture select.** `cap = acc_en ? sum_all : psum_all`, so a DUMP\_LOAD on the tick right after a RUN captures that RUN's result.  
6. **Tie-offs.** `uio_out = 0`, `uio_oe = 0` (all `uio` pins are inputs).  
7. **`HAS_OUTBUF = 0` build:** block 4 is not built; `dump_busy` \= 0 and `dump_nib` \= 0 are driven as constants.

### **Outputs**

| Signal | Width | To | Looks like |
| ----- | ----- | ----- | ----- |
| `uo_out` | 8 | host, pins | `uo_pad`: changes at most every 2 edges; bit layout from block 6 |
| `uio_out`, `uio_oe` | 8, 8 | pins | Constant 0 |
| `en` | 1 | blocks 2–5 | Clock enable for every core flop |
| `in_d_q` | 8 | control (`d`), PE `b` lanes, debug (`d`) | Data byte being executed this tick |
| `in_i_q` | 8 | control (`ins`) | Instruction being executed this tick |

### **State held**

`ena_q`, `in_d_q`, `in_i_q`, `uo_q`, `uo_pad`, `otick_q` — 34 flops.

---

## **2\. Control and decode — `polite_ctrl`**

**Job:** decide what the current instruction is allowed to do, turn it into one-tick strobes for the other blocks, and keep the chip-wide registers: input buffer, output-tick phase, RUN pipeline flag, sticky flags.

### **Inputs**

| Signal | Width | From | Meaning |
| ----- | ----- | ----- | ----- |
| `d` | 8 | pad block, `in_d_q` | Data byte for this tick |
| `ins` | 8 | pad block, `in_i_q` | Instruction for this tick |
| `dump_busy` | 1 | output buffer (4), `busy` | A dump stream is running (start of tick) |
| `fz_open` | 1 | debug unit (5), `open` | A debug freeze window is open (start of tick) |
| `pe_ovf_any` | 1 | OR of the four PE `ovf` outputs (3) | `psum + mul` would wrap in at least one PE |
| `en` | 1 | pad block | Hold when 0 |

### **What it does**

**Decode.** `op = ins[7:4]`, `a = ins[3:0]`.

**Legality.** Each rule uses start-of-tick state. If the instruction breaks a rule it does nothing at all and `illegal` is set:

| Instruction | Illegal when |
| ----- | ----- |
| RUN (0x2) | a freeze window is open (`fz_open`) |
| DUMP\_LOAD (0x3) | a dump is running, or `HAS_OUTBUF` \= 0 |
| DUMP\_ABORT (0x4) | `HAS_OUTBUF` \= 0 |
| CLEAR (0x5) | bit 3 while `run_busy`, or bit 2 while `dump_busy` (or `HAS_OUTBUF` \= 0). The **whole** CLEAR is then ignored, including its other bits |
| DEBUG\_FLAGS (0x6) | `a` ≠ 0 (bank ≠ 0); does not freeze |
| any debug read (0x6–0xB) | a freeze window is already open; does not restart it |
| 0xC–0xF | always (reserved) |

**Strobes it sends (one tick each):**

| Strobe | High when |
| ----- | ----- |
| `run_now` | a legal RUN: PEs latch new products this tick (RUN phase 1\) |
| `acc_en` | `run_busy` is 1: PEs add their products this tick (RUN phase 2\) |
| `clr_psum` | accepted CLEAR with bit 3 |
| `clr_outbuf` | accepted CLEAR with bit 2 |
| `dump_load` | a legal DUMP\_LOAD |
| `dump_abort` | a DUMP\_ABORT (with an output buffer) |
| `dbg_start` | a legal freezing debug read |

**Registers it updates on each enabled edge:**

* `phase <= ~phase`. Starts at 0 after reset, so ticks alternate non-output / output.  
* `run_busy <= run_now`. So `run_busy` is 1 on the tick after a RUN, which is exactly when that RUN's phase 2 happens. Back-to-back RUNs keep it at 1\.  
* `inbuf <= d` on LOAD; `<= 0` on an accepted CLEAR with bit 1; otherwise unchanged.  
* `illegal <= illegal_d`, where `illegal_d = (any rule broken this tick) | (illegal & ~clear_flags)`.  
* `ovf <= ovf_d`, where `ovf_d = (acc_en & pe_ovf_any) | (ovf & ~clear_flags)`. The new-overflow term is ORed in after the clear, so an overflow from this tick's add survives a CLEAR of the flags on the same tick.

**Status byte (DEBUG\_FLAGS bank 0).** Built combinationally from start-of-tick values:

| Bit | Value |
| ----- | ----- |
| 7 | 1 (debug busy: the read that captures this byte is itself a freeze) |
| 6 | `dump_busy` |
| 5 | `illegal` |
| 4 | `ovf` OR this tick's pending add overflow (`acc_en & pe_ovf_any`) |
| 3 | `dump_busy` (output buffer non-empty) |
| 2 | `phase` |
| 1 | `dump_busy` (dump paused) |
| 0 | `run_busy` |

After reset this reads 0x80 on a non-output tick and 0x84 on an output tick.

### **Outputs**

| Signal | Width | To | Looks like |
| ----- | ----- | ----- | ----- |
| `phase` | 1 | pad block (`otick_q`), output buffer, debug unit | Toggles 0,1,0,1… on every enabled edge |
| `run_busy` | 1 | debug unit (DEBUG\_ADD select) | 1 on the tick after each RUN |
| `acc_en` | 1 | all 4 PEs; pad block (`cap` select) | Same as `run_busy` |
| `run_now` | 1 | all 4 PEs | 1 on a legal RUN tick |
| `clr_psum` | 1 | all 4 PEs | 1 on an accepted CLEAR bit 3 |
| `inbuf` | 8 | PE `a` lanes; debug unit (DEBUG\_BUFFER) | The buffered operand byte |
| `dump_load`, `dump_abort`, `clr_outbuf` | 1 each | output buffer | One-tick commands |
| `dbg_start` | 1 | debug unit | One-tick "capture now" |
| `dbg_op` | 4 | debug unit | The opcode (only meaningful 0x6–0xB) |
| `dbg_pe` | 2 | debug unit | `ins[1:0]`, which PE to read |
| `status` | 8 | debug unit (DEBUG\_FLAGS) | Status byte above |
| `illegal_d`, `ovf_d` | 1 each | output mux → `uo_out[5]`, `uo_out[4]` | Flag values after this tick |
| `illegal`, `ovf` | 1 each | used inside (status byte) | Flag values at start of tick |

### **State held**

`phase`, `run_busy`, `inbuf[7:0]`, `illegal`, `ovf` — 12 flops.

---

## **3\. Processing element array — `polite_pe` ×4**

**Job:** each PE does one multiply-accumulate: one int4 from the input buffer times one int4 from the data bus, added into its own 24-bit sum. Together the four compute a 2×2 outer product per RUN.

### **Inputs (per PE)**

| Signal | Width | From | Meaning |
| ----- | ----- | ----- | ----- |
| `a` | 4 signed | control `inbuf`, one lane | Row operand |
| `b` | 4 signed | pad block `in_d_q`, one lane | Column operand (the RUN's bus byte) |
| `run_now` | 1 | control | Latch a new product this tick |
| `acc_en` | 1 | control | Add the product into the sum this tick |
| `clr` | 1 | control `clr_psum` | Zero the sum |
| `en` | 1 | pad block | Hold when 0 |

Lane wiring (set in the top):

| PE | (row, col) | `a` | `b` |
| ----- | ----- | ----- | ----- |
| PE0 | (2,2) | `inbuf[7:4]` | `in_d_q[7:4]` |
| PE1 | (2,1) | `inbuf[7:4]` | `in_d_q[3:0]` |
| PE2 | (1,2) | `inbuf[3:0]` | `in_d_q[7:4]` |
| PE3 | (1,1) | `inbuf[3:0]` | `in_d_q[3:0]` |

### **What it does**

A RUN is a two-tick pipeline:

1. **Phase 1, tick t (`run_now` \= 1).** `prod = a × b`, sign-extended, range −56…+64, always fits in 8 bits. Latched: `mul <= prod`.  
2. **Phase 2, tick t+1 (`acc_en` \= 1).** `psum <= sum`, where `sum = (psum + mul)` kept to 24 bits (two's complement wrap).

Phase 1 of the next RUN can happen on the same tick as phase 2 of the previous one: phase 2 reads the old `mul` and phase 1 writes the new one on the same edge, so one RUN per tick works.

* `mul` is **sticky**: it changes only on a legal RUN, never cleared.  
* `clr` zeroes `psum`. Control never lets `clr` and `acc_en` happen together (that CLEAR is illegal), but if they did, the add would win.  
* `sum` and `ovf` are combinational and always present: `ovf` \= 1 when `psum + mul` does not fit in 24 bits. They are only *used* when `run_busy` \= 1\.

### **Outputs (per PE)**

| Signal | Width | To | Looks like |
| ----- | ----- | ----- | ----- |
| `psum` | 24 signed | debug unit (`psum_all`, DEBUG\_PARTIAL\_SUM / DEBUG\_ADD); pad block `cap` mux → output buffer | Running sum, changes on phase-2 ticks and CLEAR |
| `mul` | 8 signed | debug unit (`mul_all`, DEBUG\_MULTIPLY) | Last latched product |
| `sum` | 24 | debug unit (`sum_all`, DEBUG\_ADD preview); `cap` mux → output buffer | `psum + mul` wrapped, the value the next add would write |
| `ovf` | 1 | ORed → control `pe_ovf_any` | 1 if that add would wrap |

### **State held**

`psum[23:0]`, `mul[7:0]` per PE — 32 flops × 4 \= 128 flops.

---

## **4\. Output buffer and dump sequencer — `polite_outbuf`**

**Job:** take a snapshot of all four sums in one edge, then send it out as 24 nibbles, one per output tick, while the PEs keep computing. Only built when `HAS_OUTBUF` \= 1\.

### **Inputs**

| Signal | Width | From | Meaning |
| ----- | ----- | ----- | ----- |
| `cap` | 96 | pad block mux: `sum_all` if `acc_en`, else `psum_all` | The four values to snapshot, `{PE3, PE2, PE1, PE0}` |
| `load` | 1 | control `dump_load` | Take the snapshot and start the stream |
| `abort` | 1 | control `dump_abort` | Stop the stream |
| `clr` | 1 | control `clr_outbuf` | Zero the stored words |
| `phase` | 1 | control | Advance only on output ticks |
| `hold` | 1 | debug unit `ofz` | A debug read owns the pins this tick: don't advance |
| `en` | 1 | pad block | Hold when 0 |

### **What it does**

* **Load (DUMP\_LOAD tick).** `word[k] <= cap[24k +: 24]` for all four PEs, `idx <= 0`, `busy <= 1`. If a RUN's phase 2 is in flight on this tick, `cap` is the post-add value, so the snapshot includes that RUN.  
* **Stream.** Each tick it presents nibble `idx`: PE \= `idx / 6`, nibble within the word \= `idx % 6`, low nibble first. So the order is PE0 bits \[3:0\], \[7:4\] … \[23:20\], then PE1, PE2, PE3.  
* **Advance.** `idx` steps when `busy && phase && !hold`, i.e. once per output tick, and not while a debug read is showing on the pins (the nibble waits, none is lost).  
* **End.** The step from `idx` \= 23 clears `busy`. A full dump with no debug reads keeps `busy` high for 48 core ticks (49 if DUMP\_LOAD lands on an output tick).  
* **Abort / clear.** `abort` clears `busy` immediately. `clr` zeroes the words (control only allows it when no dump is running).

### **Outputs**

| Signal | Width | To | Looks like |
| ----- | ----- | ----- | ----- |
| `busy` | 1 | control `dump_busy` (legality, status byte); output mux (→ `uo_out[6]`) | 1 from the edge after DUMP\_LOAD until the last nibble is sent |
| `nib` | 4 | output mux | Nibble `idx` while busy; 0 when idle |

### **State held**

`word[0..3]` (4 × 24), `idx[4:0]`, `busy` — 102 flops.

---

## **5\. Debug unit — `polite_dbg`**

**Job:** on a debug read, capture one internal value on that tick and send it out as nibbles, low first, one per output tick, through the same 4 data pins the dump uses. While it does this it holds the dump and tells control that RUN and other debug reads are blocked.

### **Inputs**

| Signal | Width | From | Meaning |
| ----- | ----- | ----- | ----- |
| `start` | 1 | control `dbg_start` | Legal debug read this tick: capture |
| `op` | 4 | control `dbg_op` | Which read (0x6–0xB) |
| `pe` | 2 | control `dbg_pe` | Which PE for 0x8/0x9/0xA |
| `status` | 8 | control | Source for DEBUG\_FLAGS |
| `inbuf` | 8 | control | Source for DEBUG\_BUFFER |
| `d` | 8 | pad block `in_d_q` | Source for DEBUG\_INPUT |
| `psum_all` | 96 | PEs | Source for DEBUG\_PARTIAL\_SUM, DEBUG\_ADD |
| `mul_all` | 32 | PEs | Source for DEBUG\_MULTIPLY |
| `sum_all` | 96 | PEs | Source for DEBUG\_ADD during a phase 2 |
| `run_busy` | 1 | control | Selects DEBUG\_ADD source |
| `phase` | 1 | control | Nibbles go out on output ticks |
| `en` | 1 | pad block | Hold when 0 |

### **What it does**

**Capture mux** (on the `start` tick):

| Opcode | Read | Captured value | Nibbles |
| ----- | ----- | ----- | ----- |
| 0x6 | DEBUG\_FLAGS | `status` | 2 |
| 0x7 | DEBUG\_BUFFER | `inbuf` | 2 |
| 0x8 | DEBUG\_PARTIAL\_SUM | `psum` of PE `pe` (before any add this tick) | 6 |
| 0x9 | DEBUG\_MULTIPLY | `mul` of PE `pe` | 2 |
| 0xA | DEBUG\_ADD | `sum` of PE `pe` if `run_busy`, else its `psum` | 6 |
| 0xB | DEBUG\_INPUT | `d` (the data byte sent with this instruction) | 2 |

**Freeze window.**

* On `start`: `fz_val <=` captured value, `fz_k <= 0`, and the window length is set to 4 core ticks (2 nibbles) or 12 (6 nibbles). The start tick counts as the first, so `fz_left` holds 3 or 11 after it.  
* `ofz` \= `start || open` \= the window is active this tick.  
* `open` \= `fz_left ≠ 0` \= the window was already open at the start of this tick. Control uses it to make RUN and a second debug read illegal on ticks k+1…k+3 (8-bit) or k+1…k+11 (24-bit).  
* On each active tick `fz_left` counts down. On each active *output* tick (`dbg_tick` \= `ofz && phase`) one nibble goes out and `fz_k` counts up.  
* `dbg_nib` \= nibble `fz_k` of `fz_val` on output ticks (low nibble first). On non-output ticks it repeats the previous nibble, but those ticks never reach the pins.  
* The window always ends by itself; no command needed.

### **Outputs**

| Signal | Width | To | Looks like |
| ----- | ----- | ----- | ----- |
| `open` | 1 | control `fz_open` | 1 on ticks k+1 … end of window |
| `ofz` | 1 | output buffer `hold` | 1 on ticks k … end of window |
| `dbg_tick` | 1 | output mux (→ `uo_out[7]`, forces `uo_out[6]` to 0\) | 1 on the 2 or 6 output ticks carrying a debug nibble |
| `dbg_nib` | 4 | output mux | Current debug nibble |

### **State held**

`fz_left[3:0]`, `fz_k[2:0]`, `fz_val[23:0]` — 31 flops.

---

## **6\. Output mux — `polite_outmux`**

**Job:** assemble the 8-bit value the core shows for this tick. Purely combinational.

### **Inputs**

| Signal | Width | From | Meaning |
| ----- | ----- | ----- | ----- |
| `dbg_tick` | 1 | debug unit | This tick carries a debug nibble |
| `dbg_nib` | 4 | debug unit | Debug nibble |
| `dump_busy` | 1 | output buffer `busy` | A dump nibble is being shown (start of tick) |
| `dump_nib` | 4 | output buffer `nib` | Dump nibble (0 when idle) |
| `illegal` | 1 | control `illegal_d` | Illegal flag after this tick |
| `ovf` | 1 | control `ovf_d` | Overflow flag after this tick |

### **What it does**

| `core_uo` bit | Value |
| ----- | ----- |
| 7 | `dbg_tick` — debug-nibble marker |
| 6 | `dump_busy`, forced to 0 when `dbg_tick` — dump-nibble marker |
| 5 | `illegal` |
| 4 | `ovf` |
| 3:0 | `dbg_nib` when `dbg_tick`, else `dump_nib` (0 when nothing is streaming) |

A debug nibble always takes priority; the dump does not advance on that tick (block 4 `hold`), so nothing is lost.

### **Outputs**

| Signal | Width | To | Looks like |
| ----- | ----- | ----- | ----- |
| `core_uo` | 8 | pad block `uo_q` → `uo_pad` → `uo_out` pins | e.g. `0x00` idle; `0x4n` dump nibble n; `0x8n` debug nibble n; bits 5/4 added when illegal/overflow are set |

### **State held**

None.

---

## **7\. Clock and reset**

Not a module; how the blocks are clocked and reset.

* **Clock:** one rising-edge `clk` at 66 MHz goes to every flop. There is no other clock and no gated clock; the 33 MHz output rate comes from `phase` and the `otick_q` load condition, not a divided clock.  
* **Enable:** `ena_q` (block 1\) is a clock *enable* on every core flop. `ena` low holds state; it never resets anything.  
* **Reset:** asynchronous active-low `rst_n` goes straight to every flop. All state becomes 0 except `ena_q` \= 1\. After reset: inputs read as NOP, `uo_out` \= 0, `phase` \= 0, no dump, no freeze, all sums and products 0\. `rst_n` is not gated with `ena` (in `chip.c`, only `chip_reset` clears state; a hold never does).

## **Flop budget**

| Block | Flops |
| ----- | ----- |
| 1\. Pad interface | 34 |
| 2\. Control | 12 |
| 3\. PE array | 128 |
| 4\. Output buffer | 102 |
| 5\. Debug unit | 31 |
| **Total** | **307** |

Yosys keeps 305\. Control's `illegal` and `ovf` flops load exactly the same values, under the same enable, as `uo_q[5]` and `uo_q[4]` in the pad block (`illegal_d`, `ovf_d`), so synthesis merges each pair into one flop.

## **Example: one RUN, traced through the blocks**

Host sends LOAD `0x3F` then RUN with bus `0x21`, then NOPs.

| Tick | Block 2 (control) | Block 3 (PEs) | Notes |
| ----- | ----- | ----- | ----- |
| t0: LOAD, d=0x3F | `inbuf <= 0x3F` | — | lanes: row2 \= 3, row1 \= −1 |
| t1: RUN, d=0x21 | `run_now` \= 1; `run_busy <= 1` | `mul <=` 3·2=6, 3·1=3, −1·2=−2, −1·1=−1 for PE0…PE3 | bus lanes: col2 \= 2, col1 \= 1 |
| t2: NOP | `acc_en` \= 1; `run_busy <= 0` | `psum <= psum + mul` → 6, 3, −2, −1 | a DUMP\_LOAD here would capture these values |
| t3 | — | `mul` still 6, 3, −2, −1 (sticky) | DEBUG\_ADD now returns `psum` |

[image1]: <data:image/png;base64,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>