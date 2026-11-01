# Scribe spot-check — SPEC @ 5fd43e3 (3-beat 24-bit freeze)

HEAD confirmed 5fd43e3. SPEC.md not edited. SPEC.pdf mtime = SPEC.md mtime (14:52 CT); pdftotext shows the 3-beat text.

## Verdict: PASS with conditions — implementable: yes

## Alex lock (3 beats, one opcode, LSB first; [3:2] reserved; others 1 beat)
- Glossary L28: "beat or beats… most one beat; PSUM/ADD three consecutive". Old "every freeze is one beat" absolute gone. PASS
- §2 L53, L57: 8-bit reads 1 beat; PSUM/ADD 3 beats (6 clk), LSB first. PASS
- Opcode table L77–82: 1/1/3/1/3/1 beats, "all 24 bits from one command". PASS
- Arg table L90, L92 + L94: [3:2] reserved/ignored, explicitly "no byte select"; no "byte 3 illegal" anywhere. PASS
- L96, §5.6 L166, L190: byte order [7:0],[15:8],[23:16], single-edge capture. PASS
- Flags table L111 (debug busy whole window), L113 (dump paused all 3). PASS
- §4 L119 "Bank 0 … exactly one beat". PASS
- §5.2 L147: framing is per-opcode — one PSUM/ADD drops beats after j+3, j+5, j+7 (matches LOCKS L52). No multi-issue framing remains. PASS (nit below)
- §5.6 spacing L168 / L194: op + 5 NOPs = next freezing DBG on edge k+6+; one-beat op+NOP = k+2+. Consistent with each other and LOCKS. PASS
- Table L196–203 + L192: reads after k+3/k+5/k+7. PASS
- L205, §5.7 L218–222: PSUM/MULTIPLY pre-add; ADD full 24-bit preview over 3 beats; single capture so mid-hold RUN/CLEAR doesn't tear. PASS
- Figure 2 caption L209 scoped to one-beat; note L211 explains 3-beat extension. PASS
- Dump pause L213: 3 beats longer per PSUM/ADD. PASS

## Condition (must fix)
C1. §7 (L248–250) is silent that golden/chip.c, RTL and adversarial still implement the dropped 1-beat + [3:2] byte-select model (LOCKS L53). Not an active overclaim (status pinned to 71af5e2), but a reader would assume "ALL PASS" covers the freeze behavior described. Suggested add after L248:
> "The three-beat DEBUG_PARTIAL_SUM/DEBUG_ADD freeze described in Sections 2, 3 and 5.6 is not yet implemented in the reference model, RTL or adversarial suite, which still implement the earlier one-beat, byte-select form; this behavior is specified but unverified."

## Regression locks
- buffer×bus (LOAD one buffer; RUN buf×live ui_in; no left→top) L41, L130, L234: hold. "left/top" absent.
- Arch-only / one outbuf: §5.2 L137, L151. hold.
- 0xC–0xF reserved/illegal "may" L83, L98: hold.
- FLAGS bank 0 only, ≠0 illegal no-freeze L89, L100, L119, L254: hold.
- Room to grow "may" L119: hold.
- Placement furthest-from-pads L227; bit6 reserved reads 0 L180, L186; live uo[7]=0 L45: hold.
- §7 honesty: elab "not reconfirmed", lockstep gap stated L248–250: hold (see C1).

## Soft host-guidance (inferences)
- k+3/k+5/k+7 phase-independent read points: derived from pad pipeline, matches LOCKS. OK.
- "op + 5 NOPs" conservative; OK.
- No invented electrical/timing numbers found (30.30 ns / 66/33 MHz are pre-existing locks).

## Nits (non-blocking)
- N1 L147: could say "for each freezing DBG_* **opcode**" and "the next two beats (after j+5, j+7) of the same opcode" to make one-opcode explicit.
- N2 L194: optionally add "issuing a second freezing read earlier is a host error; result undefined" (L168 implies it).
