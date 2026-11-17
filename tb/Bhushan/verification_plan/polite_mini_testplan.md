# Testplan

## Testpoints

### Stage V1 Testpoints

#### `smoke`

Test: `polite_smoke`

**Goal**: chip computes one 2x2 outer product and dumps it.

**Stimulus**: reset, LOAD 0x21, RUN with ui_in 0x43, NOP, DUMP_LOAD,
NOPs until 24 nibbles are collected.

**Check**: the 4 sums decoded from the dump equal buf[i]*bus[j]
(PE order (2,2),(2,1),(1,2),(1,1)); illegal and overflow stay 0.
Spec 1, 5.1, 5.2, 6.2, 6.3.

#### `reset`

Test: `polite_reset`

**Goal**: reset state matches the spec.

**Check**: during and after reset uo_out = 0, uio_oe = 0, uio_out = 0;
inputs read as NOP; first DEBUG_FLAGS returns 0x80 or 0x84 depending
on the output-tick phase; reset in the middle of a dump and of a freeze
returns the chip to idle. Spec 2 (pins, reset), 4, 5.6 Table 7.

#### `pad_latency`

Test: `polite_pad_latency`

**Goal**: pin-to-pin latency and the 33 MHz output rate.

**Stimulus**: a command sampled on edge k, issued on both output-tick
phases.

**Check**: result first visible after edge k+2 (k+1 is an output tick)
or k+3 (otherwise); uo_out changes only on the edge after an output
tick and is held for 2 core ticks. Spec 2 (clock, pad pipeline).

### Stage V2 Testpoints

#### `ena_hold`

Test: `polite_ena_hold`

**Goal**: whole-chip hold through the registered ena.

**Stimulus**: drop ena during: idle, a RUN stream (phase 2 pending),
a dump, a debug freeze; commands presented only on hold edges.

**Check**: the edge on which ena falls still executes; hold edges
sample nothing, execute nothing, change no state, and freeze the
output-tick phase; the edge on which ena rises is still a hold; the
first enabled edge executes the command sampled on the last enabled
edge; commands presented only on hold edges are lost; dump and freeze
resume with no nibble lost or repeated. Spec 2 (enable).

#### `mac_pipeline`

Test: `polite_mac_pipeline`

**Goal**: RUN arithmetic, operand routing and the 2-stage pipeline.

**Stimulus**: LOAD then back-to-back RUNs with a new bus byte each
tick; LOAD/RUN/LOAD/RUN; LOAD on the tick after a RUN; all 16x16
signed int4 operand pairs over the run.

**Check**: every PE(i,j) += buf[i]*bus[j] with lane 1 = index 2;
no product lost or used twice in a back-to-back stream; a LOAD affects
only RUNs issued after it; product register keeps the last product.
Spec 5.1, 6.1, 6.2.

#### `overflow`

Test: `polite_overflow`

**Goal**: 24-bit wrap and the sticky overflow flag.

**Stimulus**: drive a partial sum past +2^23-1 and below -2^23 with
repeated RUNs; CLEAR flags on the same tick as an overflowing phase 2.

**Check**: sums wrap (no saturation); overflow set once by the RUN,
stays set until CLEAR bit 0, visible on uo_out[4]; a same-tick
overflow survives the CLEAR. Spec 5.3, 5.4, 6.2.

#### `dump`

Test: `polite_dump`

**Goal**: DUMP_LOAD snapshot and the 24-nibble stream.

**Stimulus**: DUMP_LOAD on both output-tick phases; DUMP_LOAD on the
tick right after the last RUN; RUNs and CLEAR psum while the dump
streams.

**Check**: 24 nibbles framed by uo_out[6], PE order and low nibble
first; dump busy 48 or 49 core ticks; nibble 0 on pins 3 or 4 ticks
after DUMP_LOAD; DUMP_LOAD after the last RUN captures that RUN;
RUNs during the stream do not change it. Spec 5.2, 6.3.

#### `dump_abort_illegal`

Test: `polite_dump_abort`

**Goal**: DUMP_ABORT and refused DUMP_LOAD.

**Check**: DUMP_LOAD while busy (incl. the last-nibble tick) sets
illegal and does not restart; DUMP_ABORT drops dump busy; DUMP_ABORT
with no dump is a legal no-op; a new DUMP_LOAD 1 output tick after
ABORT works. Spec 5.2.

#### `clear`

Test: `polite_clear`

**Goal**: CLEAR masks and the all-or-nothing rule.

**Stimulus**: every mask 0x0-0xF on an idle chip; bit 3 on the tick
after a RUN; bit 2 during a dump (incl. last-nibble tick).

**Check**: accepted CLEAR zeroes exactly the selected state; a
conflicting CLEAR changes nothing (incl. its flag bit) and sets
illegal. Spec 5.3.

#### `debug_reads`

Test: `polite_debug_reads`

**Goal**: every debug opcode end to end at the pins.

**Stimulus**: DEBUG_FLAGS/BUFFER/PARTIAL_SUM/MULTIPLY/ADD/INPUT for
every PE index, on both output-tick phases.

**Check**: value matches internal state; 2 or 6 nibbles, low first,
at the Table 8 sample points; uo_out[7]=1 and [6]=0 on each debug
nibble, [5:4] live; output returns to live after the last nibble.
Spec 5.6, 5.6.1 Table 8.

#### `debug_vs_pipeline`

Test: `polite_debug_pipeline`

**Goal**: which value a debug read sees on the tick after a RUN.

**Check**: DEBUG_PARTIAL_SUM = pre-add, DEBUG_ADD = post-add (and =
psum when run busy = 0), DEBUG_MULTIPLY = last product, DEBUG_FLAGS
run busy = 1 plus in-flight overflow. Spec 5.7.

#### `freeze_window`

Test: `polite_freeze_window`

**Goal**: rules inside the debug freeze window.

**Stimulus**: RUN and a second debug read at k+1..k+3 / k+11 and at
the first legal tick k+4 / k+12; LOAD, CLEAR, DUMP_LOAD inside the
window; DEBUG_FLAGS bank != 0 inside and outside a freeze.

**Check**: RUN/second read inside the window set illegal, have no
effect and do not restart the freeze; legal at k+4/k+12; LOAD,
CLEAR, DUMP_* legal inside; bad bank sets illegal, never freezes.
Spec 3, 5.1, 5.6, 5.6.1.

#### `debug_during_dump`

Test: `polite_debug_during_dump`

**Goal**: debug and dump share uo_out[3:0].

**Check**: a freezing read pauses the dump for 2 or 6 output ticks,
the held nibble goes out after the freeze, exactly 24 dump nibbles
are counted on bit 6, none lost; bad-bank read does not pause; flag
bits 3 and 1 of DEBUG_FLAGS = 1 during a dump. Spec 5.6 (dump pause),
Table 7.

#### `illegal_ops`

Test: `polite_illegal_ops`

**Goal**: reserved opcodes and arguments.

**Check**: opcodes 0xC-0xF set illegal and do nothing else; reserved
argument bits are ignored; illegal sticky until CLEAR bit 0 and
visible on uo_out[5]. Spec 3, 4, 5.4.

#### `idle_output`

Tests:
- `polite_smoke`
- `polite_illegal_ops`


**Goal**: idle pins.

**Check**: with no dump and no freeze uo_out[3:0] = 0, uo_out[7:6] = 0
and uo_out[5:4] show the flags. Spec 5.5.

#### `assert_uio_inputs`

Tests:
- `polite_smoke`
- `polite_random`


Pins used as inputs only (Spec 2).

`uio_oe == 8'h00 && uio_out == 8'h00`

#### `assert_reset_outputs`

Test: `polite_reset`

Reset: uo_out 0, ena register 1 (Spec 2).

`$rose(rst_n) |-> uo_out == 8'h00 && ena_q`

#### `assert_ena_lag`

Tests:
- `polite_ena_hold`
- `polite_random`


ena takes effect one edge late (Spec 2 Enable).

`rst_n && $past(rst_n) |-> ena_q == $past(ena)`

#### `assert_hold_pads`

Tests:
- `polite_ena_hold`
- `polite_random`


Hold edge changes no pad register (Spec 2 Enable).

`!ena_q |=> $stable({in_d_q, in_i_q, uo_q, uo_pad, otick_q})`

#### `assert_hold_datapath`

Tests:
- `polite_ena_hold`
- `polite_random`


Hold edge changes no partial sum or product (Spec 2 Enable).

`!ena_q |=> $stable({psum_all, mul_all})`

#### `assert_out_rate`

Tests:
- `polite_pad_latency`
- `polite_random`


uo_out changes only on the edge after an output tick: 33 MHz (Spec 2 Clock).

`$changed(uo_out) |-> $past(ena_q && otick_q)`

#### `assert_markers_exclusive`

Tests:
- `polite_debug_during_dump`
- `polite_random`


Debug nibble forces the dump marker to 0 (Spec 2, 5.6).

`uo_out[7] |-> !uo_out[6]`

#### `assert_idle_nibble`

Tests:
- `polite_smoke`
- `polite_random`


Idle data nibble is 0 (Spec 5.5).

`!uo_out[7] && !uo_out[6] |-> uo_out[3:0] == 4'h0`

#### `assert_no_x_out`

Test: `polite_random`

No X/Z on the outputs after reset.

`!$isunknown({uo_out, uio_out, uio_oe})`

#### `assert_mul_sticky`

Tests:
- `polite_mac_pipeline`
- `polite_freeze_window`
- `polite_random`


Product registers change only on a legal RUN (Spec 5.1).

`!(ena_q && run_now) |=> $stable(mul_all)`

#### `assert_psum_update`

Tests:
- `polite_mac_pipeline`
- `polite_clear`
- `polite_random`


Partial sums change only on phase 2 or CLEAR bit 3 (Spec 5.1, 5.3).

`!(ena_q && (acc_en || clr_psum)) |=> $stable(psum_all)`

#### `assert_no_clr_during_acc`

Tests:
- `polite_clear`
- `polite_random`


Integration assumption of polite_pe (line 8): CLEAR psum never with phase 2.

`!(clr_psum && acc_en)`

#### `assert_load_not_busy`

Tests:
- `polite_dump_abort`
- `polite_random`


Integration assumption of polite_outbuf (line 48): DUMP_LOAD never while busy.

`dump_load |-> !dump_busy`

#### `assert_dump_idx_range`

Tests:
- `polite_dump`
- `polite_random`


Dump index stays 0..23 (Spec 6.3).

`g_outbuf.u_outbuf.idx <= 5'd23`

#### `assert_dump_pause`

Tests:
- `polite_debug_during_dump`
- `polite_random`


Dump does not advance during a debug freeze (Spec 5.6 Dump pause).

`ena_q && ofz && !dump_load |=> $stable(g_outbuf.u_outbuf.idx)`

#### `assert_no_freeze_restart`

Tests:
- `polite_freeze_window`
- `polite_random`


A freeze is never restarted at the top level (Spec 5.6).

`dbg_start |-> !fz_open`

### Stage V3 Testpoints

#### `random_vs_model`

Test: `polite_random`

**Goal**: find what the directed tests missed.

**Stimulus**: constrained-random opcode stream (all opcodes, legal
and illegal timing), random ena holds, many seeds.

**Check**: every uo_out value compared against a cycle-level
reference model of the spec at the pins; all assertions on.

#### `matmul_tiles`

Test: `polite_matmul`

**Goal**: realistic host use: tiled 2xN x Nx2 matrix multiply.

**Stimulus**: LOAD/RUN tiles, DUMP_LOAD + CLEAR psum on the next tick,
next tile accumulates while the previous one streams.

**Check**: every dumped tile equals the software matrix product.
Spec 1, 5.2 (typical schedule).

## Covergroups

### clear_cg

CLEAR mask 0x0-0xF crossed with run_busy and dump_busy
(accepted / rejected for each conflicting bit).

### datapath_cg

Operand pairs: all 16 x 16 signed int4 values per lane; partial
sum wrap positive and negative.

### debug_cg

Debug opcode x output-tick phase x run_busy x dump_busy; second
read at offsets k+1..k+12 after the first.

### dump_cg

DUMP_LOAD phase; DUMP_LOAD on the tick after a RUN; dump paused by
8-bit / 24-bit read; DUMP_ABORT at nibble 0, middle, last.

### hold_cg

ena low during: idle, phase-2 pending, dump, freeze; hold length
1, 2, >2 edges; hold starting on output and non-output tick.

### opcode_cg

Opcode 0x0-0xF crossed with the state at the start of the tick:
run_busy, dump_busy, fz_open, and en (hold).

