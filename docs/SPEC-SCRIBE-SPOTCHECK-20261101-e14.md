# Scribe spot-check: Forge tip 98945fd (on 0f20e44), pass-e E1–E4

Diff touches docs/SPEC.md (+3/−3), docs/LOCKS.md (+1/−1), rtl/top comment (+1), SPEC.pdf. SPEC not edited by Scribe.

| Item | Result | Evidence |
|---|---|---|
| E1 edge-j language | PASS | §6.2: "applied before edge j (Section 2 numbering), the beat that contains the `uo_out` value after edge j+3". No "pin step" left in SPEC/LOCKS. |
| E2 merge-streams cut | PASS | Clause removed from SPEC §6.2 and LOCKS R8-U4; "count exactly 24 nibbles" (bold) and "NOP until a clear bit-6 = 0 beat" kept. |
| E3 pin-table bit 6 | PASS | Line 47: "on unfrozen beats, 1 exactly when `uo[3:0]` is a dump nibble (frozen beats show debug byte bits)". |
| E4 §6.6 debug busy | PASS | "(DEBUG_FLAGS reports debug busy = 1 in bit 3 of the frozen byte)". |
| R8 locks intact | PASS | j+3 drop (U3/D1), count-24 MUST (U4/D2), ≥1 beat after DUMP_ABORT (U5), live uo[7]=0 (U9/D7) all present in SPEC and LOCKS; LOCKS reworded to match SPEC, no rule change. |
| RTL comment nit (optional) | PASS | Added NOTE line: live uo[7] reads 0 when unfrozen. Old line-50 comment still lists `{debug_busy,…}`; acceptable with NOTE. |

Cast R9 CLEAN / A0+G6: not found in tree notes (SPEC §8 still says G6 494/24 open, A0 re-PnR pending). Forge-reported only; Scribe to relay as such, no PnR numbers asserted.

**Overall: PASS — E1–E4 folded, R8 locks intact, 0 FAIL.**
