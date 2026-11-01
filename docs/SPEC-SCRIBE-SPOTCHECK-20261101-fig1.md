# Scribe spot-check — Fig.1 / Forge tip (2026-11-01 ~12:30 CT)

HEAD = `aee2b47` (parent `6f22d6f` → `677ce98`). Both named commits are in HEAD.

| # | Item | Result | Notes |
|---|---|---|---|
| 1 | `docs/figures/pins.svg` Fig.1 | PASS | Title says "uo_out once per beat (2 clocks)"; freeze line says "frozen debug byte for one beat (2 clocks)". No "one byte per edge" and no one-clock freeze. |
| 2a | §5 Debug busy / Dump paused | PASS | Pin view: all 8 bits are the frozen byte, bit 3 = 1; dump paused visible only in the DEBUG_FLAGS byte (bit 5); covers the 2-edge window; "next cycle" gone. |
| 2b | §6.6.1 PARTIAL_SUM | PASS | Issued on k, k+2, k+4; visible k+2/k+3, k+4/k+5, k+6/k+7; safe read after k+3, k+5, k+7. |
| 2c | Glossary / pin table | PASS | `OP_PLACE`, `HAS_OUTBUF` rows present; `clk`/`rst_n`/`ena` rows match Fig.1 (ena resets to 1, holds one edge later). |
| 2d | §8 cite + PnR mark | PASS | Says "Verified at commit `677ce98`" for RTL/golden; PnR table explicitly marked pre-half-rate, not 677ce98 results. |
| 2e | G6 wording | PASS | 494/24 slew/cap: "fix by tightening, not waived; pending Cast A0 re-PnR on 677ce98". No new numbers invented. |
| 3 | `docs/SPEC.pdf` | PASS | 273,544 B, mtime 12:29 CT Nov 1 (after svg 12:28); rebuilt in both commits; PDF text contains "pre-half-rate". |
| 4 | vs PASS-b §9–§10 | PASS | All §9 confirmed facts and §10 G6=Fix match the text. |

Remaining mismatches: none found. Still open (not mismatches): G6 numbers await Forge fix + Cast A0 re-PnR; PnR table needs replacing after that run.

**Overall for Alex:** PASS — Forge tip `aee2b47` lands Fig.1 beat wording, all Scribe §5/§6.6.1/glossary/§8 edits and the G6 "fix by tightening" wording, and the PDF is rebuilt; only open item is the Cast A0 re-PnR.
