# MNIST host plan (placeholder)
- Only genuine chip commands go over the pins: LOAD, RUN, DUMP_LOAD/DBG_PSUM, CLEAR.
- Host quantizes to signed int4, tiles matmuls into 2×2 PE steps, applies scale/shift/zp, bias and ReLU, and saturates between layers.
- Golden model first, then silicon. TBD: tiling script and accuracy target.
