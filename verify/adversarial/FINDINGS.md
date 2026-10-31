# Findings: golden/chip.c vs docs/LOCKS.md and OPCODE_PROPOSAL.md (2026-10-31)
Run result: 54 checks pass, 14 fail, 3 gaps. Exit code 1.

| id | expected (spec) | observed (model) | sev | status |
|---|---|---|---|---|
| F1 | CLEAR PE (0x58) on the RUN phase-2 cycle collides: the whole CLEAR is ignored and illegal is set | chip.c:22 clears run_busy before the check at :37, so the CLEAR goes through and the psums are zeroed. The phase-2 cycle is the only cycle where run_busy can be 1 at the check, so the PE collision branch can never fire (dead code). Fails in all 4 configs. | High | FAIL |
| F2 | DUMP in parallel with DBG_* keeps the 24-nibble stream intact | dump_idx (:25) moves forward on the freeze cycle while uo_out shows frozen_val, so one nibble per DBG is lost (23 visible) and the content is wrong. Fails for cfg A place0 and place1. | High | FAIL |
| F3 | DBG_PSUM arg[3:2]=3 is undefined (byte 0..2), so it should be illegal | `(a>>2)%3` (:46) maps it back to byte0 and illegal is not set | Med | FAIL |
| F4 | dump_paused is a level flag | The model never sets it. Pause behavior is not defined. | Low | GAP |
| F5 | DBG_FLAGS bit3 = debug_busy, and the freeze has debug_busy high | flags8() runs before freeze() sets debug_busy and after :17 clears it, so bit3 is always 0 in a DBG_FLAGS read | Med | FAIL |
| F6 | DBG_ADD shows the adder stage | Returns constant 0 (TBD from RTL) | Low | GAP |
| F7 | Live flag nibble {OVF,illegal,dump_busy,debug_busy} | The model puts OVF on uo[4] (LSB-first). The doc does not fix the bit order. | Low | GAP |

Passing (P*): RUN storm (illegal is sticky, and 10 back-to-back RUNs give 5 MACs, alternating accepted/ignored); second DUMP_LOAD while busy is illegal; CLEAR 0x5F during dump collides, leaves OVF set and clears nothing; DUMP∥RUN stream intact; DUMP_ABORT keeps outbuf and clears dump_busy; cfg B: DUMP_LOAD/ABORT illegal, RUN after DBG is illegal, PE sum read via DBG_PSUM, CLEAR outbuf illegal; OP_PLACE 0/1 shift semantics; nibble LE; sticky OVF until CLEAR flags; C–F sticky illegal; straps correct; DBG_FLAGS bank≠0 is illegal.
Untestable: "CLEAR PE while run_busy (phase 1)". CLEAR can't share a cycle with RUN, so there is no phase-1 CLEAR cycle (see F1).
Note: the CLEAR outbuf collision with !has_outbuf in cfg B is a model choice, not a LOCKS rule.

## Resolution (2026-10-31)
The golden model is fixed: F1, F2, F3 and F5 now pass. F4 is closed by the F2 pause semantics. F6 now returns the next-acc preview. F7's bit order is documented as LSB-first in uo[7:4], and its test was changed from a GAP to a CHECK of that order. The rules are in LESSONS.md. Rerun: pass=71 fail=0 gap=0.

## Round 2 (2026-10-31, against d85071b)
Files: `test_break_r2.c`, `run_r2.sh`, `last_run_r2.log`. Result: pass=18, fail=3, gap=3, exit code 1. Round 1 is still 71/0/0.

| id | expected | observed | sev | status |
|---|---|---|---|---|
| R2-F8 | CLEAR outbuf (0x54) collides if dump_busy was 1 at the start of the cycle | On the cycle that sends the final nibble, :25 clears dump_busy before the collision check at :37. The CLEAR goes through: no illegal, and outbuf is zeroed. | High | FAIL |
| R2-F9 | When idle (run_busy=0), DBG_ADD == low(psum). No phantom accumulate | Returns low(psum+mul) with the stale mul from the last RUN | Med | FAIL |
| R2-F9b | The preview shows the pending accumulate | On the phase-2 cycle the accumulate has already run at :22, so the preview adds mul twice. No cycle shows the true pending result. | Low | GAP |
| R2-F10 | An illegal DBG (PSUM byte3, FLAGS bank≠0) during dump leaves the stream intact | The stream is intact: the nibble is still sent on the live output, so Cast's "lost nibble" claim is false. It does not pause, which the spec doesn't require. | Low | PASS + GAP(F10b) |
| R2-F11 | OVF raised by phase 2 survives a CLEAR flags on the same cycle | It is cleared. LOCKS doesn't say what order these happen in. | Low | GAP |

Passing: consecutive DBG pauses keep all 24 nibbles intact; dump_paused is high only on the freeze cycle; DBG_FLAGS during dump has bit5 and bit2 set; DBG→ABORT gives dump_busy=0 with outbuf intact; cfg A allows RUN after a freeze; cfg B allows RUN after an illegal non-freezing DBG (had_freeze=0) and makes RUN after a freeze illegal; DBG_ADD never sets OVF; CLEAR PE on phase 2 is illegal and the psums keep their post-acc values (A and B); live flag nibble reads 0x7 for OVF+illegal+dump_busy.

## Round 2 resolution (golden fix)
- R2-F8 FIXED: CLEAR outbuf collision uses dump busy-at-cycle-start (dump_adv), so the final-nibble cycle collides.
- R2-F9 FIXED: mul zeroed after phase-2 acc; DBG_ADD adds mul only when run_busy=1 at opcode time.
- R2-F9b LOCKED: phase-2 DBG_ADD == low(psum) post-acc. GAP converted to CHECK.
- R2-F10/F10b LOCKED: only freezing DBG pauses dump; illegal non-freeze DBG advances dump_idx. GAP converted to CHECK (no golden change).
- R2-F11 LOCKED: phase-2 OVF survives same-cycle CLEAR flags; prior OVF cleared. GAP converted to CHECK.
- Result: R1 71/0/0, R2 24/0/0, chip_test ALL PASS, MNIST smoke 8/8 on all 4 cfgs.

## Round 3 (2026-10-31, against b51e376)
Files: `test_break_r3.c`, `run_r3.sh`, `last_run_r3.log`. Result: pass=21, fail=3, gap=2, exit code 1. R1 is still 71/0/0 and R2 is still 24/0/0.

| id | expected | observed | sev | status |
|---|---|---|---|---|
| R3-F12 | DUMP_LOAD on the final-nibble cycle is illegal, the same as CLEAR outbuf (F8) | case 0x3 checks `dump_busy` after :26 has cleared it. The DUMP_LOAD goes through: no illegal, and the dump restarts with dump_idx=0 while the old final nibble is still on the bus. | High | FAIL |
| R3-F13 | On the final-nibble cycle, DBG_FLAGS bit2 (dump_busy) agrees with bit5 (dump_paused) | flags8 is captured after :26, so it reads dump_busy=0 and dump_paused=1. :54 then rewinds the dump to busy. | Med | FAIL |
| R3-F14 | DBG_FLAGS on the phase-2 cycle shows run_busy=1 (in flight, like CLEAR PE's run_phase2 rule) | Shows run_busy=0 | Low | GAP |
| R3-F15 | The DBG_ADD psum+mul preview can be reached on some cycle | `run_busy` is always 0 when the switch runs, because the RUN cycle runs op 2 and the next cycle's :23 clears it first. The preview branch at :49 is dead code. | Low | GAP |

Passing: DBG_MUL reads 0 after phase 2. The ±2^23 boundaries behave: exact max/min don't set OVF, all 4 PEs wrap positive and negative, and a wrap on one PE alone sets OVF. CLEAR 0x55 during a dump collides and clears nothing, so OVF and outbuf survive. DUMP_LOAD on the cycle right after ABORT is OK. CLEAR PE mid-dump is allowed and the dump keeps going. In cfg A, RUN phase 2 + final nibble + CLEAR outbuf collides and the acc completes. Sticky illegal survives a DBG_FLAGS read. With OP_PLACE 0/1, one LOAD and then RUN gives 0. (-8)*(-8)=64 in both mul and psum. DBG_ADD near wrap doesn't set OVF, and a real phase-2 wrap does.
Suggested fix: F12/F13 should use `dump_adv` in case 0x3 and in flags8, or compute the end-of-dump after the switch.

## Round 3 resolution (Forge)
- R3-F12 FIXED: DUMP_LOAD gated on dump_adv (busy at cycle start). Final-nibble DUMP_LOAD is illegal and does not restart.
- R3-F13 FIXED: DBG_FLAGS uses busy-at-start dump_busy. Frozen bank0 is busy=1/paused=1 on the final nibble.
- R3-F14 LOCKED (GAP->CHECK): phase-2 DBG_FLAGS run_busy=1, consistent with CLEAR PE.
- R3-F15 LOCKED (GAP->CHECK): phase-2 accumulate deferred after the switch. DBG_ADD on phase 2 = low(wrap24(pre_psum+mul)), with no OVF side effect. R2-F9b CHECK revised to assert the pending preview.
- Result: R1 71/0/0, R2 24/0/0, R3 26/0/0, chip_test ALL PASS, MNIST smoke 8/8 on all 4 cfgs.

## Round 4 (vs f80b7f0) — pass=13 fail=1 gap=1
- **R4-F16 FAIL (HIGH)**: DBG_FLAGS on an overflowing phase-2 cycle freezes flags8 before the deferred accumulate, so bit0 OVF=0 while c->ovf=1 after the step. This contradicts F11 ("phase-2 OVF is real this cycle") and F14 (run_busy shown as in flight). Fix: compute the pending wrap OVF in case 0x6 (same idea as the DBG_ADD preview), or lock pre-commit freeze in LOCKS.md.
- **R4-F17 GAP**: DBG_PSUM on phase 2 returns the pre-accumulate psum, but DBG_ADD returns the post-accumulate preview. Need a lock saying snapshot-before-commit is intended, or a change to match DBG_ADD.
- PASS: F18 (CLEAR flags phase-2 non-wrapping, OVF stays 0), F19 (busy RUN ignored, mul kept), cfg B negative 24b byte reconstruct, DUMP_ABORT on final nibble, live uo[4] OVF, DBG_ADD preview == committed, CLEAR 0x5F collide during dump + acc, cfg A DUMP∥RUN DBG_ADD pause, illegal 0xC on phase 2, DBG_FLAGS run_busy=1 vs state 0.
- Run: `verify/adversarial/run_r4.sh` → `last_run_r4.log`, exit 1.
- **R4 resolution**: F16 fixed. Case 0x6 now ORs the pending phase-2 OVF, computed as wrap24(psum+mul) across all lanes, into bit0 of the frozen flags. The real c->ovf still commits with the deferred acc, so F11 holds. F17 is now locked as a CHECK. On phase 2, DBG_PSUM and DBG_MUL return the snapshot from before the commit, DBG_ADD returns the pending preview, and DBG_FLAGS returns busy-at-start plus pending OVF. Rerun: pass=15 fail=0 gap=0.
