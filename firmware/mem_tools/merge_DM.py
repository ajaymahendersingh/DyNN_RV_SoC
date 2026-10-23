#!/usr/bin/env python3
import sys

def main():
    if len(sys.argv) != 4:
        print(f"Usage: {sys.argv[0]} <source_file> <target_file> <output_file>")
        sys.exit(1)

    src_path = sys.argv[1]
    dst_path = sys.argv[2]
    out_path = sys.argv[3]

    # read source
    try:
        with open(src_path, "r") as f:
            src_lines = f.readlines()
    except Exception as e:
        print(f"Error reading source file: {e}")
        sys.exit(1)

    # remove trailing ';' from LAST source line
    if src_lines:
        last = src_lines[-1].rstrip()
        if last.endswith(";"):
            last = last[:-1]
        src_lines[-1] = last 

    # read target
    try:
        with open(dst_path, "r") as f:
            dst_lines = f.readlines()
    except Exception as e:
        print(f"Error reading target file: {e}")
        sys.exit(1)

    # replace leading part of target
    dst_lines[:len(src_lines)] = src_lines

    # insert one blank line after the copied source block
    dst_lines.insert(len(src_lines), "\n")

    # write output
    try:
        with open(out_path, "w") as f:
            f.writelines(dst_lines)
    except Exception as e:
        print(f"Error writing output file: {e}")
        sys.exit(1)

if __name__ == "__main__":
    main()

