# ft_printf

A custom implementation of the standard C library function `printf()` as part of the 42 School curriculum.

## Table of Contents

- [Description](#description)
- [Features](#features)
- [Installation](#installation)
- [Usage](#usage)
- [Supported Format Specifiers](#supported-format-specifiers)
- [Project Structure](#project-structure)
- [Compilation](#compilation)
- [Testing](#testing)
- [Author](#author)

## Description

`ft_printf` is a reimplementation of the standard C library function `printf()`. This project teaches us about variadic functions, memory management, and string manipulation in C. The function handles various format specifiers and produces formatted output to the standard output.

## Features

- ✅ Handles multiple format specifiers
- ✅ Returns the number of characters printed
- ✅ Memory-safe implementation
- ✅ Compatible with standard `printf()` behavior
- ✅ Built on top of custom `libft` library

## Installation

1. Clone the repository:
```bash
git clone git@github.com:wees-s/ft_printf_42_cursus.git
cd ft_printf
```

2. Compile the library:
```bash
make
```

This will create the `libftprintf.a` static library file.

## Usage

Include the header file in your C program:

```c
#include "ft_printf.h"
```

Link the library when compiling:

```bash
gcc -Wall -Wextra -Werror your_program.c -L. -lftprintf -o your_program
```

Example usage:

```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello, %s!\n", "World");
    ft_printf("Number: %d\n", 42);
    ft_printf("Hex: %x\n", 255);
    ft_printf("Pointer: %p\n", &main);
    return (0);
}
```

## Supported Format Specifiers

| Specifier | Description | Example |
|-----------|-------------|---------|
| `%c` | Character | `ft_printf("%c", 'A')` → A |
| `%s` | String | `ft_printf("%s", "Hello")` → Hello |
| `%p` | Pointer address | `ft_printf("%p", ptr)` → 0x7fff5fbff710 |
| `%d` | Signed decimal integer | `ft_printf("%d", -42)` → -42 |
| `%i` | Signed decimal integer | `ft_printf("%i", 42)` → 42 |
| `%u` | Unsigned decimal integer | `ft_printf("%u", 42u)` → 42 |
| `%x` | Hexadecimal (lowercase) | `ft_printf("%x", 255)` → ff |
| `%X` | Hexadecimal (uppercase) | `ft_printf("%X", 255)` → FF |
| `%%` | Literal percent sign | `ft_printf("%%")` → % |

## Project Structure

```
ft_printf/
├── ft_printf.c           # Main printf implementation
├── ft_printf.h           # Header file with function prototypes
├── ft_print_utils.c      # Utility functions for basic types
├── ft_print_hex.c        # Hexadecimal printing functions
├── ft_print_address_i.c  # Pointer address printing
├── libftprintf.h         # Additional header file
├── Makefile             # Compilation rules
├── libft/               # Custom C library (dependency)
└── README.md            # This file
```

## Compilation

The project uses a Makefile with the following targets:

- `make` or `make all`: Compiles the library
- `make clean`: Removes object files
- `make fclean`: Removes object files and the library
- `make re`: Performs fclean followed by all

### Compilation Flags

The project is compiled with strict flags to ensure code quality:
- `-Wall`: Enable all warnings
- `-Wextra`: Enable extra warnings
- `-Werror`: Treat warnings as errors

## Testing

To test the `ft_printf` function, you can create a simple test program:

```c
#include "ft_printf.h"
#include <stdio.h>

int main(void)
{
    int ft_ret, std_ret;
    
    // Test character
    ft_ret = ft_printf("ft_printf: %c\n", 'A');
    std_ret = printf("printf:    %c\n", 'A');
    printf("ft_printf returned: %d, printf returned: %d\n\n", ft_ret, std_ret);
    
    // Test string
    ft_ret = ft_printf("ft_printf: %s\n", "Hello World");
    std_ret = printf("printf:    %s\n", "Hello World");
    printf("ft_printf returned: %d, printf returned: %d\n\n", ft_ret, std_ret);
    
    // Test numbers
    ft_ret = ft_printf("ft_printf: %d, %i, %u\n", -42, 42, 42u);
    std_ret = printf("printf:    %d, %i, %u\n", -42, 42, 42u);
    printf("ft_printf returned: %d, printf returned: %d\n\n", ft_ret, std_ret);
    
    // Test hexadecimal
    ft_ret = ft_printf("ft_printf: %x, %X\n", 255, 255);
    std_ret = printf("printf:    %x, %X\n", 255, 255);
    printf("ft_printf returned: %d, printf returned: %d\n\n", ft_ret, std_ret);
    
    return (0);
}
```

## Dependencies

This project depends on:
- **libft**: A custom implementation of standard C library functions
- Standard C libraries: `<stdarg.h>`, `<unistd.h>`

## Author

**wedos-sa** - 42 School Student

---

*This project is part of the 42 School curriculum and follows the school's coding standards (Norminette).*
