# Scribe spot-check — SPEC @ 0dbc650 (parent 1d8327c)

Verdict: **PASS** (non-blocking nits listed below). HEAD = 0dbc650; diff from 4a6b867 checked; SPEC.pdf was rebuilt in this tip and pdftotext matches the md.

## Locks
1. DEBUG_ADD full 24-bit, byte select [3:2]: PASS. §4 opcode row L86, arg table L98, L100 ("Only DEBUG_PARTIAL_SUM and DEBUG_ADD use bits [3:2]"), L104 (byte 3 illegal, no freeze), §5 Illegal row L113, §6.6.1 table L198 + L201, dump pause L207, §6.7 L213. No "low byte only" text is left in the md, the PDF, or the figures. Each freeze is one beat, and there is no multi-beat mode (L166, L190).
2. DEBUG_FLAGS banks: PASS. Arg row L94, L104, L113, "Room to grow" L123, L207, §9 L248. Only bank 0 is defined. Bank ≠0 sets illegal and does not freeze. Bank 0 freezes for one beat. The SPEC says nothing about what other banks contain.
3. Prior locks: PASS. The SPEC teaches no RTL or compile parameters, and OP_PLACE, HAS_OUTBUF and Config B do not appear. One chip, always with an output buffer (L15; bit 7 always 1 at L181). Every freeze is exactly one beat (L28, L54, L102, L166).

## Soft host-guidance
- OK: always request bank 0. Treat illegal set with a live beat as "rejected, no freeze". Read 24-bit DEBUG_ADD as opcode,NOP ×3 with no RUN in between.
- Mild overreach risk: L123 "will be added in a future build" sounds like a commitment. A host might also infer that a future bank 1 will stop being illegal. Optional wording: "may be added".
- OK: a DEBUG_ADD byte read outside RUN phase 2 equals the matching partial-sum byte (L213).

## Nits (non-blocking)
- L123 "build-time expansion path" is fine as written. It is not presented as a host knob.
- The three DEBUG_ADD reads land on different cycles, so only one of them can fall on a given RUN phase 2. A host cannot capture a full 24-bit phase-2 preview. This is implied by L201, and the SPEC could say it outright.

Implementable by a host engineer: yes. Arguments, illegal cases, freeze width, read points and dump interaction are all stated explicitly.
