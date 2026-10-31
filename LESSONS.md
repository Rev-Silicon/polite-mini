# Lessons (tags: [measured] [Alex] [assumption])
## Open TBDs
- [assumption] Nibble stream order is low nibble first within each 24b partial ("host endian" = LE?).
- [assumption] Exact LOAD placement for OP_PLACE 0/1 (shift left→top vs bus→top).
- [assumption] A RUN on the cycle right after a RUN is "while busy" (ignored + illegal). Max rate is 1 RUN per 2 clocks.
- [assumption] What happens to RUN while debug is busy in cfg A? The model allows it.
- TBD meaning of dump_paused (the model never sets it). How does ena/pause interact with dump?
- TBD what DBG_ADD shows, plus the byte/PE arg encodings for DBG_PSUM/DBG_MUL.
- TBD whether CLEAR outbuf in cfg B is a collision (the model treats it as illegal).
- [revised 2026-10-31, Cast F5] DBG_FLAGS shows debug_busy=1 while frozen (bit3 reads 1). The old snapshot-before-freeze rule was wrong: the host could never see debug_busy.
- TBD the live data nibble when no dump is active (0 in the model).
- [assumption, Cast F1] On the RUN phase-2 cycle the RUN still counts as in flight: CLEAR PE collides (whole CLEAR ignored, illegal set). The phase-2 accumulate still completes.
- [assumption, Cast F2/F4] A DBG_* that freezes during a dump pauses the stream for that cycle: dump_idx does not move, dump_paused=1, and the stream picks up on the next cycle. No nibbles are lost.
- [assumption, Cast F3] DBG_PSUM arg[3:2]=3 is illegal (sticky) and does not freeze.
- [assumption, Cast F6; revised R3-F15] DBG_ADD(arg[1:0]=PE) = low byte of the pending next-acc, wrap24(psum+mul), while a RUN is in flight (phase 2). Otherwise it returns low(psum). It never sets OVF.
- [assumption, Cast F7] Live flags sit in uo[7:4]: uo[4]=OVF, uo[5]=illegal, uo[6]=dump_busy, uo[7]=debug_busy. This matches DBG_FLAGS bank0[3:0].
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
