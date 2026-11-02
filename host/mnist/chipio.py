"""ctypes driver for golden/chip.c. Only genuine opcodes go over the pins (ui_in=data, uio_in=instr)."""
import ctypes, os, subprocess
HERE = os.path.dirname(os.path.abspath(__file__)); ROOT = os.path.join(HERE, "..", "..")
LIB = os.path.join(HERE, "build", "libchip.so")
NOP, LOAD, RUN, DUMP_LOAD, DUMP_STOP, CLEAR, DBG_FLAGS, DBG_PSUM = 0x00, 0x10, 0x20, 0x30, 0x40, 0x50, 0x60, 0x80
PR, PC = [2, 2, 1, 1], [2, 1, 2, 1]  # dump-order index -> (row,col), 1-based

class Chip(ctypes.Structure):
    _fields_ = [("has_outbuf", ctypes.c_int), ("op_place", ctypes.c_int), ("buf", ctypes.c_uint8),
                ("last_in", ctypes.c_uint8), ("last_instr", ctypes.c_uint8), ("psum", ctypes.c_int32 * 4), ("mul", ctypes.c_int16 * 4),
                ("ovf", ctypes.c_int), ("illegal", ctypes.c_int), ("run_busy", ctypes.c_int), ("dump_busy", ctypes.c_int),
                ("debug_busy", ctypes.c_int), ("dump_paused", ctypes.c_int), ("outbuf", ctypes.c_int32 * 4), ("dump_idx", ctypes.c_int),
                ("frozen", ctypes.c_int), ("frozen_val", ctypes.c_uint8),
                ("phase", ctypes.c_int), ("fz_prev", ctypes.c_int), ("ofz", ctypes.c_int),
                ("fz_n", ctypes.c_int), ("fz_left", ctypes.c_int), ("fz_k", ctypes.c_int), ("fz_val", ctypes.c_uint32),
                ("in_d_q", ctypes.c_uint8), ("in_i_q", ctypes.c_uint8), ("uo_q", ctypes.c_uint8), ("uo_pad", ctypes.c_uint8),
                ("otick_q", ctypes.c_int)]

def _lib():
    src = os.path.join(ROOT, "golden", "chip.c")
    if not os.path.exists(LIB) or os.path.getmtime(LIB) < os.path.getmtime(src):
        os.makedirs(os.path.dirname(LIB), exist_ok=True)
        subprocess.check_call(["cc", "-O2", "-shared", "-fPIC", "-DCHIP_NO_MAIN", "-I", os.path.join(ROOT, "golden"), src, "-o", LIB])
    l = ctypes.CDLL(LIB); l.chip_step.restype = ctypes.c_uint8; l.chip_step.argtypes = [ctypes.POINTER(Chip), ctypes.c_uint8, ctypes.c_uint8]
    return l

def pack(lo, hi):  # two signed int4 lanes -> byte (lane0 = row/col 1)
    return (int(lo) & 0xF) | ((int(hi) & 0xF) << 4)

class Driver:
    """Host never reads chip state directly; everything comes back over uo_out."""
    def __init__(self, cfg="A", op_place=0):
        self.l = _lib(); self.c = Chip(); self.A = cfg == "A"; self.P = op_place
        self.l.chip_reset(ctypes.byref(self.c), int(self.A), op_place); self.steps = 0; self.ops = {}
    def step(self, d, ins):
        self.steps += 1; k = ins & 0xF0; self.ops[k] = self.ops.get(k, 0) + 1
        return self.l.chip_step(ctypes.byref(self.c), d, ins)
    def clear(self): self.step(0, CLEAR | 0x9)  # psum + flags
    def mac(self, a2, b2):
        """psum[r][c] += a2[r]*b2[c]: a = input buffer (LOAD, rows), b = bus byte on ui_in with RUN (cols)."""
        self.step(pack(*a2), LOAD); self.step(pack(*b2), RUN)  # RUN is pipelined: next LOAD overlaps phase 2 (affects later RUNs only)
    # 33 MHz pad-out: uo_out updates once per output tick (2 core clocks). An op on pin step j executes on core edge j+1.
    # An 8-bit debug read is two nibbles, low nibble first, on the output ticks with uo[7]=1 (phase-independent samples j+3 and j+5).
    # A 24-bit read is six nibbles. The next freezing opcode waits until that window has closed (j+4 for 8-bit, j+12 for 24-bit).
    LAT = 3
    def flags(self): return self.query([(0, DBG_FLAGS)])[0]
    def query(self, ops):
        """Issue each 8-bit debug op and assemble two uo[7]=1 nibbles, low nibble first. Bits [7:4] of the pad are markers, not data."""
        outs, idx = [], []
        for d, i in ops:
            idx.append(len(outs))
            outs.append(self.step(d, i))
            outs.append(self.step(0, NOP))
            for _ in range(6):
                outs.append(self.step(0, NOP))  # covers j+5 and the held edge after it; next op is outside the 8-bit window
        vals = []
        for rel in idx:
            s0 = next(i for i in range(rel, rel + 8) if outs[i] & 0x80)
            b = 0
            for n in range(2):
                v = outs[s0 + 2 * n]
                if (v & 0x80) == 0:
                    raise RuntimeError("debug nibble missing uo[7]")
                b |= (v & 0xF) << (4 * n)
            vals.append(b)
        return vals
    def read_tile(self):
        """2x2 int32 tile [[(1,1),(1,2)],[(2,1),(2,2)]]. cfg A: DUMP_LOAD stream; cfg B: DBG_PSUM nibbles."""
        raw = [0] * 4
        if self.A:
            self.step(0, DUMP_LOAD); edges = [self.step(0, NOP) for _ in range(60)]
            # One value per output tick (2 edges). Dump nibbles are the output ticks with uo[6]=1. This window issues no debug
            # read. A debug-nibble tick would force bit 6 to 0 and set bit 7, so bit 6 framing would skip it. Count exactly 24 nibbles.
            s0 = next(i for i, v in enumerate(edges) if v & 0x40)
            o = [edges[s0 + 2 * n] for n in range(24)]
            assert all(v & 0x40 for v in o)
            for n in range(24): raw[n // 6] |= (o[n] & 0xF) << (4 * (n % 6))
        else:
            # one DEBUG_PARTIAL_SUM opcode per PE -> 6 nibbles, low nibble first, marked by uo[7]. Next read waits out the 12-tick window.
            for k in range(4):
                o = [self.step(0, DBG_PSUM | k)] + [self.step(0, NOP) for _ in range(16)]
                s0 = next(i for i, v in enumerate(o) if v & 0x80)
                for b in range(6):
                    raw[k] |= (o[s0 + 2 * b] & 0xF) << (4 * b)
        t = [[0, 0], [0, 0]]
        for k in range(4): t[PR[k] - 1][PC[k] - 1] = ((raw[k] & 0xFFFFFF) ^ 0x800000) - 0x800000
        return t
