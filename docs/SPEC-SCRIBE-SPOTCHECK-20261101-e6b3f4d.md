# Scribe spot-check — e6b3f4d (on 0dbc650)

Verdict: PASS. Implementable: yes. The change is docs-only: SPEC.md +4 lines at §6.1 (~L132–134), SPEC.pdf rebuilt (strings match the .md), LOCKS.md +1.

## Checks
1. RUN+LOAD regular rhythm (§6.1 ¶ "In regular use…"): clear. It agrees with the previous paragraph: the LOAD goes in the phase-2 gap and doesn't touch the RUN in flight, and the rate stays at 1 RUN per 2 clocks. It also says one LOAD = one byte shift (§7.1), so consecutive RUNs see overlapping pairs, and a fresh independent pair still takes 2 LOADs (lower rate). It adds no new timing and doesn't change the half-rate output, out_tick, freeze, or dump rules.
2. Wasteful vs fused: host meaning is clear. The fused command is only hypothetical ("candidate for a later revision"). It adds no opcode, no RTL or compile knob, and no Config B (grep shows 0 matches). It stays architecture-only.
3. Regression: still hold. DEBUG_ADD 24-bit via three one-beat reads, byte 3 illegal and doesn't freeze (L104, L113, L205, L211). DEBUG_FLAGS: only bank 0 is defined. Arch-only, one outbuf, and one-beat freezes are unchanged.

## Soft guidance (inferences)
- The host should pack its stream so each new byte is the next operand it wants. This is a usage hint, not a requirement.
- "Two cycles" for the fused form describes a hypothetical, not a commitment. OK.

## Nits (non-blocking)
- "It is understood that this pairing is wasteful" could be tighter ("This pairing spends an issue slot on LOAD").
- Earlier 0dbc650 nits are deferred to the next SHA per Forge. Not counted here.
