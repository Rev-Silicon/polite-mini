# Scribe clarity spot-check — SPEC @ f1fa87f (2026-11-01, CT)

Verdict: **PASS with conditions** (conditions = nits only; no blockers). Implementable: **yes**. SPEC.md not edited.

## Tip nits (landed)
- DEBUG_MULTIPLY arg "[3:2] reserved, drive 0 (ignored); [1:0] PE" — SPEC L90 (also L89/L91). OK.
- int4×int4 "8-bit signed" — L79, L207; L241 says "fits in 8 signed bits" (equivalent; optional harmonize to "8-bit signed").
- SPEC.pdf rebuilt — committed with SPEC.md at ea673c4 (17:20 CT); pdftotext shows the new arg wording, 0 hits for OPCODE_PROPOSAL. OK.
- OPCODE_PROPOSAL out of §8 References (L258–262); file carries a SUPERSEDED banner. OK.

## Clarity pass
- Glossary L27–30 core tick / output tick / freeze / RUN phase; **zero "beat"** in SPEC and figures. OK.
- Pipelined RUN L123–140: issue every core tick, never illegal, latency 2 / throughput 1, LOAD ordering, run-busy definition. OK.
- Sticky products L225–226 (DEBUG_MULTIPLY last latched; DEBUG_ADD ignores them when run busy = 0). OK.
- Buffer × bus L11, L134, L233, L241 consistent. OK.
- 3-output-tick PSUM/ADD: L29, L52, L95, L172, L198–200, L211, L219 — LSB first, k+3/k+5/k+7, op+5 NOPs, dump pauses all 3. OK. 1-tick other debug consistent. OK.
- Figures 1–3 referenced and captioned; Fig 2 note (L217) covers the 3-tick case. OK.
- Arch-only; no Verification section; no R1–R9 / lockstep / bit-exact numbers in SPEC. OK.

## Soft host guidance / overreach
- Only numbers: 66 MHz / 15.15 ns core, 33 MHz output (L27–28, L37, L54) — design targets, not invented electrical specs. No setup/hold or pad numbers. OK.
- L249 board MCU list (RP2350B/RP2040, TT04–TT08) is board context, not chip spec — acceptable, optional trim.

## Nits (non-blocking)
1. L11 "on the RUN cycle" → "on the RUN's core tick" (glossary allows "cycle", but tick vocab is cleaner). Same for L145 "at the start of the cycle, including the cycle that sends the last nibble".
2. L241 "8 signed bits" → "an 8-bit signed value" for parity with L79.
3. §8 references internal files (LESSONS.md, golden/chip.c) — fine for the pack; label "internal" if SPEC goes truly external.

## LOCKS (consistency only)
- Supersede markers present for RUN mutex (L8), shift LOAD (L17/L20), 1-cycle freeze (L21), DBG_ADD byte select (L26/L45), retarget status (L54/L59), beat vocab (L55: "beat" = output tick, history verbatim). No contradiction with SPEC found.
- **Open, not decided:** L65 cfg-B "RUN forbidden during a debug read" is enforced only on the core tick after the freezing opcode; RUN 2–5 ticks into a 3-tick freeze is accepted. Needs Alex: reword lock vs widen check. Product (cfg A) SPEC L140 "RUN is allowed during a debug freeze" is unaffected.
