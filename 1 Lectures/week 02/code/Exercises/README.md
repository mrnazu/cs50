# Exercises

1. Write a program that uses `if-else-if` to check if a number is positive, negative, or zero. (Passed ✅)
2. Write a program that uses `switch-case` to check the day of the week and print a corresponding message. (Passed ✅)
3. Modify the previous program to use `if-else-if` instead of `switch-case`. (Passed ✅)
4. Write a program that uses both `if-else-if` and `switch-case` to make decisions based on different conditions. (Passed ✅)

**Answers**

1. Here's an example program that uses `if-else-if` to check if a number is positive, negative, or zero:
```c
int x = 5;
if (x > 0) {
    printf("x is positive\n");
} else if (x < 0) {
    printf("x is negative\n");
} else {
    printf("x is zero\n");
}
```
2. Here's an example program that uses `switch-case` to check the day of the week and print a corresponding message:
```c
int day = 3;
switch (day) {
    case 1:
        printf("day is Monday\n");
        break;
    case 2:
        printf("day is Tuesday\n");
        break;
    case 3:
        printf("day is Wednesday\n");
        break;
    default:
        printf("Invalid day\n");
        break;
}
```
3. Here's an example program that uses `if-else-if` instead of `switch-case` to check the day of the week and print a corresponding message:
```c
int day = 3;
if (day == 1) {
    printf("day is Monday\n");
} else if (day == 2) {
    printf("day is Tuesday\n");
} else if (day == 3) {
    printf("day is Wednesday\n");
} else {
    printf("Invalid day\n");
}
```
4. Here's an example program that uses both `if-else-if` and `switch-case` to make decisions based on different conditions:
```c
int x = 5;
int y = 3;
if (x > 0) {
    printf("x is positive\n");
} else if (x < 0) {
    printf("x is negative\n");
} else {
    printf("x is zero\n");
}

switch (y) {
    case 1:
        printf("y is 1\n");
        break;
    case 2:
        printf("y is 2\n");
        break;
    case 3:
        printf("y is 3\n");
        break;
    default:
        printf("Invalid y\n");
        break;
}
```

1. Passed ✅
2. Passed ✅
3. Passed ✅
4. Passed ✅