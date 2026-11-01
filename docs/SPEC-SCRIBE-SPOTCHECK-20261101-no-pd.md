# Scribe spot-check — no PD metrics in external SPEC (2026-11-01)

HEAD: `789954b` (verified). Scope: docs/SPEC.md §2/§8/§9/§10 + SPEC.pdf text grep. SPEC not edited.

**Overall: PASS**

| Check | Result |
|---|---|
| §8 titled "Verification"; only 1×2 tile packaging + `677ce98` functional cite | PASS |
| G6 absent from §9 (and whole SPEC) | PASS |
| QUOTES absent from §10 (and whole SPEC) | PASS |
| Half-rate / 2-cycle multicycle on `uo_out` kept in §2 Clock | PASS |
| No PnR area/slack/slew/cap/WNS/TNS/DRC tables or numbers | PASS (grep clean in MD and PDF) |
| PDF rebuilt (§8 Verification present, same mtime as MD) | PASS |

## Leftovers / notes
- §2 line 57: "Place-and-route reflects the same arrangement: it uses the 15.15 ns clock with a 2-cycle multicycle constraint" — a constraint statement, not a metric; consistent with the "half-rate/multicycle stays" ask. Optional: reword to "Timing constraints use…" if Alex wants zero PnR wording. No action required.
