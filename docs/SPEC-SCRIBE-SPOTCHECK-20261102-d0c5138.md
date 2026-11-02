# Scribe spot-check — POLITE Mini SPEC @ d0c5138

- **Tip:** `d0c5138` (experimental). Box HEAD is `9bbbbee` (README-only child); `git diff d0c5138 HEAD -- docs` is empty, so docs reviewed = d0c5138.
- **Date:** 2026-11-02 (CT)
- **Prior clean PASS:** `09b821f`
- **Verdict:** **PASS** (optional nits only)

## What changed vs 09b821f (docs/)
- **Rename:** SPEC title/Table 1 = "POLITE Mini"; pins figure says `polite_mini`; LESSONS cites `rtl/top/tt_um_polite_mini.sv`. `git grep` of SPEC/LOCKS/LESSONS/figures at d0c5138 for `polite_vneg1` or bare `tt_um_polite` finds **0 hits**; SPEC.pdf text has 0 `vneg1` hits.
- **DEBUG_FLAGS bit 3 = occupancy:** §5.6 bank-0 table row 3 = "Output buffer non-empty … unread dump data at the start of the DEBUG_FLAGS core tick". §4 calls it "output-buffer occupancy bit". Reset reads **0x80 / 0x84** in §4, LOCKS (~01:07 CT lock + retarget-landed note), and the LESSONS currency note. "Present" appears only in LOCKS as superseded text.
- **ena:** the old §7 "Open items" ena paragraph is gone (now normative in §2). The references section became §7. LESSONS has a [measured] ena/golden entry.
- **LESSONS.md** now lives in docs/ with a currency note ("LOCKS wins"). The refs are updated in SPEC §7 and LOCKS.
- **Figures:** debug_timing generator re-laid-out (left margin, wrapped footer). It adds a `uo[6]` row "0 on each debug nibble", which matches §4 prose. load_path/pins are re-rendered. The PE fanout cut changes no prose or numbers in SPEC.
- **09b821f rules not regressed:** nibble stream low-first, 8-bit/24-bit windows, an illegal second freezing DBG with no restart, RUN illegal in the freeze window, bank≠0 illegal/no-freeze, bit 7 = debug busy, live uo[7] = debug-nibble marker. All still agree across §4/§5.6/LOCKS/figure footer.

## Must-fix
- None.

## Optional nits
1. §5.6 row 3: "non-empty / unread" could add "(equals dump busy at start, bit 6)", per LOCKS 01:07 retarget note. Then a reader won't wonder whether a finished stream leaves bit 3 = 1 because the stale data is still in the buffer.
2. LOCKS line ~23 (F7/R8-U9) still says "Debug busy is visible only as bit 3 of a frozen DEBUG_FLAGS byte" without an inline SUPERSEDED tag. The t609 lock does supersede it later. This is internal only, but tag it so nobody quotes it.
3. Table 6 lists 6 flags; occupancy and phase appear only in the §4 lead-in and §5.6. That's fine, but a one-line "see §5.6 for bits 3/2" would help.

No electrical/timing/PnR numbers reviewed or invented. Cast's A0 claim is untouched.

## Spec council line for Herald
**Clear** — Herald may bump briefs to `d0c5138` (cite d0c5138 for chip/RTL; `main` 0743f86 for docs+golden).
