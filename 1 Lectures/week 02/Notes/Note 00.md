# Week 2
## Week 01 (Rev)
In week 01 we have learned both If-Else-If and Switch Case.. Noe lets see thier differ :))
### Switch Case vs If-Else-If in C
In C, both `switch` statements and `if-else-if` statements are used for making decisions based on conditions. However, they are used in different situations and have different characteristics.

**If-Else-If**

If-else-if statements are used when you have multiple conditions to check and you want to execute different blocks of code based on those conditions. Here's an example:
```c
int x = 5;
if (x > 10) {
    printf("x is greater than 10\n");
} else if (x == 5) {
    printf("x is equal to 5\n");
} else {
    printf("x is less than 10\n");
}
```
In this example, the program checks if `x` is greater than 10, and if not, it checks if `x` is equal to 5. If neither of these conditions is true, it executes the else block.

**Switch Case**

Switch statements are used when you have a single variable that needs to be checked against multiple values, and you want to execute different blocks of code based on those values. Here's an example:
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
In this example, the program checks the value of `day` and executes the corresponding block of code.

**When to use each**

* Use `if-else-if` when:
	+ You have multiple conditions to check.
	+ You want to check conditions in a specific order (i.e., from top to bottom).
* Use `switch-case` when:
	+ You have a single variable that needs to be checked against multiple values.
	+ You want to execute different blocks of code based on the value of that variable.

# Buggy (Week 02)
I think in order to do this topic.. we have to first done the problem set 0 C task :))