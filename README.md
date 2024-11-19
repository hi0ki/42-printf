# ft_printf

## Description
A custom implementation of the standard C `printf` function for the 42 Network cursus. This project helps developers deeply understand:
- Variadic functions in C
- Type handling and type casting
- Memory management
- Registers and stack frame management
- Low-level formatting techniques

## Function Prototype
```c
int ft_printf(const char *format, ...);
```

## Supported Format Specifiers
- `%c`: Character
- `%s`: String
- `%p`: Pointer
- `%d`, `%i`: Integer
- `%u`: Unsigned integer
- `%x`, `%X`: Hexadecimal
- `%%`: Percent sign

## Compilation
```bash
make
```

## Usage Example
```c
ft_printf("Hello, %s! Number: %d\n", "World", 42);
```
