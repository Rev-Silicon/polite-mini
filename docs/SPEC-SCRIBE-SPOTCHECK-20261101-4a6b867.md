# Scribe spot-check — SPEC.md + SPEC.pdf @ 4a6b867

**Overall: PASS** (no lock violations; 2 optional wording nits)

HEAD = 4a6b867. SPEC.pdf was rebuilt in the same commit. I did not edit SPEC.

## Lock 1: architecture only, no RTL or compile-parameter teaching: PASS
- I found no OP_PLACE, HAS_OUTBUF, cfg B or compile-switch wording in SPEC.md or in the PDF text.
- §2 (line 68) calls load placement "a fixed property of the chip that the host cannot change", reported in debug flags bit 6 = 0. This describes the chip, not a build setting.

## Lock 2: one chip with an output buffer: PASS
- There is no Config B and no second-product story. DUMP_LOAD always copies into the output buffer (§6.2). RUN can overlap the stream without conditions.

## Lock 3: freezing debug reads own uo for exactly one beat: PASS
- The glossary (l.28), §2 (l.54), §3 (l.101), §6.6 (l.163, which states "no multi-beat capture mode"), §6.6 width table and Fig 2 all say one beat. DEBUG_ADD and DEBUG_BUFFER are named explicitly (l.101, l.163).
- The flags table (debug busy and dump paused) is tied to that single beat.
- The only "multi" hit in the PDF is that denial sentence.

## Soft host-guidance inferences: none overreach
Each one below rests on a normative rule elsewhere in SPEC:
- "may treat uo_out as a 33 MHz signal sampled once per beat" (l.56). It follows from the one-update-per-beat rule.
- "read after k+3 is safe in both cases" (l.62, l.187). It follows from the pad pipeline.
- "DUMP_ABORT can be issued unconditionally" (l.138). It follows from the rule that DUMP_ABORT with no dump running is a legal no-op.
- "A typical schedule … clear on the edge after DUMP_LOAD" (l.134). It follows from the rule that the stream reads the output buffer.
- "check the flag after each risky command" (l.157). It follows from the fact that sticky flags have no event count.
- "host watching uo[7:4] should skip beats it froze" (l.120). This matches the framing rule in §6.2.

## Leftovers (optional, not blocking)
1. l.213: "reads that … keep a copy past this cycle (DEBUG_ADD …)". A lead could read "keep a copy" as some kind of capture. Suggested wording: "reads that report the adder output or a value latched on this edge".
2. l.46 (uo_out[7:4] row): one dense sentence carries the definitions of bits 4–7 plus the frozen-beat caveat. Splitting it per bit would read more easily. This is a clarity point only.

## Implementability for a host engineer: OK
Pin timing (k+2/k+3, safe read at k+3), the debug spacing rule (opcode, NOP), dump framing (bit 6 minus self-frozen beats, exactly 24 nibbles), LOAD order and ena hold behaviour in pin terms are each specified once and consistently.
