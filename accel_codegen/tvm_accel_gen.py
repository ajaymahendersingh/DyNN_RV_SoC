#!/usr/bin/env python3
"""
tvm_accel_gen.py (v4) — Targets AHBconv_8 hardware (v7 + on-chip requant).

Differences vs v3:
  - For pointwise 1x1 conv layers with simple INT8 clip post-processing
    (i.e., NOT fused h-swish, NOT float output), generate code that:
      * Packs per-OC requant params (bias, scale, shift) into scratchpad.
      * Sets PARAM_OFFSET (0x1C), OUTPUT_ZP (0x20), CTRL = 3 (start | requant_en).
      * After done, reads packed INT8 outputs at 1-byte stride.
    This eliminates the per-OC software requantization loop, which was
    ~80% of accelerated-layer time in v7.
  - Layers with fused h-swish, float output, or dense pack: fall back
    to the v7 path (CTRL = 1, INT32 outputs, software requantization).
    These are NOT covered by HW requant in this version.
  - SPAD_BYTES = 12288 unchanged from v3.

PARAMETER BLOCK LAYOUT (per output channel, 16 bytes):
  word 0 [63:32] = scale[oc]   (INT32 = quant_scale[oc])
  word 0 [31:0]  = bias[oc]    (INT32 = conv_sub[oc] - conv_const[oc] for
                                pointwise pattern A; or conv_const[oc] for
                                pointwise pattern B)
  word 1 [63:32] = reserved (zero)
  word 1 [31:0]  = shift[oc]   (INT32 = quant_shift[oc] + 31)

OUTPUT_ZP register: scalar INT32 added after shift, then clipped to INT8.
                    Extracted from the layer's "+ 31)))) <sign> N" pattern.

Usage: same as v3.

Generated C expects conv_accel.h to provide the v8 helper functions
used by _gen_pointwise_v8 (see conv_accel_v8.h produced with this patch).
"""

import re
import sys
import argparse
import textwrap

# ============================================================
#  Constants
# ============================================================
SPAD_BYTES = 12288      # full v7 BRAM capacity (1536 x 64-bit = 12 KB),
                        # all bus-reachable now that AHBDCD claims
                        # 0x40002000-0x40005FFF (16 KB window).
MAC_BYTES  = 8          # AHBconv_7 inner-loop word width (8 multipliers,
                        # 64-bit BRAM scratchpad). All scratchpad-resident
                        # vectors must be padded to multiples of MAC_BYTES.

def _align(n, m=MAC_BYTES):
    """Round n up to the next multiple of m."""
    return ((n + m - 1) // m) * m

# ============================================================
#  Function parser
# ============================================================
FUNC_RE = re.compile(
    r'(#ifdef __cplusplus\s*\nextern "C"\s*\n#endif\s*\n)?'
    r'(TVM_DLL\s+int32_t\s+(tvmgen_default_\w+)\([^)]+\))\s*\{',
    re.MULTILINE,
)

def parse_functions(source):
    """Return {name: dict with prefix, inner_original, ...} for every TVM function."""
    funcs = {}
    for m in FUNC_RE.finditer(source):
        name = m.group(3)
        sig  = m.group(2)
        guard_start = m.start(1) if m.group(1) else m.start(2)
        brace = source.index('{', m.start(2))
        depth, end = 0, brace
        for i in range(brace, len(source)):
            if source[i] == '{': depth += 1
            elif source[i] == '}':
                depth -= 1
                if depth == 0:
                    end = i + 1
                    break
        prefix = source[guard_start:brace]
        inner_original = source[brace + 1:end - 1]
        funcs[name] = dict(
            guard_start=guard_start, end=end,
            sig=sig, body=source[brace:end],
            prefix=prefix,
            inner_original=inner_original,
        )
    return funcs


# ============================================================
#  Classifier
# ============================================================
def classify(name, body, sig=''):
    if 'hw_multi_dot' in body or 'accel_spad' in body:
        return 'ALREADY_HW'
    if 'DepthwiseConv2d' in body:
        return 'DEPTHWISE_3x3'
    if re.search(r'for \(int32_t (ry|di)\b', body):
        if 'nn_conv2d' in name:
            return 'SPATIAL_3x3'
    if 'nn_conv2d' in name:
        # Exclude fused residual+conv functions (two int8_t* inputs: p0 and p1)
        if 'int8_t* p1' in sig:
            return 'FUSED_RESIDUAL'
        # Batched pointwise: has ff loop over output channels
        if 'for (int32_t rc' in body and 'for (int32_t ff' in body:
            return 'POINTWISE_1x1'
        # Serial pointwise: computes one output channel at a time (ax3 loop)
        if ('for (int32_t rc' in body
            and re.search(r'for \(int32_t ax3\b', body)
            and 'conv2d_nhwc_let)[0]' in body):
            return 'POINTWISE_1x1'
    if 'nn_contrib_dense_pack' in name:
        return 'DENSE'
    return 'OTHER'


# ============================================================
#  Dimension extraction helpers
# ============================================================
def _int(pattern, text, default=None):
    m = re.search(pattern, text)
    if m: return int(m.group(1))
    if default is not None: return default
    raise ValueError(f'Pattern not found: {pattern}')

def _offset(cws, line):
    m = re.search(rf'{re.escape(cws)}\[(\d+)\]', line)
    return int(m.group(1)) if m else None

def _filter_lines(lines, *must_contain, must_not_contain=()):
    return [l for l in lines
            if all(p in l for p in must_contain)
            and all(p not in l for p in must_not_contain)]


# ============================================================
#  Extract requant parameters from a function body
# ============================================================
def extract_requant(body):
    """Extract the requantization zero-point offset.
    
    Handles both scalar shifts (dense: `>> ((int64_t)(8 + 31)))) - 3`)
    and per-channel shifts (pointwise: `>> ((int64_t)(var[ax3] + 31)))) - 15`).
    The key anchor is `+ 31))))` followed by `<sign> <number>`.
    """
    matches = re.findall(
        r'\+\s*31\)\)\)\)\s*([+-]\s*\d+)',
        body,
    )
    if matches:
        raw = matches[-1]
        sign = raw[0]
        num  = raw[1:].strip()
        return f'{sign} {num}'
    return None

def extract_float_requant(body):
    m = re.search(
        r'\(\(\(float\)\('
        r'\(\(v__1\) > \(-128\) \? \(v__1\) : \(-128\)\)'
        r'\s*([+-]\s*\d+)\)\)'
        r'\s*\*\s*([0-9.eE+-]+)f?\)',
        body,
    )
    if not m:
        return None, None
    sign_num = m.group(1)
    sign = sign_num[0]
    num  = sign_num[1:].strip()
    return f'{sign} {num}', m.group(2)

def extract_fpm_shift(body):
    fpm_m = re.search(r'\*\s*\(int64_t\)(\d+)\)', body)
    shift_m = re.search(r'\(\(int64_t\)\(?(\d+)\s*\+\s*31\)', body)
    fpm_val   = int(fpm_m.group(1))   if fpm_m   else None
    shift_val = int(shift_m.group(1)) if shift_m else None
    return fpm_val, shift_val


def extract_hswish(body):
    """Detect and extract fused h-swish activation parameters.

    MobileNetV3 fuses h-swish (x * clip(x+3, 0, 6) / 6) into certain
    conv layers.  In TVM's output this appears as float post-processing
    after the int32 requant step:

        float vA = (float(clip(v) ZP_OFF) * DSCALE) + 3.0f;
        float vB = min(vA, 6.0f);
        float vC = roundf(float(clip(v) ZP_OFF) * DSCALE * max(vB,0) * (1/6) * RSCALE) + OUT_ZP;
        output = clip(vC, -128, 127);

    Returns None if no h-swish, or a dict with the 4 parameters if found.
    """
    if '1.666667e-01f' not in body:
        return None

    m1 = re.search(
        r'\(\(\(float\)\(\(\(v__\d\) > \(-128\) \? \(v__\d\) : \(-128\)\)'
        r'\s*([+-]\s*\d+)\)\)'
        r'\s*\*\s*'
        r'([0-9.eE+-]+)f\)'
        r'\s*\+\s*3\.000000e\+00f',
        body,
    )
    m2 = re.search(
        r'1\.666667e-01f\)'
        r'\s*\*\s*'
        r'([0-9.eE+-]+)f?\)\)'
        r'\s*\+\s*'
        r'(-?[0-9.eE+-]+)f',
        body,
    )
    if not m1 or not m2:
        return None

    return {
        'zp_offset':      m1.group(1).strip(),    # e.g. "- 23" or "+ 18"
        'dequant_scale':  m1.group(2),             # e.g. "1.537300e-01"
        'requant_scale':  m2.group(1),             # e.g. "1.560734e+01"
        'output_zp':      m2.group(2),             # e.g. "-1.220000e+02"
    }


# ============================================================
#  Tiling calculator
# ============================================================
def _reqadd_to_int(reqadd):
    """Convert reqadd string like '- 7' or '+ 5' to integer."""
    parts = reqadd.replace(' ', '')
    if parts[0] == '-':
        return -int(parts[1:])
    elif parts[0] == '+':
        return int(parts[1:])
    return int(parts)


def compute_tile_size(in_ch, total_out):
    # Reduction length must be aligned to MAC_BYTES (8) for AHBconv_7.
    # Each output is 4 bytes (INT32 result).
    k_aligned = _align(in_ch)
    max_tile = (SPAD_BYTES - k_aligned) // (k_aligned + 4)
    # Candidates ordered largest-first. Larger sizes added (vs v2) to
    # exploit the 12 KB SPAD; otherwise layers like 72->432 stayed
    # capped at tile=64 even though tile=144 fits.
    candidates = [total_out, 256, 192, 128, 96, 64, 32, 16, 8, 4]
    for c in candidates:
        if c <= max_tile and c <= total_out:
            return c
    return max(1, max_tile)


def compute_tile_size_v8(in_ch, total_out):
    """Tile size for v8 hardware-requant pointwise. Per-OC scratchpad
    cost = rc_aligned (weight) + 16 (param block) + 4 (worst-case INT32
    output area, overwritten with packed INT8 later). Plus rc_aligned
    for the input vector.
    """
    k_aligned = _align(in_ch)
    max_tile = (SPAD_BYTES - k_aligned) // (k_aligned + 16 + 4)
    candidates = [total_out, 256, 192, 128, 96, 64, 32, 16, 8, 4]
    for c in candidates:
        if c <= max_tile and c <= total_out:
            return c
    return max(1, max_tile)


# ============================================================
#  Code generators — NOW RETURN ONLY THE INNER BODY
# ============================================================

def gen_pointwise(name, sig, body):
    """Accelerated 1×1 conv2d (inner code only).
    
    Robust extraction: parses the actual void* declarations and requant
    expression rather than relying on specific TVM naming conventions.
    """
    args  = sig[sig.index('(')+1 : sig.index(')')]
    cws   = re.search(r'(global_const_workspace_\d+_var)', args).group(1)
    lines = body.split('\n')

    rc_ch   = _int(r'for \(int32_t rc = 0; rc < (\d+)', body)

    ff_m = re.search(r'for \(int32_t ff = 0; ff < (\d+)', body)
    if ff_m:
        ff_tile = int(ff_m.group(1))
        n_outer = _int(r'for \(int32_t ax3_outer = 0; ax3_outer < (\d+)', body, default=1)
        total_out = ff_tile * n_outer
    else:
        total_out = _int(r'for \(int32_t ax3 = 0; ax3 < (\d+)', body)
        n_outer = 1

    n_pixels = _int(r'for \(int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < (\d+)', body)

    # ---- Robust offset extraction ----
    # Parse ALL void* let declarations → list of (var_name, offset)
    let_decls = []
    for line in lines:
        m = re.match(r'\s*void\*\s+(\w+)\s*=\s*\(&\(' + re.escape(cws) + r'\[(\d+)\]\)\);', line)
        if m:
            let_decls.append((m.group(1), int(m.group(2))))

    # Identify weights: the constant used in the inner rc multiplication
    # Pattern: ((int8_t*)VARNAME)[((... * total_out ...) + ...)]
    weight_var = None
    for vname, voff in let_decls:
        if vname in body and f'(int8_t*){vname})' in body.replace(' ', ''):
            # Check if it's used in the rc multiplication context
            if f'{vname})' in body and 'rc' in body[body.index(f'{vname}'):body.index(f'{vname}')+200]:
                weight_var = vname
                weight_off = voff
                break
    if weight_var is None:
        # Fallback: last let before pad_temp
        for vname, voff in reversed(let_decls):
            if 'pad_temp' not in vname and 'conv2d_nhwc' not in vname:
                weight_var = vname
                weight_off = voff
                break

    # Identify the requant expression structure
    # Two patterns:
    #   A) (dot + sub[ax3]) - const[ax3]  → has both subtract_constant and plain constant
    #   B) dot + const[ax3]                → has only plain constant (no subtract)
    # Detect by checking if the requant line has a subtraction after the first addition
    requant_line = ''
    for line in lines:
        if '+ 31) - 1)' in line and '>>' in line:
            requant_line = line
            break

    # Extract the variable names used in the requant expression
    # Pattern A: ((dot + VAR_SUB[ax3]) - VAR_CONST[ax3]) * VAR_SCALE[ax3]
    # Pattern B: (dot + VAR_CONST[ax3]) * VAR_SCALE[ax3]
    has_subtract = False
    conv_sub_off = None
    conv_const_off = None
    shift_off = None
    fpm_off = None

    # Find the 3 quantization parameter arrays (shift, scale_mid, fpm)
    # They are the first 3 void* declarations that contain 'add_constant' or similar
    quant_vars = []
    bias_vars = []
    for vname, voff in let_decls:
        if 'pad_temp' in vname or 'conv2d_nhwc' in vname or vname == weight_var:
            continue
        if ('subtract_add_constant' in vname or
            ('add_constant' in vname and 'subtract' not in vname)):
            quant_vars.append((vname, voff))
        elif 'subtract_constant' in vname and 'add' not in vname:
            bias_vars.append((vname, voff))
            has_subtract = True
        elif 'constant' in vname and 'subtract' not in vname and 'add' not in vname:
            bias_vars.append((vname, voff))

    if len(quant_vars) >= 3:
        shift_off = quant_vars[0][1]
        fpm_off = quant_vars[2][1]
    else:
        raise ValueError(f'Could not find 3 quant params for {name} (found {len(quant_vars)})')

    # Determine bias structure from let declarations
    if has_subtract:
        # Pattern A: (dot + sub - const)
        sub_candidates = [v for v in bias_vars if 'subtract' in v[0]]
        const_candidates = [v for v in bias_vars if 'subtract' not in v[0]]
        if sub_candidates:
            conv_sub_off = sub_candidates[0][1]
        if const_candidates:
            conv_const_off = const_candidates[0][1]
        requant_expr = '(dot + conv_sub[ax3]) - conv_const[ax3]'
        bias_decl = f'''  int32_t* conv_const  = (int32_t*)(&{cws}[{conv_const_off}]);
  int32_t* conv_sub    = (int32_t*)(&{cws}[{conv_sub_off}]);'''
    else:
        # Pattern B: (dot + const) — no subtract
        if bias_vars:
            conv_const_off = bias_vars[0][1]
        requant_expr = 'dot + conv_const[ax3]'
        bias_decl = f'  int32_t* conv_const  = (int32_t*)(&{cws}[{conv_const_off}]);'

    # Extract zero-point
    reqadd = extract_requant(body)
    if reqadd is None:
        raise ValueError(f'Could not extract zero-point for {name}')

    # Detect fused h-swish activation (MobileNetV3)
    hswish = extract_hswish(body)

    # Determine output type AND variable name from the function signature.
    is_int8 = bool(re.search(r'\bint8_t\*\s*(?:T_cast|compute)\b', sig))
    if 'T_cast' in sig:
        out_var = 'T_cast'
    else:
        out_var = 'compute'
    out_cast = '(int8_t)' if is_int8 else '(int32_t)'

    # v8 eligibility: HW-side requant requires INT8 output, simple clip
    # post-processing (no h-swish), and a layer where bias/scale/shift
    # are well-defined per OC. Float-output and h-swish layers fall back
    # to the v7 path.
    v8_eligible = is_int8 and (hswish is None)

    if v8_eligible:
        return _gen_pointwise_v8(name, sig, body, rc_ch, total_out, n_pixels,
                                 cws, weight_off, shift_off, fpm_off,
                                 has_subtract, conv_sub_off, conv_const_off,
                                 reqadd, out_var)

    # ---- v7 fallback path (h-swish, float, etc.) ----------------------
    tile_size = compute_tile_size(rc_ch, total_out)
    n_tiles   = (total_out + tile_size - 1) // tile_size
    rc_aligned = _align(rc_ch)            # padded reduction length
    inp_spad  = 0
    wt_spad   = rc_aligned
    out_spad  = wt_spad + tile_size * rc_aligned

    # Generate per-output-channel post-processing
    if hswish:
        # Fused h-swish: requant → clip → dequant → h-swish → re-quantize → int8
        zp   = hswish['zp_offset']        # e.g. "- 23"
        ds   = hswish['dequant_scale']     # e.g. "1.537300e-01"
        rs   = hswish['requant_scale']     # e.g. "1.560734e+01"
        ozp  = hswish['output_zp']         # e.g. "-1.220000e+02"
        post_requant = f'''int32_t v1 = (v_) < (127) ? (v_) : (127);
        float _dq = (float)(((v1) > (-128) ? (v1) : (-128)) {zp}) * {ds}f;
        float _hs_in = (_dq + 3.0f) < (6.0f) ? (_dq + 3.0f) : (6.0f);
        float _hs = roundf((_dq * ((_hs_in) > (0.0f) ? (_hs_in) : (0.0f)) * 1.666667e-01f) * {rs}f) + {ozp}f;
        float _hc = (_hs) < (1.270000e+02f) ? (_hs) : (1.270000e+02f);
        {out_var}[(sp * {total_out}) + ax3] = {out_cast}((_hc) > (-1.280000e+02f) ? (_hc) : (-1.280000e+02f));'''
        hswish_note = ' [with fused h-swish]'
    else:
        # Simple: requant → clip → int8
        post_requant = f'''int32_t v1 = (v_) < (127) ? (v_) : (127);
        {out_var}[(sp * {total_out}) + ax3] = {out_cast}((v1) > (-128) ? (v1) : (-128));'''
        hswish_note = ''

    pad_init  = (f'\n  for (int32_t _i = {rc_ch}; _i < {rc_aligned}; _i++) _inp_pad[_i] = 0;'
                 if rc_aligned > rc_ch else '')
    pad_wt    = (f'\n      for (int32_t rc = {rc_ch}; rc < {rc_aligned}; rc++)\n        rw[oc * {rc_aligned} + rc] = 0;'
                 if rc_aligned > rc_ch else '')

    # When K is already MAC-aligned, skip the staging buffer entirely.
    # Writing &_inp[sp*K] directly into AHB saves K byte-copies per
    # spatial position. Only when K needs padding do we need the
    # intermediate buffer (so we can zero-fill the tail bytes).
    if rc_aligned > rc_ch:
        inp_pad_decl = f'\n  // Padded staging buffer for one input vector (aligned to MAC_BYTES = {MAC_BYTES})\n  static int8_t _inp_pad[{rc_aligned}];{pad_init}'
        inp_stage_emit = f'''      for (int32_t _i = 0; _i < {rc_ch}; _i++)
        _inp_pad[_i] = _inp[sp * {rc_ch} + _i];
      accel_spad_write(0x{inp_spad:03X}, _inp_pad, {rc_aligned});'''
    else:
        inp_pad_decl = ''
        inp_stage_emit = f'      accel_spad_write(0x{inp_spad:03X}, &_inp[sp * {rc_ch}], {rc_ch});'

    return f'''  // [ACCELERATED] 1x1 conv: {rc_ch}->{total_out} channels, {n_pixels} spatial positions{hswish_note}
  int32_t* quant_shift = (int32_t*)(&{cws}[{shift_off}]);
  int32_t* quant_scale = (int32_t*)(&{cws}[{fpm_off}]);
{bias_decl}
  int8_t*  weights     = (int8_t*) (&{cws}[{weight_off}]);

  // Safe copy: TVM may alias input/output workspace buffers
  static int8_t _inp[{rc_ch * n_pixels}];
  for (int32_t _i = 0; _i < {rc_ch * n_pixels}; _i++) _inp[_i] = p0[_i];{inp_pad_decl}

  for (int32_t tile = 0; tile < {n_tiles}; tile++) {{
    int32_t oc_base = tile * {tile_size};
    int32_t oc_count = {tile_size};
    if (oc_base + oc_count > {total_out}) oc_count = {total_out} - oc_base;
    static int8_t rw[{tile_size * rc_aligned}];
    for (int32_t oc = 0; oc < oc_count; oc++) {{
      for (int32_t rc = 0; rc < {rc_ch}; rc++)
        rw[oc * {rc_aligned} + rc] = weights[rc * {total_out} + oc_base + oc];{pad_wt}
    }}
    accel_spad_write(0x{wt_spad:03X}, rw, oc_count * {rc_aligned});
    for (int32_t sp = 0; sp < {n_pixels}; sp++) {{
{inp_stage_emit}
      hw_multi_dot(0x{inp_spad:03X}, 0x{wt_spad:03X}, 0x{out_spad:03X}, {rc_aligned}, oc_count);
      for (int32_t oc = 0; oc < oc_count; oc++) {{
        int32_t ax3 = oc_base + oc;
        int32_t dot = (int32_t)accel_spad_read32(0x{out_spad:03X} + oc * 4);
        int32_t v_ = ((int32_t)(((((int64_t)({requant_expr}))
          * ((int64_t)quant_scale[ax3]))
          + ((int64_t)1 << ((int64_t)((quant_shift[ax3] + 31) - 1))))
          >> ((int64_t)(quant_shift[ax3] + 31)))) {reqadd};
        {post_requant}
      }}
    }}
  }}
  return 0;
'''


def _gen_pointwise_v8(name, sig, body, rc_ch, total_out, n_pixels,
                       cws, weight_off, shift_off, fpm_off,
                       has_subtract, conv_sub_off, conv_const_off,
                       reqadd, out_var):
    """Emit v8/AHBconv_8 pointwise code with HW requant.

    Keep the generated C at the same abstraction level as v3:
      - scratchpad accesses still use accel_spad_write/read helpers;
      - v8-specific register programming is hidden behind conv_accel.h
        helpers (accel_set_output_zp, hw_multi_dot_requant);
      - avoid the redundant input staging copy when K is already aligned
        to MAC_BYTES.

    Required helper additions in conv_accel.h:
      - ACCEL_PARAM_OFF      at ACCEL_BASE + 0x1C
      - ACCEL_OUTPUT_ZP      at ACCEL_BASE + 0x20
      - accel_set_output_zp(int32_t)
      - hw_multi_dot_requant(input_off, weight_off, output_off,
                             param_off, length, num_products)
      - accel_unpack_i8_outputs(dst, output_off, count)
    """
    tile_size  = compute_tile_size_v8(rc_ch, total_out)
    n_tiles    = (total_out + tile_size - 1) // tile_size
    rc_aligned = _align(rc_ch)

    # Scratchpad layout for each tile.
    inp_spad   = 0
    wt_spad    = rc_aligned
    out_spad   = wt_spad + tile_size * rc_aligned          # packed INT8 outputs in v8 mode
    # Param block aligned to 8 bytes (start of a 64-bit word)
    param_spad = (out_spad + tile_size * 4 + 7) & ~7

    # Convert reqadd ('- 7' or '+ 5') to a signed integer for OUTPUT_ZP
    output_zp = _reqadd_to_int(reqadd)

    # Bias expression depends on whether the layer has conv_sub or not.
    # The HW computes (dot + bias) * scale, so:
    #   pattern A (with subtract): bias[oc] = conv_sub[oc] - conv_const[oc]
    #   pattern B (without):       bias[oc] = +conv_const[oc]
    if has_subtract:
        bias_decl = f'''  int32_t* conv_const  = (int32_t*)(&{cws}[{conv_const_off}]);
  int32_t* conv_sub    = (int32_t*)(&{cws}[{conv_sub_off}]);'''
        bias_expr = 'conv_sub[ax3] - conv_const[ax3]'
    else:
        bias_decl = f'  int32_t* conv_const  = (int32_t*)(&{cws}[{conv_const_off}]);'
        bias_expr = 'conv_const[ax3]'

    pad_wt = (f'\n      for (int32_t rc = {rc_ch}; rc < {rc_aligned}; rc++)\n        rw[oc * {rc_aligned} + rc] = 0;'
              if rc_aligned > rc_ch else '')

    # Match the v3_NN policy: if K is already aligned, write input directly
    # from the safe alias copy. Only allocate/use _inp_pad when padding is
    # actually required.
    if rc_aligned > rc_ch:
        inp_pad_decl = f'''\n  // Padded staging buffer for one input vector (aligned to MAC_BYTES = {MAC_BYTES})
  static int8_t _inp_pad[{rc_aligned}];
  for (int32_t _i = {rc_ch}; _i < {rc_aligned}; _i++) _inp_pad[_i] = 0;'''
        inp_stage_emit = f'''      for (int32_t _i = 0; _i < {rc_ch}; _i++)
        _inp_pad[_i] = _inp[sp * {rc_ch} + _i];
      accel_spad_write(0x{inp_spad:03X}, _inp_pad, {rc_aligned});'''
    else:
        inp_pad_decl = ''
        inp_stage_emit = f'      accel_spad_write(0x{inp_spad:03X}, &_inp[sp * {rc_ch}], {rc_ch});'

    return f'''  // [ACCELERATED v8 HW-REQUANT] 1x1 conv: {rc_ch}->{total_out} channels, {n_pixels} spatial positions
  int32_t* quant_shift = (int32_t*)(&{cws}[{shift_off}]);
  int32_t* quant_scale = (int32_t*)(&{cws}[{fpm_off}]);
{bias_decl}
  int8_t*  weights     = (int8_t*) (&{cws}[{weight_off}]);

  // Safe copy: TVM may alias input/output workspace buffers
  static int8_t _inp[{rc_ch * n_pixels}];
  for (int32_t _i = 0; _i < {rc_ch * n_pixels}; _i++) _inp[_i] = p0[_i];{inp_pad_decl}

  // Set per-layer zero-point once. The helper is provided by conv_accel.h.
  accel_set_output_zp({output_zp});

  for (int32_t tile = 0; tile < {n_tiles}; tile++) {{
    int32_t oc_base = tile * {tile_size};
    int32_t oc_count = {tile_size};
    if (oc_base + oc_count > {total_out}) oc_count = {total_out} - oc_base;

    // Pack weights for this tile (relayout from [rc][oc] to [oc][rc])
    static int8_t rw[{tile_size * rc_aligned}];
    for (int32_t oc = 0; oc < oc_count; oc++) {{
      for (int32_t rc = 0; rc < {rc_ch}; rc++)
        rw[oc * {rc_aligned} + rc] = weights[rc * {total_out} + oc_base + oc];{pad_wt}
    }}
    accel_spad_write(0x{wt_spad:03X}, rw, oc_count * {rc_aligned});

    // Pack params for this tile: 16 bytes per OC.
    //   word 0: scale (high 32) and bias (low 32)
    //   word 1: zero  (high 32) and shift (low 32)
    static int32_t params[{tile_size} * 4];
    for (int32_t oc = 0; oc < oc_count; oc++) {{
      int32_t ax3 = oc_base + oc;
      params[oc*4 + 0] = ({bias_expr});         // bias
      params[oc*4 + 1] = quant_scale[ax3];      // scale
      params[oc*4 + 2] = quant_shift[ax3] + 31; // shift
      params[oc*4 + 3] = 0;                     // reserved
    }}
    accel_spad_write(0x{param_spad:03X}, (int8_t*)params, oc_count * 16);

    for (int32_t sp = 0; sp < {n_pixels}; sp++) {{
{inp_stage_emit}
      hw_multi_dot_requant(0x{inp_spad:03X}, 0x{wt_spad:03X}, 0x{out_spad:03X},
                           0x{param_spad:03X}, {rc_aligned}, oc_count);
      accel_unpack_i8_outputs(&{out_var}[(sp * {total_out}) + oc_base],
                              0x{out_spad:03X}, oc_count);
    }}
  }}
  return 0;
'''


def gen_dense(name, sig, body):
    """Accelerated dense / nn_contrib_dense_pack (inner code only)."""
    args  = sig[sig.index('(')+1 : sig.index(')')]
    cws   = re.search(r'(global_const_workspace_\d+_var)', args).group(1)
    lines = body.split('\n')

    is_float = 'float* T_multiply' in sig
    out_var  = 'T_multiply' if is_float else 'T_cast'

    k_outer   = _int(r'for \(int32_t k_outer = 0; k_outer < (\d+)', body)
    x_c       = _int(r'for \(int32_t x_c = 0; x_c < (\d+)', body)
    n_outer   = _int(r'for \(int32_t ax1_outer_ax0_outer_fused = 0; ax1_outer_ax0_outer_fused < (\d+)', body)
    n_y_inner = _int(r'for \(int32_t y_inner_outer_x_inner_outer_fused = 0; y_inner_outer_x_inner_outer_fused < (\d+)', body, default=1)
    total_out = n_outer * n_y_inner * x_c
    in_ch     = k_outer

    wt_l = _filter_lines(lines, 'fused_constant_', 'let', cws, must_not_contain=('nn_contrib',))
    weight_off = _offset(cws, wt_l[0])
    const_l = _filter_lines(lines, '_pack_constant_', 'let', cws, must_not_contain=('_subtract',))
    sub_l   = _filter_lines(lines, '_pack_subtract_constant_', 'let', cws)
    conv_const_off = _offset(cws, const_l[0])
    conv_sub_off   = _offset(cws, sub_l[0])

    fpm_val, shift_val = extract_fpm_shift(body)
    reqadd = extract_requant(body)
    if reqadd is None:
        raise ValueError(f'Could not extract reqadd for {name}')

    float_int_off, float_scale = (None, None)
    if is_float:
        float_int_off, float_scale = extract_float_requant(body)
        if float_int_off is None:
            raise ValueError(f'Could not extract float requant for {name}')

    outer_stride  = n_y_inner * k_outer * x_c
    yinner_stride = k_outer * x_c
    oc_divisor    = n_y_inner * x_c

    if in_ch > 512:
        return _gen_dense_large_k_inner(
            sig, cws, in_ch, total_out, n_outer, n_y_inner, x_c,
            k_outer, weight_off, conv_const_off, conv_sub_off,
            outer_stride, yinner_stride, oc_divisor,
            fpm_val, shift_val, reqadd,
            is_float, float_int_off, float_scale, out_var,
        )

    tile_size = compute_tile_size(in_ch, total_out)
    n_tiles   = (total_out + tile_size - 1) // tile_size
    k_aligned = _align(in_ch)
    inp_spad  = 0
    wt_spad   = k_aligned
    out_spad  = wt_spad + tile_size * k_aligned

    if is_float:
        out_line = f'      {out_var}[ax3] = (((float)(((v1) > (-128) ? (v1) : (-128)) {float_int_off})) * {float_scale}f);'
    else:
        out_line = f'      {out_var}[ax3] = (int8_t)((v1) > (-128) ? (v1) : (-128));'

    pad_inp_dense = (f'\n  for (int32_t k = {in_ch}; k < {k_aligned}; k++) _inp_pad[k] = 0;'
                     if k_aligned > in_ch else '')
    pad_wt_dense  = (f'\n      for (int32_t k = {in_ch}; k < {k_aligned}; k++)\n        rw[oc * {k_aligned} + k] = 0;'
                     if k_aligned > in_ch else '')

    return f'''  // [ACCELERATED] dense: {in_ch}->{total_out} (packed [{n_outer}][{n_y_inner}][{k_outer}][{x_c}])
  int32_t* conv_const = (int32_t*)(&{cws}[{conv_const_off}]);
  int32_t* conv_sub   = (int32_t*)(&{cws}[{conv_sub_off}]);
  int8_t*  weights    = (int8_t*) (&{cws}[{weight_off}]);

  // Padded input vector (aligned to MAC_BYTES)
  static int8_t _inp_pad[{k_aligned}];
  for (int32_t k = 0; k < {in_ch}; k++) _inp_pad[k] = p0[k];{pad_inp_dense}

  for (int32_t tile = 0; tile < {n_tiles}; tile++) {{
    int32_t oc_base = tile * {tile_size};
    int32_t oc_count = {tile_size};
    if (oc_base + oc_count > {total_out}) oc_count = {total_out} - oc_base;
    static int8_t rw[{tile_size * k_aligned}];
    for (int32_t oc = 0; oc < oc_count; oc++) {{
      int32_t goc = oc_base + oc;
      int32_t ax1 = goc / {oc_divisor};
      int32_t yi  = (goc % {oc_divisor}) / {x_c};
      int32_t xc  = goc % {x_c};
      for (int32_t k = 0; k < {in_ch}; k++)
        rw[oc * {k_aligned} + k] = weights[ax1 * {outer_stride} + yi * {yinner_stride} + k * {x_c} + xc];{pad_wt_dense}
    }}
    accel_spad_write(0x{wt_spad:03X}, rw, oc_count * {k_aligned});
    accel_spad_write(0x{inp_spad:03X}, _inp_pad, {k_aligned});
    hw_multi_dot(0x{inp_spad:03X}, 0x{wt_spad:03X}, 0x{out_spad:03X}, {k_aligned}, oc_count);
    for (int32_t oc = 0; oc < oc_count; oc++) {{
      int32_t ax3 = oc_base + oc;
      int32_t dot = (int32_t)accel_spad_read32(0x{out_spad:03X} + oc * 4);
      int32_t v_ = ((int32_t)(((((int64_t)((dot + conv_sub[ax3]) - conv_const[ax3]))
        * (int64_t){fpm_val}) + ((int64_t)1 << ((int64_t)(({shift_val} + 31) - 1))))
        >> ((int64_t)({shift_val} + 31)))) {reqadd};
      int32_t v1 = (v_) < (127) ? (v_) : (127);
{out_line}
    }}
  }}
  return 0;
'''


def _gen_dense_large_k_inner(
    sig, cws, in_ch, total_out, n_outer, n_y_inner, x_c,
    k_outer, weight_off, conv_const_off, conv_sub_off,
    outer_stride, yinner_stride, oc_divisor,
    fpm_val, shift_val, reqadd,
    is_float, float_int_off, float_scale, out_var,
):
    """Dense with reduction-dimension tiling (inner code only).
    chunk is the byte stride of one (padded) weight row; by construction
    a power of 2, so always a multiple of MAC_BYTES = 8.
    """
    chunk = 512
    while chunk * (total_out + 1) + total_out * 4 > SPAD_BYTES:
        chunk //= 2
    if chunk < MAC_BYTES:
        raise RuntimeError(
            f'Large-K dense layer ({in_ch}->{total_out}) cannot fit '
            f'a single MAC_BYTES-aligned chunk in {SPAD_BYTES} bytes; '
            f'reduce total_out or increase scratchpad capacity.')
    n_chunks = (in_ch + chunk - 1) // chunk

    if is_float:
        out_line = f'    {out_var}[ax3] = (((float)(((v1) > (-128) ? (v1) : (-128)) {float_int_off})) * {float_scale}f);'
    else:
        out_line = f'    {out_var}[ax3] = (int8_t)((v1) > (-128) ? (v1) : (-128));'

    return f'''  // [ACCELERATED] dense: {in_ch}->{total_out} with reduction tiling (chunk={chunk})
  int32_t* conv_const = (int32_t*)(&{cws}[{conv_const_off}]);
  int32_t* conv_sub   = (int32_t*)(&{cws}[{conv_sub_off}]);
  int8_t*  weights    = (int8_t*) (&{cws}[{weight_off}]);
  int32_t partial[{total_out}];
  for (int32_t oc = 0; oc < {total_out}; oc++) partial[oc] = 0;
  for (int32_t chunk = 0; chunk < {n_chunks}; chunk++) {{
    int32_t k_start = chunk * {chunk};
    int32_t k_len = {chunk};
    if (k_start + k_len > {in_ch}) k_len = {in_ch} - k_start;
    int32_t k_aligned = (k_len + 7) & ~7;
    static int8_t rw[{total_out * chunk}];
    for (int32_t oc = 0; oc < {total_out}; oc++) {{
      int32_t ax1 = oc / {oc_divisor};
      int32_t yi  = (oc % {oc_divisor}) / {x_c};
      int32_t xc  = oc % {x_c};
      for (int32_t k = 0; k < k_len; k++)
        rw[oc * k_aligned + k] = weights[ax1 * {outer_stride} + yi * {yinner_stride} + (k_start + k) * {x_c} + xc];
      for (int32_t k = k_len; k < k_aligned; k++)
        rw[oc * k_aligned + k] = 0;
    }}
    static int8_t inp[{chunk}];
    for (int32_t k = 0; k < k_len; k++) inp[k] = p0[k_start + k];
    for (int32_t k = k_len; k < k_aligned; k++) inp[k] = 0;
    accel_spad_write(0x000, inp, k_aligned);
    uint32_t wt_off = (uint32_t)((k_aligned + 7) & ~7);
    accel_spad_write(wt_off, rw, {total_out} * k_aligned);
    uint32_t out_off = wt_off + {total_out} * k_aligned;
    hw_multi_dot(0x000, wt_off, out_off, k_aligned, {total_out});
    for (int32_t oc = 0; oc < {total_out}; oc++)
      partial[oc] += (int32_t)accel_spad_read32(out_off + oc * 4);
  }}
  for (int32_t ax3 = 0; ax3 < {total_out}; ax3++) {{
    int32_t v_ = ((int32_t)(((((int64_t)((partial[ax3] + conv_sub[ax3]) - conv_const[ax3]))
      * (int64_t){fpm_val}) + ((int64_t)1 << ((int64_t)(({shift_val} + 31) - 1))))
      >> ((int64_t)({shift_val} + 31)))) {reqadd};
    int32_t v1 = (v_) < (127) ? (v_) : (127);
{out_line}
  }}
  return 0;
'''


# ============================================================
#  Main driver
# ============================================================
GENERATORS = {
    'POINTWISE_1x1': gen_pointwise,
    'DENSE':         gen_dense,
}

def short_name(name):
    s = name.replace('tvmgen_default_fused_', '')
    if len(s) > 60:
        s = '...' + s[-57:]
    return s


def main():
    parser = argparse.ArgumentParser(description='Accelerate TVM C functions for AHBconv_8 with helper-based HW requant')
    parser.add_argument('input', help='Input baseline .c file')
    parser.add_argument('-o', '--output', help='Output .c file (default: <input>_accel.c)')
    args = parser.parse_args()

    if not args.output:
        base = args.input.rsplit('.', 1)[0]
        args.output = base + '_accel.c'

    with open(args.input) as f:
        source = f.read()

    funcs = parse_functions(source)
    print(f'\nParsed {len(funcs)} TVM functions.\n')

    # ---- Classify ----
    by_class = {}
    for name, info in funcs.items():
        cls = classify(name, info['body'], info['sig'])
        by_class.setdefault(cls, []).append(name)

    # ---- Summary ----
    print('=' * 70)
    print('  FUNCTION CLASSIFICATION SUMMARY')
    print('=' * 70)
    accel_classes = []
    for cls in ['ALREADY_HW', 'POINTWISE_1x1', 'DENSE', 'FUSED_RESIDUAL', 'SPATIAL_3x3', 'DEPTHWISE_3x3', 'OTHER']:
        names = by_class.get(cls, [])
        if not names:
            continue
        tag = '  [can accelerate]' if cls in GENERATORS else ''
        if cls == 'ALREADY_HW':
            tag = '  [already uses hw]'
        print(f'\n  {cls} ({len(names)} functions){tag}')
        for n in sorted(names):
            info = funcs[n]
            body = info['body']
            extra = ''
            if cls == 'POINTWISE_1x1':
                rc = _int(r'for \(int32_t rc = 0; rc < (\d+)', body, 0)
                ff = _int(r'for \(int32_t ff = 0; ff < (\d+)', body, 0)
                if ff == 0:
                    ff = _int(r'for \(int32_t ax3 = 0; ax3 < (\d+)', body, 0)
                no = _int(r'for \(int32_t ax3_outer = 0; ax3_outer < (\d+)', body, 1)
                px = _int(r'for \(int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < (\d+)', body, 0)
                hs = ' [h-swish]' if extract_hswish(body) else ''
                extra = f'  ({rc}->{ff*no}ch, {px}px){hs}'
            elif cls == 'DENSE':
                k = _int(r'for \(int32_t k_outer = 0; k_outer < (\d+)', body, 0)
                xc = _int(r'for \(int32_t x_c = 0; x_c < (\d+)', body, 0)
                no = _int(r'for \(int32_t ax1_outer_ax0_outer_fused = 0; ax1_outer_ax0_outer_fused < (\d+)', body, 1)
                yi = _int(r'for \(int32_t y_inner_outer_x_inner_outer_fused = 0; y_inner_outer_x_inner_outer_fused < (\d+)', body, 1)
                flt = ' [float]' if 'float* T_multiply' in info['sig'] else ''
                extra = f'  ({k}->{no*yi*xc}){flt}'
            print(f'    {short_name(n)}{extra}')
        if cls in GENERATORS:
            accel_classes.append(cls)

    if not accel_classes:
        print('\nNo functions available for acceleration.')
        sys.exit(0)

    # ---- User selection ----
    print('\n' + '=' * 70)
    print('  SELECT FUNCTIONS TO ACCELERATE')
    print('=' * 70)
    enabled = {}
    for cls in accel_classes:
        names = by_class[cls]
        count = len(names)
        while True:
            choice = input(f'\n  Accelerate {cls} ({count} functions)? [Y/n/list]: ').strip().lower()
            if choice in ('', 'y', 'yes'):
                enabled[cls] = set(names)
                print(f'    → All {count} {cls} functions will be accelerated.')
                break
            elif choice in ('n', 'no'):
                print(f'    → Skipping {cls}.')
                break
            elif choice in ('l', 'list'):
                print(f'    Select individually (y/n for each):')
                selected = set()
                for n in sorted(names):
                    yn = input(f'      {short_name(n)}? [Y/n]: ').strip().lower()
                    if yn in ('', 'y', 'yes'):
                        selected.add(n)
                enabled[cls] = selected
                print(f'    → {len(selected)}/{count} selected.')
                break

    total_selected = sum(len(v) for v in enabled.values())
    if total_selected == 0:
        print('\nNo functions selected. Output will be identical to input.')
        with open(args.output, 'w') as f:
            f.write(source)
        sys.exit(0)

    # ---- Generate replacements (wrapped with #ifdef INCLUDE_ACCEL) ----
    print(f'\n{"=" * 70}')
    print(f'  GENERATING ACCELERATED CODE ({total_selected} functions)')
    print(f'{"=" * 70}')

    replacements = {}
    errors = []

    for cls, names in enabled.items():
        gen_fn = GENERATORS[cls]
        for name in sorted(names):
            info = funcs[name]
            try:
                accel_inner = gen_fn(name, info['sig'], info['body'])
                wrapped = f'''{info["prefix"]}{{
#ifdef INCLUDE_ACCEL
{accel_inner}
#else
{info["inner_original"]}
#endif
}}'''
                replacements[(info['guard_start'], info['end'])] = wrapped
                print(f'  ✓ {short_name(name)}')
            except Exception as e:
                errors.append((name, str(e)))
                print(f'  ✗ {short_name(name)}: {e}')

    if errors:
        print(f'\n  {len(errors)} function(s) failed — left as original.')

    # ---- Apply replacements ----
    result = source
    for (start, end), new_code in sorted(replacements.items(), reverse=True):
        result = result[:start] + new_code + result[end:]

    with open(args.output, 'w') as f:
        f.write(result)

    # ---- Verify ----
    n_hw = result.count('hw_multi_dot')
    n_accel = result.count('[ACCELERATED')
    depth = 0
    for ch in result:
        if ch == '{': depth += 1
        elif ch == '}': depth -= 1

    print(f'\n{"=" * 70}')
    print(f'  OUTPUT: {args.output}')
    print(f'  Accelerated functions:  {n_accel}')
    print(f'  hw_multi_dot calls:     {n_hw}')
    print(f'  Brace balance:          {depth} {"✓" if depth == 0 else "✗ MISMATCH"}')
    print(f'{"=" * 70}\n')

    if depth != 0:
        print('WARNING: Brace mismatch detected — output may have syntax errors.')
        sys.exit(1)


if __name__ == '__main__':
    main()
