# Scribe pass c: fuller-prose SPEC (tip f9cec6a)

- Tip verified: HEAD = `f9cec6a` ("SPEC prose expand"). Only `docs/SPEC.md` and `docs/SPEC.pdf` changed vs `aee2b47` (+65/−43 lines). Figures are untouched.
- Word count: 3450 (aee2b47) → 5121 (f9cec6a), about +48%.
- Evidence checked: `rtl/ctrl/polite_ctrl.sv`, `rtl/pe/polite_pe.sv`, `rtl/top/tt_um_polite_mini.sv`, `docs/LOCKS.md`. SPEC.md was not edited.

## 1. Verdict

**Implementability: PASS, with conditions.** A host-driver engineer can implement from this SPEC alone. The pin and pad timing, framing, CLEAR rules, debug spacing, phase-2 visibility and dump reconstruction are all stated well enough to code against. I found no semantic change to normative rules. The new text is commentary and rationale. An RTL engineer can also implement from it, given the ISA tables and the §6 rules.

Conditions:
- C1: Fix the LOAD-in-gap advice. As written, it can mislead a driver writer about operand pairing (see table, OVERREACH).
- C2: Soften the overflow sentence (OVERREACH).
- C3: Forge should confirm or trim the §9 `ena` counting note and the two design-intent claims (NEEDS_FORGE).
- C4: The physical sign-off is still open (G6 494/24, Cast A0). This affects the tapeout, not the SPEC's implementability.

## 2. Soft-inference table

| # | Inference (section) | Verdict | Evidence / proposed fix |
|---|---|---|---|
| 1 | Use a LOAD in the RUN gap "so that the next operands are in place for the following RUN" (§6.1) | **OVERREACH** | Legality is fine. LOAD is not illegal on RUN phase 2. Phase 2 adds `mul_q`, which was latched on phase 1 (`polite_pe`: `if (mul_en) mul_q <= p`), so a LOAD on phase 2 cannot disturb the in-flight add. **But** one LOAD shifts both buffers (placement 0: old left→top, new→left; `polite_ctrl` line ~40). A single gap LOAD therefore gives "new left plus previous left as top", not a fresh independent operand pair. A fresh pair needs 2 LOADs, which needs a 2-edge gap or more and drops the rate below one RUN every 2 clocks. Rewrite: "Any non-RUN opcode can fill the gap, including LOAD; a LOAD there does not affect the RUN in flight. Note that one LOAD shifts both buffers (Section 7.1), so loading a fresh left/top pair takes two LOADs." |
| 2 | Typical tile schedule: RUNs → DUMP_LOAD → CLEAR partial sums → next tile while the stream runs (§6.2). DUMP_ABORT issued unconditionally for recovery. | **OK** | DUMP_LOAD captures `run_phase2 ? pends : psums`, so DUMP_LOAD on the last RUN's phase 2 is valid. CLEAR bit 3 is illegal only while `run_phase2`, so a CLEAR on the next edge is legal. CLEAR bit 3 does not touch the output buffer. DUMP_ABORT with `HAS_OUTBUF` is never illegal (`da_ill` applies to cfg B only), which matches LOCKS line 37. Optional: say "on the edge after DUMP_LOAD" instead of "once the copy is taken". |
| 3 | Hold off RUNs across 3× DEBUG_PARTIAL_SUM for a consistent 24-bit value (§6.6.1) | **OK** | This follows from one byte per opcode and reads spaced at least 2 clocks apart. A RUN can complete between reads. A CLEAR bit 3 between reads would break consistency in the same way. Optional: "hold off RUNs and partial-sum CLEARs". |
| 4 | Flags bits 6/7 as a read-once-after-reset identity check (§6.6) | **OK** | `flags8 = {HAS_OUTBUF, OP_PLACE, …}`. Both are build parameters and constant. Minor: the read freezes the outputs for one beat, which is harmless right after reset. |
| 5 | Drive reserved argument bits to 0 "so that future revisions can give them a meaning" (§4) | **OK (soften intent)** | The RTL ignores them, and the ISA table already says "drive 0". The forward-compatibility reason is a design-intent claim that I found in no LOCK. Either keep it as a "should" or reduce it to "drive them to 0". This is not a semantic issue. |
| 6 | §9: an `ena` hold freezes the beat phase; "a host that counts clocks … should not count clocks during which `ena` was low" | **NEEDS_FORGE** (softest) | The phase-freeze part is LOCKed (line 37). The counting advice is off by one at the boundaries: `ena` is registered (`ena_q <= ena`), so the held edges are the edges *after* the pad-low clocks. The count happens to come out equal, but the wording ties it to the wrong clocks. The SPEC is also silent on what happens to *commands* presented while `ena_q`=0. The input registers are outside the gated logic, so presumably they are sampled and dropped or overwritten. That is unverified here, and the golden model does not model `ena`. Suggest: "hold edges = edges on which the registered `ena` is 0, one edge after the pin; Forge to state whether instructions sampled during a hold are lost." Otherwise drop the clause. |
| 7 | DEBUG_BUFFER to confirm load order before RUN (§7.1) | **OK** | DEBUG_BUFFER is opcode 0x7, arg[0] 0=left/1=top (§4 table). Fine. |
| 8 | "A host that sees overflow set knows at least one sum is no longer the true mathematical result" (§7.2) | **OVERREACH** | `pend_ovf` flags any single add that wraps. Overflow is sticky (it also persists across tiles until CLEAR bit 0). A later opposite wrap can bring a sum back to its true value, and the flag can also be left over from an earlier tile. Rewrite: "…knows that at least one add wrapped since the flags were last cleared, so the sums may not equal the true mathematical result." |
| extra a | "Splitting the multiply and the add over two clocks keeps each clock's logic short enough to meet the 66 MHz target" (§6.1) | **NEEDS_FORGE** | Rationale not backed by any LOCK or PnR evidence in the tree. §8 numbers are pre-half-rate. Cut it or have Forge confirm. |
| extra b | "DEBUG_FLAGS banks ≠0 … reserved so later revisions can expose more status" (§9) | **NEEDS_FORGE** | Intent claim. Only "undefined and illegal" is LOCKed. |
| extra c | All-or-nothing CLEAR "is intentional", and the rejected-CLEAR-keeps-illegal consequence (§6.3) | **OK** | The consequence matches the RTL (`ill_set` after `clr_ok` gating; clr_ok=0 so no flag clear). |
| extra d | DUMP_LOAD on phase 2 means "no extra idle clock" (§6.2); a rejected DUMP_LOAD "prevents overwriting" | **OK** | Matches `load_data(run_phase2 ? pends : psums)` and `dl_ill`. |

## 3. Clarity wins / fluff cuts

**Wins (keep):**
- §1, second paragraph: why the chip has no ReLU, bias or scale, and the claim that results are exact wrapped sums.
- §2: the "read after edge k+3 is always safe" fallback, which appears in §2 and §6.6.1. This is the most useful sentence a driver writer gets.
- §2: "host must drive NOP when idle (inputs sampled every clock)".
- §3: why placement is reported (a wrong driver silently swaps operands).
- §4: one PE index everywhere (dump order = debug index).
- §6.2: the framing paragraph ("collect `uo[3:0]` on every bit-6 beat, skip own frozen beats, stop at 24 / bit-6 fall").
- §6.3: the all-or-nothing rationale, plus the rejected-CLEAR-keeps-illegal note.
- §6.4: "chip does not count events; check after risky commands".
- §6.6: why consecutive freezes fail (2-edge window, one tick).
- §6.6 dump pause: "dump takes one beat longer per freeze".
- §8: "Functional verification is current", split from the physical table.

**Cuts / rewrites:**
- §1 last paragraph: "Most of the timing rules in this document follow from that one fact." This is foggy. Cut it, or say "The pad latency and debug spacing rules in Sections 2 and 6.6 follow from this."
- §1: "the interface is simple and synchronous". This is fluff. Cut "simple".
- §2 Clock: "This gives the output pads and the host's input sampling twice as much time as a full-rate output would." It is OK but redundant with "held stable for one full beat". Optional cut.
- §2: the paragraph "Because outputs move once per beat … never two nibbles fighting over the same beat" duplicates §6.2 and §6.6. Cut "never two nibbles fighting…".
- §2 pad pipeline: "The one-edge difference is simply whether the result has to wait for the next output register load." Keep it, but drop "simply".
- §6.1: the 66 MHz rationale (see extra a). Cut unless Forge confirms it.
- §6.1: "A freeze only affects what the output pins show; it does not stop the datapath." Good. Keep.
- §6.2 last line: "every dump goes through the output buffer". OK.
- §6.5: "keep watching the flag pins with no extra commands". OK, minor.
- §6.6.1: "This is the same pad pipeline as in Section 2." Good cross-reference. Keep.
- §6.6.1 and §2 both restate the k+3 fallback. Acceptable for a reader who jumps straight to §6.6.1.
- §6.7 intro sentence: fine. Keep.
- §7.1 and §7.2: apply rewrites #1 and #8 above.

## 4. Remaining gaps

- **G6:** slow-corner max slew / max capacitance 494 / 24 is still open. Alex directed: fix by tightening, do not waive.
- **Cast A0:** the re-PnR on `677ce98` (half-rate RTL plus the `uo_out` multicycle constraint) is pending. §8 stays labeled pre-half-rate, which is correct. Update §8 and §9 once Cast A0 lands.
- **ena:** the golden model still does not model it. Forge should state whether instructions are dropped during a hold (#6).
- Functional sign-off is cited at `677ce98` (cycle-exact random simulation, chip_test ALL PASS, R7 70/0/0). This prose-only tip changes no RTL, so the citation is still valid.
- Figures and glossary are consistent after the expansion. Fig. 1–3 are each referenced once and unchanged. The glossary terms beat, output tick, freeze, core edge, `OP_PLACE`/`HAS_OUTBUF` and phase 1/2 match the new prose and LOCKS (output tick = `out_phase_q`=1 before the edge). The DBG_* alias is still listed. No new terms need adding.

## 5. Do-not-touch

- All normative rules: pad latency k+2/k+3, the k+3 fallback, 48/49-clock dump busy, the framing rule, the 3/4-edge nibble-0 latency.
- The CLEAR conflict list and same-edge overflow priority, the §6.7 phase-2 visibility list and its rule sentence, the debug spacing rule, the illegal-but-non-freezing debug args.
- The `HAS_OUTBUF` / `OP_PLACE` values, LOAD packing, dump order and reconstruction code.
- The §8 pre-half-rate banner, the 494/24 row, the 677ce98 verification citation.
- Figures 1–3.
