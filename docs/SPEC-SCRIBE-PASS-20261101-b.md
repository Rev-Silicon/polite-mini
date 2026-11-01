# SPEC.md — Scribe clarity pass b (2026-11-01, after the half-rate tip)

Reviewed tip **`677ce98`** (HEAD = 677ce9893ac1…, matches what Forge named). The only untracked file is the first-pass note. Files reviewed: `docs/SPEC.md` and `SPEC.pdf` (both modified 12:24 CT), `debug_timing.svg` (12:21 CT), `pins.svg` and `load_path.svg` (12:04 CT, **not regenerated**), `LOCKS.md`, `OPCODE_PROPOSAL.md`, `README.md`, and RTL `top/ctrl/dbg/outbuf`. I rebuilt the golden model locally (`gcc -Wall -O2 golden/chip.c`) and it reports `ALL PASS`. I did not re-run the adversarial suite, including R7. SPEC.md was not edited, and no numbers were added.

## 1. Verdict

**PASS with conditions.** An engineer can now implement the half-rate pad-out from SPEC alone. §2 defines the clock, output tick, beat, and pad pipeline. §6.2 covers dump cadence and framing, §6.6 and §6.6.1 cover freeze, spacing, and latency, and Fig. 2 matches the RTL (`out_phase_q`, `uo_q` loads when `!out_phase_q`, `ofz = dbg_freeze | fz_prev_q`).

Conditions, none of which changes the design:
- (a) **Fig. 1 is stale.** It still says "one byte per edge" and "frozen … for one clock period". This contradicts §2 and §6.6. See edit 1.
- (b) **§5 Debug busy and Dump paused rows** still say "frozen cycle / next cycle". See edit 2.
- (c) **§8 does not cite 677ce98 or the R7 greens.** See §8 below. This is a provenance gap, not an implementability gap.

## 2. Delta vs first pass

**Fixed by G1 and the 677ce98 tip:**
- First-pass edit 5 (§2 pad register loads every edge): fixed. It now loads once per beat.
- Edit 15 (§6.2, one nibble per cycle): fixed. It is now one nibble per output tick, with 48/49 clocks of dump busy and pin framing by `uo_out[6]`.
- Edit 18 and G2 (consecutive debug reads): fixed. §6.6 says consecutive reads are unsupported and must be spaced 2 clocks apart (opcode, NOP). §6.6.1 gives latency k+2 or k+3, and "after k+3 always" is a safe read point.
- Glossary rows for "Freeze" and "Beat": fixed. Both are now per beat.
- Fig. 2: redrawn (see §5).
- G3: fixed. §3 says "product chip is built with load placement 0".
- G5: fixed. §6.2 says DUMP_ABORT while idle is a legal no-op (old edit 16).
- G7: folded into §9 (`ena` holds the output phase; golden does not model `ena`).
- OPCODE_PROPOSAL DBG_INPUT: fixed to "registered ui_in byte only".

**Still open from the first pass (wording only, not applied):** edits 1–3, 6 (name `OP_PLACE`), 8–11, 13–14, 17, and 19–24. The new numbering is in §4.

## 3. Glossary alignment (at 677ce98)

| SPEC term | RTL / LOCKS | Status |
|---|---|---|
| Beat (2 clocks) | "beat" (LOCKS), `uo_q` loads when `!out_phase_q` | OK |
| Output tick (§2 prose only) | `out_tick = out_phase_q` | **Add a glossary row.** It is used in §6.2 and §6.6 and Fig. 2 but defined only in §2 prose. |
| Output phase register | `out_phase_q` | Add the RTL name as an alias |
| Freeze (one beat at the pins) | core freeze lasts 2 edges (`ofz = dbg_freeze \| fz_prev_q`) | OK. §6.6 explains both views. The glossary could add "(2 core edges inside the core)". |
| Load placement | `OP_PLACE` | Still not named in SPEC (old edit 6) |
| Output buffer present (flags bit 7) | `HAS_OUTBUF` (cfg A = 1) | Still not named (old edit 2) |
| DEBUG_* | DBG_* (LOCKS, OPCODE_PROPOSAL) | Still split. Add short names to the §4 table. |
| Second clock of a RUN | `run_phase2` / "phase 2" | Still split (old edit 13) |
| Debug busy "frozen cycle" | `debug_busy <= dbg_freeze` (1 core edge) and a pin-visible frozen beat | **Ambiguous.** See edit 2. |
| Dump paused | `flags8[5] = dump_adv`, visible only in a frozen byte | OK. Optionally note "derived". |
| Edge / clock / cycle | used interchangeably | Define "core edge" once (edit 3) |

## 4. Concrete edits (numbered)

1. **Fig. 1 `pins.svg`.** The title says "the chip returns one byte per edge", and the `uo_out` note says "frozen debug byte for one clock period". → Change the title to "…; the chip updates `uo_out` once per beat (2 clocks)" and the note to "for one beat (2 clocks)". Regenerate the SVG and the PDF.
2. **§5 Flags, the Debug busy row.** It reads "high during the frozen cycle | next cycle". → Change it to "Set by: a freezing debug read. Pins: `uo_out[7]` = 1 for the frozen beat (inside the frozen byte, bit 3). Core: 1 for the edge after the debug opcode executes." **Ask Forge to confirm** that the pin-level statement is all a host needs, because in RTL `debug_busy` is a 1-edge register and the pins show the frozen byte rather than the live bit 7.
3. **§5, the Dump paused row.** It reads "a freezing debug read during an active dump | next cycle". → Change it to "…; visible only in a DEBUG_FLAGS frozen byte (bit 5)". Drop "next cycle", or change it to "next beat" if Forge confirms.
4. **§1 glossary.** Add these rows: "Output tick: a core edge where the output phase register (`out_phase_q`) is 1; the dump advances only on output ticks" and "Core edge: one rising edge of the 66 MHz clock". Also add the old aliases: inbuf, outbuf, OVF, and RUN phase 1/2.
5. **§1, paragraph 3.** It reads "reads back a 4-bit data nibble plus 4 live status flags". → Add "once per beat (2 clocks)".
6. **§6.6 vs §6.6.1 spacing wording.** §6.6 says "at least 2 clocks apart (opcode, NOP)". §6.6.1 says "one beat apart". → Use one phrase in both places: "at least one beat (2 clocks) apart: opcode, NOP". It matches Forge's G2.
7. **§6.6.1 table, DEBUG_PARTIAL_SUM row.** It reads "issued on edges k, k+2, k+4". → Add "bytes visible after edges k+2/k+3, k+4/k+5, k+6/k+7 by phase; read after k+3, k+5, k+7 to be safe". This follows from the stated k+3 rule. **Forge should confirm** before it lands.
8. **§6.6.1 heading level.** Old edit 17 still applies: `6.6.1` uses `###`.
9. **§2 "Clock".** "Place-and-route uses the 15.15 ns clock with a 2-cycle multicycle constraint on `uo_out`." → Move or copy this into §8, because it is a physical flow fact.
10. **§3.** Name the parameter: "load placement (RTL parameter `OP_PLACE`), product = 0". (Old edit 6 is now partly done.)
11. **§2 pin table.** Add `clk`, `rst_n`, and `ena` (old edit 3). They are already in Fig. 1.
12. **§5, "Reset sets every flag and register to zero".** The registered `ena` resets to 1 (§2 says so). Fix it as in old edit 11.
13. **§4, "[3:2] is the byte select" shared-field claim.** It is not true for CLEAR (old edit 8).
14. **§5, Illegal "Set by".** List every illegal case (old edit 10). The RTL's `ill_set` is unchanged.
15. **§6.1 and later.** Use "RUN phase 1 / phase 2" consistently (old edits 13 and 14).
16. **§7.1.** Add the setting-1 case (old edit 20).
17. **§7.3.** Make the formula unambiguous: integer division and an explicit sign-extend (old edit 21).
18. **§8, last sentence.** See §8 below for the proposed text.
19. **§10 References.** Internal files (LESSONS.md, QUOTES.md): Alex decides (old edit 23).
20. **README.md, "2-edge pin latency".** → Change it to "2 or 3 edge pin latency (phase-dependent); uo_out updates once per beat". It is stale relative to LOCKS and SPEC §2.

## 5. Figure and table check

| Item | Status | Notes |
|---|---|---|
| Fig. 1 `pins.svg` | **FAIL (stale)** | Says "one byte per edge" and "one clock period". Not regenerated since 12:04 CT, before the tip. Edit 1. |
| Fig. 2 `debug_timing.svg` | **PASS** | Panel A: edge k+1 is a tick, so the byte shows after k+2 and is held 2 clocks. Panel B: not a tick, so it shows after k+3 and "previous beat" is shown before it. Panel C: DEBUG_PARTIAL_SUM bytes 0, 1, 2 with NOP between them, one byte per beat. The core holds each value 2 edges. The caption says "Space debug reads one beat apart". All of this matches RTL lines 41–61 and LOCKS. Minor: Panel C does not mark which phase it assumes. Add "(edge k+1 is an output tick)" to its title. |
| Fig. 3 `load_path.svg` | PASS | Not affected by the half-rate change |
| §4 opcode table | PASS | Matches `polite_dbg.sv` and `polite_ctrl.sv`, including DEBUG_INPUT = `data` |
| §6.6 DEBUG_FLAGS bits | PASS | Matches `flags8 = {HAS_OUTBUF, OP_PLACE, dump_adv, run_phase2, 1, dump_adv, illegal, ovf\|pend}` |
| §6.6.1 latency table | PASS (edit 7 is optional) | |
| §8 metrics table | Unchanged from the first pass. Numbers not re-checked against QUOTES at this tip. | **Forge:** confirm whether the 677ce98 RTL/SDC change (multicycle on `uo_out`) required a new place-and-route run. If it did, the §8 numbers may predate the tip. |
| SPEC.pdf | Rebuilt 12:24 CT. Text shows the beat wording. | It embeds the stale Fig. 1. |

## 6. Open gaps for Forge / Alex

- **G6 (Alex):** slew and capacitance 494 / 24 at the slow corner are neither fixed nor waived. SPEC §8 and §9 state this correctly. I did not change any numbers.
- **G4b (Forge):** §8 provenance. See §8 below.
- **G8 (Forge, new):** Do the §8 place-and-route numbers come from a run on 677ce98, with its SDC multicycle and the half-rate `uo_q`? If they don't, mark them "pre-half-rate" or re-run.
- **G9 (Forge, new):** Confirm the Debug busy and Dump paused wording at pin level (edits 2 and 3).
- **G10 (Forge, new):** Confirm the safe-read edges for DEBUG_PARTIAL_SUM (edit 7).
- **G7:** closed. The golden model still omits `ena`, and §9 says so.

## 7. Do-not-touch / locked

All `[Alex]` LOCKS lines are locked: int4, single edge, 66/33 MHz, pin roles, CLEAR mask, dump order and endianness, product = cfg A, OP_PLACE = 0, RUN during freeze allowed in A, idle nibble 0. Also locked: Forge's 33 MHz lines (out_tick, 2-edge freeze stretch, 48/49 clocks, consecutive debug reads outside the contract), all §8 numbers, the 494/24 values, and the opcode encodings. None of the edits above changes these.

## 8. Does §8 cite 677ce98 and the R7 greens?

**No.** §8 still says only "The RTL design matches the reference model cycle for cycle on `uo_out` in random simulation". There is no commit hash, no test command, and no mention of the adversarial or R7 results (G4 is not folded in). I did not run the adversarial suite myself, so I can't confirm "70/0/0". Proposed text, for Forge to confirm the counts:

> Verified at commit `677ce98`: the RTL matches the golden pin-level model (`golden/chip.c`, `chip_step`) cycle for cycle on `uo_out` in random simulation (`gcc -Wall -O2 -o chip_test golden/chip.c && ./chip_test` → ALL PASS), and the adversarial suite including Cast R7 passes (70 pass / 0 fail / 0 error). Earlier tips `264456e` (interim) and `89dad4e` (pre-timing) are superseded.

## 9. Forge confirms (2026-11-01 ~12:28 CT) — tip `677ce98`

| Item | Status | Forge fact |
|---|---|---|
| **G8 §8 PnR** | **Pre-half-rate** | Table is earlier A0 PnR (QUOTES “A0 after”), **before** out_tick RTL + SDC multicycle on `uo_out`. Mark §8 physical results **pre-half-rate** until Cast re-PnRs A0 on this tip. Do **not** cite as 677ce98 silicon quotes. |
| **G9 Debug busy** | **Confirmed** | Hosts need pin view only: during frozen beat, all 8 `uo_out` bits are the frozen debug byte; bit 3 of that byte is 1. Live `uo[7]` is not what the host sees on that beat. Edit 2 pin wording correct. |
| **G9 Dump paused** | **Confirmed** | Visible **only** inside DEBUG_FLAGS frozen byte (bit 5). Drop “next cycle”; freeze covers any output tick in the 2-edge window (dump does not advance). Edit 3 OK. |
| **G10 PARTIAL_SUM** | **Confirmed** | Issue on k, k+2, k+4. Bytes visible after k+2/k+3, k+4/k+5, k+6/k+7 by phase; **safe always-read after k+3, k+5, k+7.** Edit 7 can land. |
| **R7 citation** | **Confirmed** | **70 pass / 0 fail / 0 gap** at tip (FINDINGS R7 after Forge absorb). Golden ALL PASS correct. §8 text OK if it also says physical PnR table is pre-half-rate pending Cast A0 re-run. |
| **Fig.1** | In flight | Forge regenerating beat wording + PDF; will tip when that commit lands. |

Forge will fold remaining Scribe wording edits (glossary `OP_PLACE`/`HAS_OUTBUF`, phase 1/2, pin table `clk`/`rst_n`/`ena`, etc.) into the same SPEC touch-up where they don’t wait on Alex.

### Scribe next
1. Wait for Fig.1 / PDF tip from Forge.
2. After that tip: quick Fig.1/PDF check; no full re-pass unless new conflicts.
3. Herald: refresh brief — R7 70/0/0 OK to cite with tip; **PnR numbers = pre-half-rate**, not 677ce98 silicon.
4. G6 slew/cap still Alex.

## 10. Alex decision — G6 (2026-11-01 ~12:28 CT via Progenitor)

**G6 = Fix** (tighten timing/loads), not waive. Forge tasked. Scribe will fold new slew/cap counts into Spec notes when the fix lands; do not invent numbers meanwhile.

## 11. Spot-check after Forge tip `aee2b47` (2026-11-01 ~12:30 CT)

**PASS.** See `SPEC-SCRIBE-SPOTCHECK-20261101-fig1.md`. Fig.1 beat wording and folded SPEC edits match §9–§10. Remaining: G6 fix landing + Cast A0 re-PnR for §8 table replace.
