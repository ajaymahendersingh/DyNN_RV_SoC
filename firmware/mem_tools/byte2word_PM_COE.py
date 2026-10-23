import sys

def read_memory_file(filename):
    memory = {}
    max_address = 0

    with open(filename, 'r') as file:
        for line in file:
            parts = line.strip().split()
            if len(parts) == 2 and parts[0].startswith('@'):
                address = int(parts[0][1:], 16)
                value = parts[1]
                memory[address] = value
                max_address = max(max_address, address)

    return memory, max_address

def format_coe(memory, max_address):
    coe_lines = ["memory_initialization_radix=16;", "memory_initialization_vector="]
   
    for addr in range(0, max_address + 1, 4):
        word = "".join(memory.get(addr + i, "00") for i in range(3, -1, -1))  # Form 32-bit word
        coe_lines.append(word)

    coe_lines[-1] += ";"  # Append semicolon at the last line
    return "\n".join(coe_lines)

def main():
    if len(sys.argv) != 3:
        print("Usage: python script.py input.txt output.coe")
        return

    input_file = sys.argv[1]
    output_file = sys.argv[2]

    memory, max_address = read_memory_file(input_file)
    coe_content = format_coe(memory, max_address)

    with open(output_file, 'w') as file:
        file.write(coe_content)

    print(f"COE file generated: {output_file}")

if __name__ == "__main__":
    main()