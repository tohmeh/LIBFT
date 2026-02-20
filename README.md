# Libft

Custom C standard library implementation with string manipulation, memory management, linked lists, file I/O, and formatted output. Built from scratch without relying on standard library functions.

## Features

- String operations: length, copy, concatenate, split, trim, search, compare, transform
- Memory management: copy, move, set, compare, allocate
- Character validation: alphanumeric, alphabetic, digit, ASCII, printable
- Type conversion: string to integer, integer to string
- Linked list utilities: create, add, delete, iterate, map, clear
- File descriptor I/O: read line, write character/string/number
- Formatted output: ft_printf with support for c, s, p, d, i, u, x, X, % specifiers
- get_next_line: read file line-by-line with configurable buffer size

## Getting Started

```bash
# Clone the repository
git clone https://github.com/tohmeh/libft.git
cd libft

# Compile the library
make

# Link with your project
gcc your_program.c -L./lib -lft -I./include -o your_program
```

The compiled static library is located at `lib/libft.a`.

## Project Structure

```
LIBFT/
  include/         # Header file (LIBFT.h)
  src/             # Implementation files
  lib/             # Compiled library output
  Makefile         # Build configuration
```

Available Makefile targets: `make` (build), `make clean` (remove objects), `make fclean` (full clean), `make re` (rebuild).
