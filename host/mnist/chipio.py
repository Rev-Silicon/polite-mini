"""ctypes driver for golden/chip.c. Only genuine opcodes go over the pins (ui_in=data, uio_in=instr)."""
import ctypes, os, subprocess
HERE = os.path.dirname(os.path.abspath(__file__)); ROOT = os.path.join(HERE, "..", "..")
LIB = os.path.join(HERE, "build", "libchip.so")
NOP, LOAD, RUN, DUMP_LOAD, DUMP_STOP, CLEAR, DBG_FLAGS, DBG_PSUM = 0x00, 0x10, 0x20, 0x30, 0x40, 0x50, 0x60, 0x80
PR, PC = [2, 2, 1, 1], [2, 1, 2, 1]  # dump-order index -> (row,col), 1-based

class Chip(ctypes.Structure):
    _fields_ = [("has_outbuf", ctypes.c_int), ("op_place", ctypes.c_int), ("left", ctypes.c_uint8), ("top", ctypes.c_uint8),
                ("last_in", ctypes.c_uint8), ("last_instr", ctypes.c_uint8), ("psum", ctypes.c_int32 * 4), ("mul", ctypes.c_int16 * 4),
                ("ovf", ctypes.c_int), ("illegal", ctypes.c_int), ("run_busy", ctypes.c_int), ("dump_busy", ctypes.c_int),
                ("debug_busy", ctypes.c_int), ("dump_paused", ctypes.c_int), ("outbuf", ctypes.c_int32 * 4), ("dump_idx", ctypes.c_int),
                ("frozen", ctypes.c_int), ("frozen_val", ctypes.c_uint8)]

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
        """psum[r][c] += a2[r]*b2[c]  (a=left/rows, b=top/cols). LOAD order depends on op_place."""
        L, T = pack(*a2), pack(*b2)
        first, second = (T, L) if self.P == 0 else (L, T)
        self.step(first, LOAD); self.step(second, LOAD); self.step(0, RUN); self.step(0, NOP)  # NOP = RUN cycle 2
    def flags(self): return self.step(0, DBG_FLAGS)
    def read_tile(self):
        """2x2 int32 tile [[(1,1),(1,2)],[(2,1),(2,2)]]. cfg A: DUMP_LOAD stream; cfg B: DBG_PSUM bytes."""
        raw = [0] * 4
        if self.A:
            self.step(0, DUMP_LOAD)
            for n in range(24): raw[n // 6] |= (self.step(0, NOP) & 0xF) << (4 * (n % 6))
        else:
            for k in range(4):
                for b in range(3): raw[k] |= self.step(0, DBG_PSUM | k | (b << 2)) << (8 * b)
        t = [[0, 0], [0, 0]]
        for k in range(4): t[PR[k] - 1][PC[k] - 1] = ((raw[k] & 0xFFFFFF) ^ 0x800000) - 0x800000
        return t
