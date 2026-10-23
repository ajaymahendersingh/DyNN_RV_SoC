"""Dual-core partition of the TVM AOT C code: BB core (backbone) and EE core (exit heads).

    python split_dual_core.py <lib0.c> <lib1.c> <out dir> [--no-accel]     -> <out>/{BB,EE}/default_lib{0,1}.c

<lib1.c> is the default_lib1.c of the TVM model library, after accel_codegen/tvm_accel_gen.py for configurations with
the accelerator; --no-accel for configurations without it (INCLUDE_ACCEL off in the BB code).
"""
import re, sys
from pathlib import Path

MAIN = "TVM_DLL int32_t tvmgen_default___tvm_main__("
CALL = re.compile(r"^(\s*)if \((tvmgen_default_\w+)\(([^)]*)\) != 0 \) return -1;\s*$")
DECL = re.compile(r"^\s*void\* (sid_\d+_let) = \(&\(global_workspace_1_var\[(\d+)\]\)\);\s*$")
HEAD_BB = "//#define DUMP_OUTPUTS\n#define INCLUDE_ACCEL\n#include \"config.h\"\n#include \"clock_ctrl.h\"\n" \
          "#ifdef INCLUDE_ACCEL\n#include \"conv_accel.h\"\n#endif\n"
HEAD_BB_NO_ACCEL = HEAD_BB.replace("#define INCLUDE_ACCEL", "//#define INCLUDE_ACCEL")
HEAD_EE = "//#define DUMP_OUTPUTS\n//#define INCLUDE_ACCEL\n#include \"config.h\"\n#include \"clock_ctrl.h\"\n" \
          "//#include \"conv_accel.h\"\n"


def main_span(src):
    i = src.index(MAIN, src.index(MAIN) + 1)
    j = src.index("\n}\n", i)
    return src.index("{", i) + 1, j


def parse(body):
    lines = body.split("\n")
    calls = []
    for n, l in enumerate(lines):
        m = CALL.match(l)
        if m:
            args = [a.strip() for a in m.group(3).split(",")]
            data = args[:-2]
            calls.append(dict(line=n, fn=m.group(2), ins=data[:-1], out=data[-1]))
    return lines, calls


def partition(calls):
    readers = {}
    for c in calls:
        for a in c["ins"]:
            readers.setdefault(a, []).append(c)
    def sinks(c, memo={}):
        key = id(c)
        if key not in memo:
            r = readers.get(c["out"], [])
            memo[key] = {c["out"]} if not r else set().union(*(sinks(x) for x in r))
        return memo[key]
    out_k = lambda s: int(re.match(r"StatefulPartitionedCall_(\d+)_buffer_var", s).group(1))
    for c in calls:
        s = {out_k(x) for x in sinks(c) if x.startswith("StatefulPartitionedCall_")}
        c["exit"] = s.pop() if len(s) == 1 and 0 not in s else 0
    prod = {c["out"]: c for c in calls}
    taps = {}
    for c in calls:
        if c["exit"]:
            for a in c["ins"]:
                p = prod.get(a)
                if p is not None and p["exit"] == 0:
                    assert c["exit"] not in taps or taps[c["exit"]][0] == a, "exit reads two backbone tensors"
                    taps[c["exit"]] = (a, p, c)
    return taps


def split_lib1(src):
    a, b = main_span(src)
    lines, calls = parse(src[a:b])
    taps = partition(calls)
    exits = sorted(taps, key=lambda k: taps[k][1]["line"])
    assert exits == sorted(exits), f"exit order along the backbone {exits}"
    tap_after = {taps[k][1]["line"]: k for k in exits}

    bb = []
    for n, l in enumerate(lines):
        c = next((x for x in calls if x["line"] == n), None)
        if c is not None and c["exit"]:
            bb.append("  // " + l.strip()); continue
        bb.append(l)
        if n in tap_after:
            bb += ["", "  while(*HANDSHAKE != 0xC0);", "  clock_ungate_signal();", "  while(*HANDSHAKE != 0xCF);", ""]

    tapsid = {taps[k][0]: k for k in exits}
    ee, heads = [], {k: [] for k in exits}
    for n, l in enumerate(lines):
        d = DECL.match(l)
        if d and d.group(1) in tapsid:
            ee.append(f"  void* {d.group(1)} = (&(((uint8_t*)(*BB_GLOBAL_WS_ADDR))[{d.group(2)}]));"); continue
        c = next((x for x in calls if x["line"] == n), None)
        if c is None:
            if not l.strip().startswith("return 0;"):
                ee.append(l)
            continue
        if c["exit"]:
            heads[c["exit"]].append((c, l))
        else:
            ee.append("  // " + l.strip())
    for k in exits:
        hs = heads[k]
        assert hs[0][1] is not None and taps[k][2] is hs[0][0], f"exit {k}: first head op does not read the tap"
        ee += ["", hs[0][1], "  *HANDSHAKE= 0xCF;"] + [l for _, l in hs[1:]]
        out = hs[-1][0]["out"]
        assert out == f"StatefulPartitionedCall_{k}_buffer_var", (k, out)
        ee += ["", f"  eval({out});", "  *HANDSHAKE= 0xC0;", "  clock_gate_signal();"]
    ee += ["  return 0;"]
    mk = lambda body: src[:a] + "\n".join(body) + src[b:]
    return mk(bb), mk(ee), {k: (taps[k][0], taps[k][1]["fn"]) for k in exits}


def split_lib0(src):
    m = re.search(r"int32_t tvmgen_default_run\(([^)]*)\) \{return (tvmgen_default___tvm_main__\((.*)\));\n?}", src,
                  re.S)
    call = m.group(2)
    bb = ("int32_t tvmgen_default_run(" + m.group(1) + ") {\n"
          "    *BB_GLOBAL_WS_ADDR = (uint32_t)&global_workspace;\n"
          "    *BB_GLOBAL_CONST_WS_ADDR = (uint32_t)&global_const_workspace;    \n"
          "    return " + call + ";\n}")
    ee_call = call.replace("((uint8_t*)&global_const_workspace)", "((uint8_t*)(*BB_GLOBAL_CONST_WS_ADDR))")
    assert ee_call != call
    ee = "int32_t tvmgen_default_run(" + m.group(1) + ") {\n    return " + ee_call + ";\n}"
    return ('#include "config.h"\n' + src[:m.start()] + bb + src[m.end():],
            '#include "config.h"\n' + src[:m.start()] + ee + src[m.end():])


if __name__ == "__main__":
    lib0, lib1, out = Path(sys.argv[1]), Path(sys.argv[2]), Path(sys.argv[3])
    bb1, ee1, taps = split_lib1(lib1.read_text())
    bb0, ee0 = split_lib0(lib0.read_text())
    head_bb = HEAD_BB_NO_ACCEL if "--no-accel" in sys.argv else HEAD_BB
    for core, l0, l1, hdr in (("BB", bb0, bb1, head_bb), ("EE", ee0, ee1, HEAD_EE)):
        d = out / core; d.mkdir(parents=True, exist_ok=True)
        (d / "default_lib0.c").write_text(l0)
        (d / "default_lib1.c").write_text(hdr + l1)
    for k, (sid, fn) in taps.items():
        print(f"exit {k}: tap {sid} written by {fn}")
