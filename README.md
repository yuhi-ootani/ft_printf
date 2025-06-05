# ft_printf

## Summary  
This repository offers an implementation of the `ft_printf` function, replicating a subset of the standard C `printf` behavior, supporting conversion specifiers: `%c`, `%s`, `%p`, `%d`, `%i`, `%u`, `%x`, `%X`, and `%%`. It uses variadic arguments (`stdarg.h`) and writes to `stdout`, returning the total character count printed. 

## Repository Structure  
- **`ft_printf.h`**: Header file declaring `ft_printf` and its helper functions, along with necessary includes (`stdarg.h`, `unistd.h`, etc.).   
- **`ft_printf.c`**: Contains the core `ft_printf` function, which parses the format string, dispatches to the appropriate handlers, and tracks the printed character count.   
- **`handle_num.c`**: Implements helper functions for printing numeric types:
  - Signed integers (`%d`, `%i`)
  - Unsigned integers (`%u`)
  - Hexadecimal (`%x`, `%X`)  
  These routines convert numbers to their string representations and write them to `stdout`.   
- **`Makefile`**: Defines build rules:  
  - `make`: Compile `ft_printf.c` and `handle_num.c` into an object or static library.  
  - `make clean` / `make fclean`: Remove compiled artifacts.  
  - `make re`: Clean and rebuild. 

## Languages and Tools  
- **C (86.9%)**: Core language used for implementing `ft_printf` and associated helpers.   
- **Makefile (13.1%)**: Build automation for compilation and cleanup. 

## How to Use This Repository  
1. **Clone the repository**:  
   ```bash
   git clone https://github.com/yuhi-ootani/ft_printf.git
   cd ft_printf
