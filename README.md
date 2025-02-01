# ft_printf

## Description

`ft_printf` is a custom implementation of the standard `printf` function from the C programming language. It is designed to mimic the behavior and functionality of `printf`, enabling formatted output to the standard output. This project focuses on understanding variadic functions, handling different format specifiers, and creating flexible output functions in C.

## Objective

The main objective of this project is to:
- Reimplement the `printf` function from the C standard library.
- **Format specifiers**: The implementation supports common format specifiers, including:
  - `%c` Prints a single character.
  - `%s` Prints a string (as defined by the common C convention).
  - `%p` The void * pointer argument has to be printed in hexadecimal format.
  - `%d` Prints a decimal (base 10) number.
  - `%i` Prints an integer in base 10.
  - `%u` Prints an unsigned decimal (base 10) number.
  - `%x` Prints a number in hexadecimal (base 16) lowercase format.
  - `%X` Prints a number in hexadecimal (base 16) uppercase format.
  - `%%` Prints a percent sign.

- **Variable argument list**: Uses the `stdarg.h` library to handle a variable number of arguments.

## Compilation

To compile the project, run the following command:

```bash
make
```

Then, create a file called main.c:
```bash
touch main.c
```
And put the following code inside main.c:
```bash
// Include the header
include "ft_printf.h"

int main(void)
{
      ft_printf("Personal printf Works\n");
      return (0);
}
```

Now, you're ready to compile the code. To compile, run the following command:
```bash
gcc main.c libftprintf.a && ./a.out
```

The output should be:
```bash
Personal printf Works
```