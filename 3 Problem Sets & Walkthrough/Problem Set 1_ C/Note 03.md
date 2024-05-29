# Format Specifiers in C

Format specifiers are used in the `printf` and `scanf` functions to specify the type of data being printed or read. Here are some common format specifiers:

| Format Specifier | Description | Example |
| --- | --- | --- |
| `%d` | Integer | `printf("%d", 5);` |
| `%c` | Character | `printf("%c", 'a');` |
| `%s` | String | `printf("%s", "Hello");` |
| `%f` | Float | `printf("%f", 3.14);` |
| `%lf` | Long float | `printf("%lf", 3.14L);` |
| `%e` | Exponential notation | `printf("%e", 3.14);` |
| `%g` | General format | `printf("%g", 3.14);` |
| `%p` | Pointer | `printf("%p", &ptr);` |
| `%x` | Hexadecimal | `printf("%x", 0x12);` |

These format specifiers can be used in both `printf` and `scanf` functions.

In the `printf` function, they specify the type of data being printed, and in the `scanf` function, they specify the type of data being read.