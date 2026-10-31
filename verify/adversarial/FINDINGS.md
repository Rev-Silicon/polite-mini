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
