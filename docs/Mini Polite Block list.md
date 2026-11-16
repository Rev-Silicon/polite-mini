# **POLITE Mini RTL**

## **Blocks**

| File | Block | Mirrors in chip.c |
| ----- | ----- | ----- |
| `tt_um_polite_mini.sv` | TT top: `ena_q`, input regs, `otick_q`, `uo_q`, `uo_out` pad reg; wires the blocks | `chip_step_ena` |
| `polite_ctrl.sv` | Decode, collision and illegal rules, input buffer, phase, `run_busy`, sticky OVF/illegal, DEBUG\_FLAGS byte | opcode `switch`, `flags_bank0` |
| `polite_pe.sv` (×4) | int4×int4 multiply, sticky product reg, 24-bit wrapping accumulator, wrap flag | RUN phase 1 / deferred phase 2 |
| `polite_outbuf.sv` | 4×24-bit output buffer, 24-nibble dump counter, nibble select (only when `HAS_OUTBUF=1`) | `outbuf`, `dump_idx`, `dump_busy` |
| `polite_dbg.sv` | Debug capture mux, 2/6-nibble freeze window, nibble pointer | `begin_freeze`, `fz_left/fz_k/fz_val` |
| `polite_outmux.sv` | Core output byte: markers, flags, debug or dump nibble | `chip_core_step` return value |

PE index is dump order everywhere: 0=(2,2) 1=(2,1) 2=(1,2) 3=(1,1) (`PR[]`/`PC[]` in chip.c).

## **Block list**

Notes in *italics* give the chip.c source for each point, or say where the planning list differed from it.

### **1\. Pad interface (top: `tt_um_polite_mini`)**

* **Input registers:** `ui_in` (data) and `uio_in` (instruction) are sampled every edge and executed one edge later. Reset loads NOP. *`in_d_q`, `in_i_q`; zeroed by `chip_reset`.*  
* **Enable register:** `ena_q` resets to 1 and lags the pin by one edge. When low it holds all state, including the output-tick phase. *`chip_step_ena`; `chip_reset` sets `ena_q = 1`.*  
* **Output-tick phase toggle:** flips every enabled edge and decides when the outputs may update. *chip.c calls it `c->phase`, flipped at the end of `chip_core_step`, so the RTL has it as `phase` in `polite_ctrl`, not a separate `out_phase_q` in the top.*  
* **Output register:** all 8 `uo_out` bits come from one flop bank, loaded only after an output tick (33 MHz pads). *`uo_q` → `uo_pad` when `otick_q`.*  
* **Tie-offs:** `uio_oe = 0` and `uio_out = 0`. *chip.c has no `uio` outputs.*

### **2\. Control and decode (`polite_ctrl`)**

* **Opcode decode:** splits `[7:4]` opcode from `[3:0]` arguments and flags 0xC–0xF as illegal. *The `switch (op)` default case.*  
* **RUN pipeline tracking:** `run_busy` means a phase 2 is in flight this tick. *`run_busy(t+1) = RUN executed on t`.*  
* **Collision checks:** rejects CLEAR of the partial sums during phase 2, CLEAR of the output buffer during a dump, DUMP\_LOAD while a dump is busy, and RUN or a second debug read inside a freeze window. *Plus, from `!c->has_outbuf`: with `HAS_OUTBUF=0`, DUMP\_LOAD, DUMP\_ABORT and CLEAR bit 2 are always illegal.*  
* **Flags register:** sticky overflow and illegal. *chip.c keeps `run_busy`, `dump_busy`, `debug_busy` and `dump_paused` too, but only `run_busy` and `dump_busy` affect anything. In the RTL `run_busy` is in ctrl, dump busy in `polite_outbuf`, and debug busy / dump paused have no flops.*  
* **Input buffer:** the single 8-bit operand register written by LOAD and zeroed by CLEAR bit 1\. *`c->buf`.* The floorplan puts it on the side furthest from the input pads. *Physical design only; not in chip.c.*  
* **Status byte builder:** assembles the DEBUG\_FLAGS bank 0 byte. *Same inputs as `flags_bank0`; it lives here because ctrl owns those signals.*

### **3\. Processing element array (`polite_pe` ×4)**

Each of the four PEs has:

* **Multiplier:** int4 × int4, giving an 8-bit signed product (`buf[i] × bus[j]`). *`lane(c->buf, …) * lane(d, …)`.*  
* **Product register:** sticky; holds its value until the next RUN overwrites it. *`c->mul`, only written when `run_now`.*  
* **Accumulator:** a 24-bit wrapping adder and partial-sum register, with overflow detection. *`wrap24` (it wraps; the chip.c comment saying "saturating" is wrong).*  
* **Clear and hold logic:** CLEAR bit 3 zeroes the sum; `ena_q` holds it.*.*

### **4\. Output buffer and dump sequencer (`polite_outbuf`, `HAS_OUTBUF=1` only)**

* **Snapshot storage:** 4 × 24-bit registers, loaded in one edge by DUMP\_LOAD. On a phase-2 tick it captures the pending sum. *DUMP\_LOAD case; the phase-2 select sits in the top.*  
* **Nibble counter:** counts 0–23 and advances once per output tick. It pauses during a debug freeze and is stopped by DUMP\_ABORT. *`dump_idx`.*  
* **Nibble select:** picks the current nibble in PE order (2,2), (2,1), (1,2), (1,1), low nibble first.

With `HAS_OUTBUF=0` the block is not built: dump busy is 0 and the idle nibble is 0\.

### **5\. Debug unit (`polite_dbg`)**

* **Capture mux:** selects flags, input buffer, partial sum, product, adder preview or the input byte. *Opcodes 0x6–0xB.*  
* **Capture register:** 24 bits wide, filled on the debug opcode's tick. *`fz_val`.*  
* **Freeze window counter:** runs for 2 or 6 nibbles and blocks RUN and nested debug reads while open. *`fz_left`; ctrl uses its "open" output for the legality checks.*  
* **Nibble pointer:** sends the captured value low nibble first. *`fz_k`.*

### **6\. Output mux (`polite_outmux`)**

Chooses what drives `uo_out[3:0]`: a debug nibble, a dump nibble, or 0 when idle. It also sets the live upper bits (*`chip_core_step` return value*):

* bit 7: debug-nibble marker  
* bit 6: dump-nibble marker  
* bit 5: illegal  
* bit 4: overflow

### **7\. Clock and reset**

* **Clock:** single 66 MHz rising-edge clock, no other clock domains.  
* **Reset:** asynchronous active-low `rst_n` into every block. Everything resets to 0 except `ena_q`, which resets to 1\. *`chip_reset`. `rst_n` is **not** gated with `ena`: in `chip_step_ena` a low `ena` holds every state bit and only `chip_reset` clears, so gating reset with `ena` would break the hold.*


