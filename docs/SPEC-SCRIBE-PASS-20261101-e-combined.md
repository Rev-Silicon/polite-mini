# Scribe pass e: combined tip 0f20e44 (R8 host locks + pass-c fixes)

- Tip verified: HEAD = `0f20e44` on `30677ec`. 0f20e44 touches only docs/SPEC.md (+11/−11), docs/LOCKS.md (+1) and SPEC.pdf. Design tip is still `677ce98`. I did not edit SPEC.md.
- Evidence checked: `rtl/top/tt_um_polite_vneg1.sv`, `rtl/ctrl/polite_ctrl.sv`, docs/LOCKS.md, and the pass-c notes.

## 1. Verdict
**Implementability: PASS.** The pass-c conditions C1–C3 are closed. The R8 host contract can be implemented and matches LOCKS. Three small clarity edits remain (E1–E3), plus one optional edit. None of them changes a rule. C4 (G6 494/24, Cast A0 re-PnR) is still open and affects tapeout only.

## 2. R8 host-contract check (§2 pin table, §6.2)
| Lock | SPEC text | Status |
|---|---|---|
| R8-U9/D7: live uo[7]=0, not debug busy | Pin table line 47; §6.2 "No pin marks a frozen beat" | OK, matches LOCKS F7-amended. Note: the top RTL comment at line 50 still reads `live uo[7:4]={debug_busy,…}`, and line 61 still muxes `debug_busy` into live uo[7]. The value is 0 when live because `debug_busy` is high only inside the freeze window (Cast R8 measured this). This is a comment-only nit for Forge. |
| R8-U3/D1: drop the beat at j+3 per freezing DBG | §6.2 | Implementable. "Pin step" is not a SPEC term; the SPEC uses "edge". See E1. |
| R8-U4/D2: count 24 is mandatory | §6.2, bolded | OK. "the first edge that would merge the streams" is vague. See E2. |
| R8-U5: ≥1 beat after DUMP_ABORT | §6.2 | OK, matches LOCKS verbatim in meaning. |
| Pin table bit 6 "1 exactly on unfrozen beats that carry a dump nibble" | line 47 | Can be misread to mean frozen beats never show bit6=1, which contradicts §6.2. See E3. |

## 3. Pass-c items
| # | Item | Status |
|---|---|---|
| 1 | LOAD-in-gap (OVERREACH) | **FIXED**, rewritten as proposed |
| 8 | Overflow sentence (OVERREACH) | **FIXED**, softened (sticky, may be restored or stale) |
| 6 | §9 ena (NEEDS_FORGE) | **FIXED** from RTL: `ena_q` is registered with reset 1, and `in_d_q/in_i_q` load only when `en`, so commands applied during a hold are not sampled. Matches lines 17–21. Added to LOCKS. Still sim-unverified (R8-G1 GAP; tb drives ena=1 only), which is correctly not claimed. |
| extra a | 66 MHz split rationale | **FIXED**, cut |
| extra b | Banks ≠0 reserved intent | **FIXED**, cut |
| 5 | Reserved → 0 intent | **FIXED**, now "ignored by this revision; drive them to 0" |
| 2,3 | PSUM/CLEAR tweaks | **FIXED** ("edge after DUMP_LOAD"; "RUNs and partial-sum CLEARs") |
| Fluff | "simple", "most rules follow", "fighting", "simply" | **FIXED** |
| Optional §2 "twice as much time" | — | Still present. Optional; leave. |

## 4. Remaining edits (concrete, for Forge)
- **E1 (§6.2):** Replace "applied before pin step j, the beat containing pin step j+3" with "applied before edge j (Section 2 numbering), the beat that contains the `uo_out` value after edge j+3".
- **E2 (§6.2):** Replace "if the next DUMP_LOAD is not issued on the first edge that would merge the streams" with the concrete edge from Cast R8/LOCKS (for example, "if the next DUMP_LOAD is not applied on the edge on which the final nibble is taken"). If Forge cannot name the edge, cut the clause and keep only "count 24; NOP until a bit-6=0 beat for a visible gap".
- **E3 (pin table, line 47):** Change bit 6 to "dump busy at the start of the displayed edge; on unfrozen beats, 1 exactly when `uo[3:0]` is a dump nibble (frozen beats show debug byte bits)".
- **E4 (§6.6 line 162, optional):** "with debug busy = 1" now conflicts in tone with "live uo[7] is not debug busy". Change it to "(DEBUG_FLAGS reports debug busy = 1 in bit 3)", or drop it.
- **RTL comment nit (not SPEC):** In top line 50, describe live uo[7] as always 0 when unfrozen.

## 5. Still open
- §8 and G6: slow-corner slew/cap 494/24 is open, and Cast A0 re-PnR on 677ce98 is pending. §8 correctly stays pre-half-rate.
- R8-G1: there is no RTL lockstep or ena-hold sim at this absorb.

## 6. Do-not-touch
- All normative rules listed in pass c §5.
- The new R8 rules: j+3 drop, count-24, ≥1 beat after ABORT, live uo[7]=0.
- The §9 ena text.
