# Lessons (tags: [measured] [Alex] [assumption])
> **Currency note, 2026-11-02:** many entries below are historical (byte-wide freeze, 1-RUN-per-2-clocks, DBG_ADD low byte, 3-byte reads, live uo[7]=debug_busy). The current contract is docs/SPEC.md + docs/LOCKS.md; where they disagree, LOCKS wins. DEBUG_FLAGS bit 3 is unread dump data (dump busy at the start of that core tick), not "outbuf present"; after reset the byte is 0x80 or 0x84. This chip was formerly called POLITE V(−1).

## ena
- [measured] `chip_step_ena` in golden/chip.c matches the register in `rtl/top/tt_um_polite_mini.sv`: the hold takes effect one edge after the pad changes, hold edges (including the edge where `ena` rises) are not sampled, the first enabled edge captures, and every state bit including the output-tick phase freezes and resumes. `chip_step` drives ena=1 so older suites stay valid. Covered by the golden self-test and by `verify/rtl_sim/run_sim_adv.sh`.
## Open TBDs
- [assumption] Nibble stream order is low nibble first within each 24b partial ("host endian" = LE?).
- [assumption] Exact LOAD placement for OP_PLACE 0/1 (shift left→top vs bus→top).
- [assumption] A RUN on the cycle right after a RUN is "while busy" (ignored + illegal). Max rate is 1 RUN per 2 clocks.
- [resolved, then superseded 2026-11-02 by t612/t620] RUN while debug is busy is allowed (SPEC). RUN inside the freeze window is now ignored and sticky-illegal.
- TBD meaning of dump_paused (the model never sets it). How does ena/pause interact with dump?
- TBD what DBG_ADD shows, plus the byte/PE arg encodings for DBG_PSUM/DBG_MUL.
- [retired 2026-11-01, Alex t588u] Cfg B (no outbuf) dropped; its open CLEAR-outbuf question is moot.
- [revised 2026-10-31, Cast F5] DBG_FLAGS shows debug_busy=1 while frozen (then bit3; now bit7 of the 8-bit byte per t609). The old snapshot-before-freeze rule was wrong: the host could never see debug_busy.
- TBD the live data nibble when no dump is active (0 in the model).
- [assumption, Cast F1] On the RUN phase-2 cycle the RUN still counts as in flight: CLEAR PE collides (whole CLEAR ignored, illegal set). The phase-2 accumulate still completes.
- [assumption, Cast F2/F4] A DBG_* that freezes during a dump pauses the stream for that cycle: dump_idx does not move, dump_paused=1, and the stream picks up on the next cycle. No nibbles are lost.
- [assumption, Cast F3] DBG_PSUM arg[3:2]=3 is illegal (sticky) and does not freeze.
- [assumption, Cast F6; revised R3-F15] DBG_ADD(arg[1:0]=PE) = low byte of the pending next-acc, wrap24(psum+mul), while a RUN is in flight (phase 2). Otherwise it returns low(psum). It never sets OVF.
- [assumption, Cast F7] Live flags sit in uo[7:4]: uo[4]=OVF, uo[5]=illegal, uo[6]=dump busy (start of displayed edge), uo[7]=debug_busy (superseded R8-U9: live uo[7]=0; superseded again 2026-11-02 by t608: uo[7] is the debug-nibble marker, and DEBUG_FLAGS base [7:4] matches that live order with debug busy in bit 7 of the status byte).
- [assumption, Cast R2-F8] CLEAR outbuf collides with a dump that was busy at the start of the cycle, including the final-nibble cycle (dump_idx 23->24). Whole CLEAR is ignored, illegal is set, outbuf is unchanged. Same pattern as F1 run_phase2.
- [assumption, Cast R2-F9, revises F6] mul is consumed (zeroed) by the phase-2 accumulate. After a completed RUN, mul=0 and DBG_ADD returns low(psum). See R3-F15 for the phase-2 preview.
- [Forge lock, R2-F9b, revised R3-F15] On the phase-2 cycle, DBG_ADD returns the pending preview low(wrap24(psum_before+mul)), taken before the accumulate commits. It has the same value as the post-acc psum, but it comes from the pre-commit state.
- [Forge lock, R2-F10/F10b] Only a freezing DBG pauses the dump. An illegal non-freeze DBG (DBG_PSUM byte3, DBG_FLAGS bank!=0) does not pause: the live nibble still goes out, dump_idx advances, and the stream stays at 24 intact.
- [Forge lock, R2-F11] An OVF raised by this cycle's phase-2 accumulate survives a same-cycle CLEAR flags. CLEAR flags still clears illegal and any prior OVF.
- [Forge fix, Cast R3-F12] DUMP_LOAD is illegal if the dump was busy at cycle start (dump_adv), including the final-nibble cycle. It does not restart, and the stream ends normally. Same rule as CLEAR outbuf (R2-F8).
- [Forge fix, Cast R3-F13] DBG_FLAGS reports dump_busy as busy-at-start. On a freeze during an active dump, dump_paused=1, so the frozen bank0 pair is coherent (busy=1, paused=1) even on the final-nibble cycle.
- [Forge lock, Cast R3-F14] DBG_FLAGS on the RUN phase-2 cycle reports run_busy=1 (in flight), which matches the CLEAR PE collision (F1).
- [Forge lock, Cast R3-F15] The phase-2 accumulate is deferred until after the opcode switch, before the dump-pause rewind and return. The opcodes on that cycle see run_busy=1 and the pre-acc psum/mul. CLEAR flags clears prior OVF, and then the deferred acc may raise a new one, so R2-F11 still holds. The old F9 preview had been dead code.

## R4 (F16/F17): phase-2 debug-read split
On phase 2 (deferred acc commit), the debug reads behave like this:
- DBG_PSUM and DBG_MUL return a snapshot taken before the commit, so you see the current registers.
- DBG_ADD returns the pending wrap24(psum+mul).
- DBG_FLAGS returns busy-at-start plus the pending OVF, which is the OR of wrap24 overflow across all 4 lanes. This is computed locally only. c->ovf still commits with the deferred acc (F11).

How to apply: any freeze that reports "this cycle's" result must preview pending deferred effects. Raw register reads stay pre-commit.

## R5 (F22): DUMP_LOAD on phase 2 captures the committed result
DUMP_LOAD on the RUN phase-2 cycle copies the pending wrap24(psum+mul) into outbuf, so the stream equals the committed psum. The OVF from that copy goes to a local scratch, and c->ovf still commits via the deferred acc. This extends the R4 rule: any snapshot that outlives the cycle (dump capture) must see pending deferred effects. Only raw same-cycle register reads (DBG_PSUM/DBG_MUL) stay pre-commit.

## RTL (2026-10-31)
- [measured 2026-11-01, 33 MHz pad-out tree] RTL in rtl/ matches the half-rate golden (golden/chip.c at the 33 MHz pad-out commit) cycle for cycle on uo_out: 3x200k random cycles per config, 4 configs, 0 mismatches (verify/rtl_sim, server iverilog). The earlier 89dad4e measurement covers the pre-half-rate RTL only.
- [measured] Live flag bit order is uo[4]=OVF uo[5]=illegal uo[6]=dump busy at start of the displayed edge (nibble-valid) (golden). [R8-U9/D7, qualified 2026-11-02 by t608] On a non-debug-nibble output tick, Live uo[7] is 0, not a debug-busy flag. On a debug-nibble output tick, live uo[7] is 1 and uo[6] is forced to 0. Debug busy is bit 7 of the captured DEBUG_FLAGS byte. The old stub comment `{OVF,illegal,dump_busy,debug_busy}` read MSB-first is backwards; first RTL attempt got it wrong.
- [Alex GO 2026-11-02, t608/t609/t612/t620] Debug values stream as nibbles on uo[3:0], low nibble first: 2 output ticks for an 8-bit read, 6 for DEBUG_PARTIAL_SUM and DEBUG_ADD. RUN and a second freezing DBG are illegal while that window is open (k+1 through k+3, or k+1 through k+11). The second DBG does not restart the stream. DEBUG_FLAGS bank 0 was 0x88 or 0x8C after reset (superseded 2026-11-02 ~01:07 CT: bit3 = outbuf non-empty, reset reads 0x80/0x84). Bank ≠ 0 does not freeze.
- [measured] dump_paused needs no register: it is only observable via DBG_FLAGS on the freezing cycle, where it equals dump_adv.
- uo_out is registered (pure function of post-edge state) — clean pad timing.
