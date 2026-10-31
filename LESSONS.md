# Lessons (tags: [measured] [Alex] [assumption])
## Open TBDs
- [assumption] Nibble stream order is low nibble first within each 24b partial ("host endian" = LE?).
- [assumption] Exact LOAD placement for OP_PLACE 0/1 (shift left→top vs bus→top).
- [assumption] A RUN on the cycle right after a RUN is "while busy" (ignored + illegal). Max rate is 1 RUN per 2 clocks.
- [assumption] What happens to RUN while debug is busy in cfg A? The model allows it.
- TBD meaning of dump_paused (the model never sets it). How does ena/pause interact with dump?
- TBD what DBG_ADD shows, plus the byte/PE arg encodings for DBG_PSUM/DBG_MUL.
- TBD whether CLEAR outbuf in cfg B is a collision (the model treats it as illegal).
- [assumption] DBG_FLAGS shows debug_busy=0 when it reads itself (snapshot taken before the freeze).
- TBD the live data nibble when no dump is active (0 in the model).
