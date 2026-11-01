# Scribe spot-check — SPEC @ 933abcd (2026-11-01)

Scope: re-spot of the f1fa87f PASS-with-conditions nits only. SPEC not edited.

**Verdict: PASS** (933abcd9a4e34cbe57581df79370b072abecff81)

| Nit | Evidence |
|---|---|
| 1. "cycle" → "core tick" (L11, L145) | L11 "on the RUN core tick"; L145 "at the start of the core tick, including the core tick that sends the last nibble" |
| 2. "8 signed bits" → "8-bit signed" (L241) | L241 "always fits in 8-bit signed"; no "signed bits" left in SPEC.md |
| 3. §8 internal labels | L261 `LESSONS.md` — edge-case findings (internal); L262 `golden/chip.c` — cycle-level reference model (internal) |

- SPEC.pdf rebuilt in 933abcd (302115 → 302122 B); pdftotext shows both "(internal)" labels and the new wording.
- docs/SPEC-SCRIBE-SPOTCHECK-20261101-f1fa87f.md committed in 933abcd.
- Diff is wording-only (5 lines); nothing else changed.

Optional cosmetic notes (non-blocking):
- L159 (§5.4 CLEAR bit 2) still says "at the start of the cycle, including the last-nibble cycle". It is the same phrase as the L145 one that was fixed. L27 defines "cycle" = core tick, so it is not wrong, just inconsistent.
- L241 "fits in 8-bit signed" would read better as "fits in an 8-bit signed value" (as in L79).
