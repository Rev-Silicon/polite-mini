# Scribe spot-check — SPEC @ 73dfd09 (HEAD 71af5e2)
Date: 2026-11-01 ~13:30 CST. Review-only; SPEC.md not edited. SPEC.pdf (13:19 CST) checked via pdftotext; matches .md. 73dfd09..HEAD touches only docs/LOCKS.md.

Verdict: PASS with conditions. Implementable: yes.

## Locks
1. LOAD → one buffer: PASS. L72 "Write ui_in into the input buffer (1 edge)"; L221 "single byte; LOAD overwrites it in one edge and nothing else moves".
2. RUN = buffer × live ui_in: PASS. L11, L41, L73, L124 (phase 1 uses buffer + ui_in sampled with RUN), L228 `PE(i,j) += buf[i] × bus[j]`.
3. No left→top shift: PASS. L128 "There is no shift register between them"; no left/top wording in md or pdf; Fig 3 caption L225 shows two separate operand paths.
4. Regular use LOAD then RUNs: PASS. L128 `LOAD, RUN, NOP, RUN, NOP, …`; L126 LOAD may fill RUN phase-2 gap without affecting the RUN in flight.
5. DEBUG_BUFFER = one buffer: PASS. L78, L195 (8 bits, 1 opcode), L96 + L166 exactly one beat; L221 verify via DEBUG_BUFFER.

## Priors regression
Architecture-only (no OP_PLACE/HAS_OUTBUF/Config B/compile): OK. Outbuf always present: OK (L15, L145, bit7=1 L181). One-beat freezes: OK (L53, L96, L166). DEBUG_ADD 24-bit byte select: OK (L92, L198, L213). DEBUG_FLAGS bank 0 only: OK (L89, L119, L246). 0xC–0xF reserved/illegal: OK (L83, L98). Room to grow "may": OK (L119). Placement furthest-from-pads: OK (L221). Bit 6 reserved: OK (L180, L186). RUN+LOAD issue-slot language (L130) does not contradict buffer×bus: OK.

## Condition (fix before calling external canon final)
- §7 L242 "Verified at commit 677ce98 … R7 70/0/0" predates the buffer+bus retarget (677ce98 is 21 commits behind HEAD). Statement is stale for the current datapath. Untracked verify/adversarial/last_run_r9.log shows R9 pass=49 fail=2 gap=1 (incl. R9-D5 string check "bit 7 reads 0 when live" vs SPEC L45 wording "reads 0 when live"; RTL lockstep not rerun). Either re-verify at 71af5e2 and update §7, or mark it as pending.

## Soft host-guidance (inferences, none overreaching)
- L128 `LOAD, RUN, LOAD, RUN` relies on L126 (LOAD legal in phase 2): consistent.
- L221 "layout showed no preference" is a design rationale, not an electrical claim: fine.
- No new electrical/timing numbers; 66/33 MHz, 15.15/30.30 ns, 48/49 clocks are pre-existing.

## Nits (non-blocking)
- §6.1 is titled "LOAD packing" but now covers both LOAD and RUN bus bytes; "Operand packing" would read better.
- L130 "would remove the separate LOAD instruction" — with buffer×bus most RUNs need no LOAD; the fused-op benefit applies only when the buffered operand changes. Could say so.
