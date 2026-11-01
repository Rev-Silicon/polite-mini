# Scribe spot-check — SPEC @ e87482b (HEAD e21c5a4, LOCKS.md-only delta; SPEC.md/PDF identical)
Verdict: PASS. Implementable: yes.
1 Placement drop: no §3 placement section (§3 = Commands). L224 §6.1: inbuf furthest from input pads, "layout showed no preference". FLAGS bit6 reserved reads 0 (L181, L187). PASS.
2 0xC–0xF: L83 table + L99 reserved-expansion prose, illegal now, no other effect, host must not assume future legality; L110 illegal list; no freeze. PASS.
3 Nit: L131 "This pairing spends an issue slot on LOAD."; no "wasteful" in md/PDF. PASS. (Paragraph sits in §5.1 RUN, L128–131, not §6.1 — label nit only.)
4 Priors: DEBUG_ADD [3:2] byte, 3 freezes, byte 3 illegal no freeze (L93, L101, L199, L202). Banks: only 0, ≠0 illegal no freeze (L89, L120, L249). No OP_PLACE/HAS_OUTBUF/Config B/PnR. Outbuf always: bit7 identity=1 (L187). One-beat freeze (L53, L97, L167). RUN+LOAD rhythm L128 + fused-later L131. PASS.
Soft guidance (inferences, no overreach): read debug after k+3 (L191); space debug reads by NOP (L169); issue DUMP_ABORT unconditionally for recovery (L142); check illegal after risky cmds (L161); read DEBUG_FLAGS after reset to confirm chip (L187). No invented electrical/timing numbers.
