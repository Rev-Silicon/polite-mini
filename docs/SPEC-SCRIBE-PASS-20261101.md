# SPEC.md — Scribe clarity pass (2026-11-01)

Reviewed: `docs/SPEC.md` (tip, figures through `6b5fe8c`), `LOCKS.md`, `OPCODE_PROPOSAL.md`, `README.md`, `docs/figures/*.svg`, `rtl/**`, `pnr/results/QUOTES.md`, `pnr/polite_vneg1.sdc`, and comments in `golden/chip.c`. Scribe filled in no numbers. All numbers in SPEC §8 match `QUOTES.md` "A0 after".

## 1. Verdict

**FAIL (conditional): an engineer cannot implement the chip from SPEC alone yet.** The opcode, flag, CLEAR, LOAD, and dump-order sections are close to implementable as written. The output timing is not.

- **Known in-flight issue, not a Forge error:** the 33 MHz half-rate pad-out is still being built. RTL and golden already use a ÷2 `out_tick`, and Cast R7 is running adversarial checks in parallel. SPEC §2 says "66 MHz in / 33 MHz out". SPEC §1, §6.2, §6.6, §6.6.1, §7.3, and Figure 2 still describe one nibble and one freeze per **core** clock. Forge owns the fix. Scribe expects to do a second SPEC pass after half-rate commits.
- Apart from the half-rate issue, the edits below are wording and term fixes. None changes the design.

## 2. Glossary alignment

| SPEC term | RTL / LOCKS term | Status / action |
|---|---|---|
| Load placement (setting) | `OP_PLACE` parameter (LOCKS, RTL) | **Missing link.** SPEC never names the parameter. Add "(RTL parameter `OP_PLACE`)" in §3. |
| "Output buffer present" (flags bit 7) | `HAS_OUTBUF` (cfg A = 1) | **Missing.** SPEC never says that product = cfg A with `HAS_OUTBUF=1`. Add this to §1 or §3. |
| DEBUG_FLAGS / DEBUG_BUFFER / DEBUG_PARTIAL_SUM / DEBUG_MULTIPLY / DEBUG_ADD / DEBUG_INPUT | DBG_FLAGS / DBG_BUFFER / DBG_PSUM / DBG_MUL / DBG_ADD / DBG_INPUT (LOCKS, OPCODE_PROPOSAL, RTL comments) | Inconsistent names across the docs. Add a "short name" column to the §4 table, or use the same names in OPCODE_PROPOSAL. |
| "first clock (the RUN cycle)" / "second clock of a RUN" | phase 1 / phase 2, `run_phase2`, `mul_en` / `acc_en` | Define "RUN phase 1 / phase 2" once in §6.1 and use it everywhere. SPEC currently uses "second clock" about 10 times, and LOCKS uses "phase 2". |
| Input buffer (left and top) | `left`, `top`, "inbuf" | OK. Add "inbuf" as an alias in the glossary. |
| Output buffer | `polite_outbuf`, "outbuf" | OK. Add the alias. |
| Overflow / Illegal | OVF / illegal | OK. Add "OVF" as an alias. |
| Dump paused | Not a register in RTL. `flags8[5] = dump_adv` (busy at start), and it is only observable in the frozen byte | The SPEC meaning is correct. Optionally note "derived; not stored". |
| Freeze = "one cycle" | RTL: the freeze is **stretched to 2 core edges**, so that exactly one `out_tick` sees it | **Conflict. In-flight half-rate issue (see §5).** |
| Cycle / clock / edge | Used interchangeably | Define "core edge" and "pad output period (2 core edges)" once the half-rate behavior is final. |
| `rst_n`, `ena`, `clk` | Top-level ports | Missing from the §2 pin table. They appear only in Figure 1 and the prose. |

## 3. Concrete edits

1. **§1 Overview, glossary table.** Add the rows "RUN phase 1 / phase 2", "Core edge", "Configuration A (`HAS_OUTBUF=1`), the Tiny Tapeout product", and the aliases from §2 above. Keep the "Freeze" row's definition ("one cycle") on hold for Forge, because it is part of the in-flight issue.
2. **§1, paragraph 2.** "streams out while new multiply-accumulate steps run in parallel". Add: "This is configuration A (`HAS_OUTBUF=1`), the only Tiny Tapeout product. Configuration B exists only as a comparison build and is not specified here."
3. **§2 pin table.** Add three rows: `clk` (input, single rising edge), `rst_n` (input, active-low asynchronous reset: all state 0, input registers hold NOP), and `ena` (input, registered once and resets to 1; low = whole-chip hold one edge later). These rows use only facts already in RTL and Figure 1.
4. **§2 "Clock."** This paragraph is fine, and Forge should leave the numbers as they are. Move the sentence "Place-and-route uses a 15.15 ns clock" to §8, because it is a physical result, not pin behavior. **Flag:** after this paragraph, the rest of the document never explains what "33 MHz on the outputs" means. That belongs to the in-flight issue (§5, G1).
5. **§2 "Pad pipeline."** "All 8 `uo_out` bits come from one register loaded every edge." **This conflicts with the RTL:** `uo_q` loads only when `out_phase_q==0`, so it loads every other edge. Leave this for Forge's half-rate rewrite (G1) and do not edit it now.
6. **§3 Load placement.** Rewrite: "Load placement is fixed at build time by the RTL parameter `OP_PLACE` (0 or 1). It decides which input buffer a LOAD writes first (§7.1). The host can read it from DEBUG_FLAGS bit 6." **Flag for Forge:** SPEC does not state which value the TT product is built with. The parameter defaults to 0 in RTL; Forge should confirm that the shipped build uses that default.
7. **§4 command table, DEBUG_INPUT.** The SPEC says "registered `ui_in` byte", which matches the RTL (`val = data`). **Fix OPCODE_PROPOSAL instead.** It says "echo of the latched ui_in/uio", but the RTL does not return `uio`.
8. **§4, the sentence "Shared fields always sit in the same place: … [3:2] is the byte select."** This is true only for DEBUG_PARTIAL_SUM. CLEAR uses [3:2] as mask bits. Rewrite: "Whenever a command takes a processing element, the index is in [1:0]. DEBUG_PARTIAL_SUM's byte select is in [3:2]."
9. **§4, the last paragraph about illegal argument values.** Add: "DUMP_LOAD while a dump is busy, a RUN on RUN phase 2, and CLEAR conflicts also set illegal (§6)." That way the reader finds every illegal case from one place.
10. **§5 Flags table, the Illegal row's "Set by" column.** Today it reads "an illegal opcode or a CLEAR / DUMP_LOAD / RUN conflict". Replace it with: "opcode 0xC–0xF; RUN on RUN phase 2; DUMP_LOAD while dump busy; a CLEAR conflict; DEBUG_FLAGS bank ≠ 0; DEBUG_PARTIAL_SUM byte 3". This matches `ill_set` in `polite_ctrl.sv`.
11. **§5, "Reset sets every flag and register to zero."** This is not quite true: the `ena` register resets to **1**. Rewrite: "Reset (`rst_n` low) clears every flag and data register to zero. The registered `ena` resets to 1 (enabled)."
12. **§5, the Debug busy row "high during the frozen cycle".** Leave this for the half-rate rewrite, because the RTL stretches the freeze to 2 edges.
13. **§6.1 RUN.** Change "On the first clock (the RUN cycle)" to "On RUN phase 1", and "On the second clock" to "On RUN phase 2". Apply the same change throughout §6.2, §6.3, §6.6, and §6.7.
14. **§6.1, "any opcode other than RUN can fill the gap".** Add: "A RUN on phase 2 is treated as NOP and also sets illegal." The RTL converts it to NOP, so this is a statement of existing behavior.
15. **§6.2, "streams 24 nibbles, one per cycle, starting on the next cycle's output".** **Known in-flight issue.** The RTL advances one nibble per `out_tick`, which is every 2 core edges. Do not edit until Forge commits half-rate (G1).
16. **§6.2.** Add: "DUMP_ABORT with no dump running has no effect and is legal." The RTL does not set illegal in this case. Forge should confirm that this is intended (G5).
17. **Heading level of §6.6.1.** "### 6.6.1" sits at the same level as "### 6.6". Change it to "####", or renumber it as "6.7 Debug read latency" and move the current 6.7 to 6.8.
18. **§6.6.1, "Debug opcodes can be issued on consecutive edges; each one returns its byte one edge after the previous one."** **This conflicts with the RTL.** The freeze is stretched to 2 edges ("latest DBG value wins"), and `uo_out` changes at most every 2 clocks, so back-to-back debug opcodes can lose bytes. The DEBUG_PARTIAL_SUM row of the table (k+2, k+3, k+4) has the same problem. **Known in-flight issue (G1, G2).** Leave it for Forge.
19. **§6.7, the last paragraph "In short: …".** Keep it. It is a useful explanation. Move it to the top of §6.7 as the rule, then list the cases below it.
20. **§7.1.** Add the setting-1 case for symmetry: "With setting 1, the first byte ends up in left and the second in top." This follows directly from the shift rule.
21. **§7.3, the host reconstruction formula.** Make the formula unambiguous. Write `sum[n/6] |= nibble << (4*(n%6))` with "integer division", and spell out that the sign-extend step is `if (sum & 0x800000) sum -= 1<<24`. This is pure arithmetic and adds no design facts.
22. **§8, "matches the reference model cycle for cycle on `uo_out`".** Name the golden commit and the test command (README: `gcc … golden/chip.c && ./chip_test`). Also say whether the half-rate RTL was checked. **Flag for Forge.**
23. **§10 References.** `LESSONS.md` and `pnr/results/QUOTES.md` are internal. For an external SPEC, either say that they are internal or drop them. This is Alex's call.
24. **Structure (Diátaxis).** The document is mostly reference, which is correct. §6 is titled "Behavior for host software", and it mixes rules with how-to tips such as "To read the full 24-bit result … read with three DEBUG_PARTIAL_SUM". Either keep those tips but mark them "Note:", or move them to a short "Host recipes" appendix (read the full partial sum, run back-to-back RUNs, dump while computing).

## 4. Figure and table check

| Figure / table | Matches SPEC and RTL? | Notes |
|---|---|---|
| Fig. 1 `pins.svg` | Yes | It includes `rst_n`, `ena`, and `uio_oe=0`, which the §2 table lacks (edit 3). Its claim "a frozen debug byte for one clock period" is part of the **in-flight** issue (G1). |
| Fig. 2 `debug_timing.svg` | **No (in-flight)** | It shows `uo_out` changing every edge and back-to-back DEBUG_PARTIAL_SUM bytes at k+2, k+3, and k+4. In the RTL, the pad register loads every 2 edges and the freeze is stretched. Redraw it after half-rate lands. |
| Fig. 3 `load_path.svg` | Yes | Lane, index, and placement match `polite_ctrl.sv` and the top-level genvar map (k0=(2,2) … k3=(1,1)). The PE products match §7.2. |
| §4 opcode table vs `polite_dbg.sv` / `polite_ctrl.sv` | Yes | Freeze and illegal behavior for each opcode matches, including bank≠0 and byte 3 not freezing. |
| §6.6 flags byte vs `flags8` | Yes | `{HAS_OUTBUF, OP_PLACE, dump_adv, run_phase2, 1, dump_adv, illegal, ovf|pending}` = bits 7..0 as in SPEC. |
| §2 live flags vs `uo_q` | Yes | `{debug_busy, dump_busy, illegal, ovf}` = bits 7..4. |
| §8 PnR table vs `QUOTES.md` (A0 after) | Yes | All values match. The 15.15 ns period matches the SDC. |

## 5. Open gaps for Forge (Scribe will not fill these)

- **G1 — KNOWN IN-FLIGHT, not a Forge error: 33 MHz half-rate pad-out.** RTL and golden use a ÷2 `out_tick`. The dump advances once per 2 core edges, the pad register loads every 2 edges, and the freeze is stretched to 2 edges. SPEC §1 (Freeze), §2 (Pad pipeline, "loaded every edge"), §5 (Debug busy), §6.2 (one nibble per cycle), §6.6 / §6.6.1 (1-cycle freeze, consecutive debug reads), §7.3, and Fig. 2 still describe per-core-edge output. Cast R7 is checking this in parallel. Forge should rewrite these sections when half-rate commits, and Scribe will do a follow-up pass.
- **G2.** Once half-rate lands, state the rules: the minimum spacing between debug opcodes that guarantees no lost byte; whether pin latency is still "2 edges" or depends on the `out_tick` phase; how the host learns the `out_tick` phase after reset (`out_phase_q` resets to 0); and the length of the full dump in core edges.
- **G3.** Confirm the shipped `OP_PLACE` value for the TT build (edit 6).
- **G4.** §8 cycle-for-cycle equivalence: give the golden commit and say whether the claim covers the half-rate RTL (edit 22).
- **G5.** Confirm that DUMP_ABORT while idle is a legal no-op (edit 16).
- **G6.** Slew and capacitance violations (494 / 24) are still open (§9). Forge must decide whether to fix or waive them. Do not change the numbers.
- **G7.** `ena` behavior is not modeled in golden (§9). State whether an `ena` hold also freezes the `out_tick` phase. The RTL says it does (`if (en)` toggle); this should be confirmed as intended.

## 6. Do not touch (locked)

- Signed int4, host-side scale, zero point, ReLU, and bias; no on-chip ReLU, bias, or scale [Alex].
- Single-edge clock; 66 MHz in / 33 MHz out target [Alex]. The 15.15 ns PnR clock.
- Instruction layout [7:4] opcode, [3:0] args; opcode numbers 0x0–0xB; 0xC–0xF illegal.
- CLEAR bit mapping and the "whole CLEAR ignored + illegal" conflict rule (busy at start, including RUN phase 2 and the final-nibble cycle).
- Dump order PE(2,2), (2,1), (1,2), (1,1); little-endian nibbles; 24-bit wrap with sticky OVF.
- LOAD byte {hi=lane1, lo=lane0} and the OP_PLACE shift rules.
- Live flags `uo[7:4] = {debug_busy, dump_busy, illegal, OVF}`; idle data nibble = 0.
- RUN allowed during a debug freeze (cfg A); no plain DUMP opcode.
- DBG_ADD preview rule and the rule that only a freezing debug read pauses the dump (R3-F15, R2-F10).
- Pad pipeline facts: inputs registered, `uo_out` registered, reset loads NOP, `ena` registered (resets to 1).
- All §8 PnR numbers (they match QUOTES "A0 after").

## 7. Forge answers (2026-11-01 ~12:21 CT) — facts only

Recorded from Forge; Scribe did not invent numbers. SPEC.md still untouched. Second Scribe pass waits on half-rate tip.

| Gap | Status | Forge fact |
|---|---|---|
| **G1** | In-flight ACK | Half-rate rewrite of §1/§2/§5/§6.2/§6.6/Fig.2 is in the working tree (**uncommitted**). Re-pass after Forge tips the commit. |
| **G2** | Partial (for re-pass) | Hosts must space freezing debug reads **one beat apart** (latest DBG on consecutive core edges wins). Pin latency is **k+2 or k+3** depending on whether the execute edge is an `out_tick`. Full dump length in core edges still lands with the half-rate tip. |
| **G3** | **Answered** | Shipped `OP_PLACE` = **0**. TT product A uses RTL default (old left→top, new byte→left; first LOAD ends in **top**, second in **left**). Locked as product-A golden default. Still readable on DEBUG_FLAGS bit 6. |
| **G4** | **Answered (interim)** | Do **not** cite a half-rate commit yet (WIP uncommitted). Last **committed** pin-model golden tip: `264456e` (timing rev: `chip_step` = pad model). Pre-timing adversarial tip `89dad4e` is **stale** for any cycle-exact LESSONS line (Cast R7). When half-rate commits, §8 names that new hash + `gcc … golden/chip.c && ./chip_test` / adversarial `run_all` incl. R7. |
| **G5** | **Answered** | DUMP_ABORT idle = **legal no-op**. Cfg A: opcode 0x4 clears dump_busy (golden clears dump_paused); does **not** set illegal. Illegal only if `!HAS_OUTBUF` (cfg B). Edit 16 correct. |
| **G6** | **Answered (open)** | Slew/cap 494/24 still **open — neither fixed nor waived**. Numbers stay as SPEC §8 / QUOTES “A0 after”. Fix vs waive waits on **Alex**; Forge is not waving them. |
| **G7** | **Answered** | `ena` low **does** freeze `out_tick` / `out_phase_q` (toggles only `if (en)`). Intended. Golden still does not model `ena` (SPEC §9 accurate). |

**DEBUG_INPUT:** SPEC correct (`ui_in` / registered data only). OPCODE_PROPOSAL “echo ui_in/uio” is wrong — Forge will edit the proposal to match RTL (`val = data`). Not a SPEC change.

**Misreads check:** Forge confirms Scribe’s RTL reads on freeze stretch, out_tick dump advance, and DUMP_ABORT idle match current WIP.

### Scribe next
1. Hold SPEC wording edits until half-rate tips (Forge).
2. On tip: re-pass SPEC vs RTL/golden; fold G2 spacing/latency rules; cite new §8 hash.
3. Edit 6 can now state `OP_PLACE=0` for product A when that rewrite lands.
4. G6 remains Alex decision — flag only.
