# Looping in C

When you want to repeat a task until a certain condition is met, you use a loop. In C, there are several types of loops: `while`, `for`, and `do-while`.

* `while` loop: The condition is evaluated first, and if it's true, the code inside the loop is executed. Then, the condition is re-evaluated, and the loop continues until the condition becomes false.
* `do-while` loop: The code inside the loop is executed at least once, and then the condition is evaluated. If the condition is true, the loop continues; otherwise, the loop ends.

In our example, if we want to keep asking the user for input until they provide a valid input, we would use a `do-while` loop. The `do` part would execute the code inside the loop at least once, and the `while` part would check the condition (in this case, whether the input is valid).

Here's an example:
```c
#include <stdio.h>

int main() {
    int age;

    do {
        printf("Enter your age: ");
        scanf("%d", &age);
    } while (age <= 0 || age > 100);

    printf("You are %d years old.\n", age);

    return 0;
}
```
In this example, the `do-while` loop will keep asking the user for their age until they enter a valid age (between 1 and 100).