> **SUPERSEDED (2026-11-01).** This is the historical opcode proposal and contradicts the locked design in several places (RUN-while-busy illegal, DBG_BUFFER left/top, DBG_PSUM/DBG_ADD byte select, DEBUG_FLAGS bit 6). The canon is `docs/SPEC.md` (behavior) and `docs/LOCKS.md` (decisions). Do not review or implement from this file.

# Opcode proposal (instr = uio[7:4] op, uio[3:0] args)
The chip has an output buffer. Full semantics: docs/SPEC.md (source of truth).
| op | name | notes |
|---|---|---|
|0|NOP||
|1|LOAD|ui_in → input buffer in 1 cycle (placement set by OP_PLACE)|
|2|RUN|one MAC step over 2 clocks; RUN while busy → ignore + sticky illegal|
|3|DUMP_LOAD|snapshot PE sums → outbuf and stream nibbles; RUN can run in parallel|
|4|DUMP_ABORT|stop the stream, dump_busy=0|
|5|CLEAR|args bitmask [0]flags [1]inbuf [2]outbuf [3]PE; any collision → whole CLEAR ignored + illegal|
|6|DBG_FLAGS|arg = bank; only bank0 is defined: [0]OVF [1]illegal [2]dump_busy [3]debug_busy [4]run_busy [5]dump_paused [6]OP_PLACE [7]HAS_OUTBUF (always 1)|
|7|DBG_BUFFER|arg[0]: 0=left 1=top byte|
|8|DBG_PSUM|arg[1:0]=PE index (dump order), arg[3:2]=byte 0..2|
|9|DBG_MUL|arg[1:0]=PE, last product (sign-ext 8b)|
|A|DBG_ADD|arg[1:0]=PE; low byte of wrap24(psum+mul) on RUN phase 2, else low(psum)|
|B|DBG_INPUT|echo of the registered ui_in byte only (not uio_in)|
|C–F|illegal|set sticky illegal|
