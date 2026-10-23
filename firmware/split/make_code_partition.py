"""C sources of the two cores for a multi-exit network: TVM model library -> accelerator code -> BB/EE split.

    python make_code_partition.py <model>_EE_int8_aot.tar <out dir> --main-from <dir with BB/main.c and EE/main.c>
                                  [--no-accel] [--interactive]

The output is compiled for the two trv32p3 cores with Synopsys ASIP Designer (not part of this repository).
"""
import re, subprocess, sys, tarfile, tempfile
from pathlib import Path

HERE = Path(__file__).resolve().parent
sys.path.insert(0, str(HERE))
import split_dual_core as SD  # noqa: E402

GEN = HERE.parents[1] / "accel_codegen" / "tvm_accel_gen.py"


def main():
    if len(sys.argv) < 3 or "--main-from" not in sys.argv:
        sys.exit(__doc__)
    tar, out = Path(sys.argv[1]), Path(sys.argv[2])
    main_from = Path(sys.argv[sys.argv.index("--main-from") + 1])
    no_accel = "--no-accel" in sys.argv
    with tempfile.TemporaryDirectory() as tmp:
        tmp = Path(tmp)
        with tarfile.open(tar) as t:
            try:
                t.extractall(tmp, filter="data")
            except TypeError:
                t.extractall(tmp)
        src = tmp / "codegen/host/src"
        lib1 = src / "default_lib1.c"
        if not no_accel:
            acc = tmp / "default_lib1_accel.c"
            interactive = "--interactive" in sys.argv
            r = subprocess.run([sys.executable, str(GEN), str(lib1), "-o", str(acc)],
                               input=None if interactive else "\n" * 50, text=True,
                               capture_output=not interactive)
            if r.returncode != 0:
                sys.exit(f"tvm_accel_gen.py failed:\n{(r.stdout or '')[-2000:]}")
            lib1 = acc
        bb1, ee1, taps = SD.split_lib1(lib1.read_text())
        bb0, ee0 = SD.split_lib0((src / "default_lib0.c").read_text())
        hdr = (tmp / "codegen/host/include/tvmgen_default.h").read_text()
    inp = re.search(r"struct tvmgen_default_inputs \{\s*void\* (\w+);", hdr).group(1)
    n = len(taps)
    head_bb = SD.HEAD_BB_NO_ACCEL if no_accel else SD.HEAD_BB
    for core, l0, l1, head in (("BB", bb0, bb1, head_bb), ("EE", ee0, ee1, SD.HEAD_EE)):
        main_c = (main_from / core / "main.c").read_text()
        if core == "BB":
            assert re.search(rf"#define NUM_EXITS\s+{n}\b", main_c), f"BB main.c of {main_from} is not for {n} exits"
            main_c = re.sub(r"serving_default_input_\w*?_0\b", inp, main_c)
        else:
            assert re.search(rf"float output_EE\[{n}\]", main_c), f"EE main.c of {main_from} is not for {n} exits"
        d = out / core
        d.mkdir(parents=True, exist_ok=True)
        (d / "default_lib0.c").write_text(l0)
        (d / "default_lib1.c").write_text(head + l1)
        (d / "main.c").write_text(main_c)
    for k, (sid, fn) in taps.items():
        print(f"exit {k}: BB hands over {sid} after {fn}")
    print(f"-> {out}/BB, {out}/EE")


if __name__ == "__main__":
    main()
