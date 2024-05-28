# More on C
## Operator Precedence and Formatting Strings
Many of the operators that you’re familiar with from math (e.g. +, −, ∗, /) are identical in C. And, as in arithmetic, there is an order in which operations are applied. In the world of computer science, this is called operator precedence. For example, the grouping operator (i.e. parentheses) has the highest precedence in the C language.

As we mentioned earlier, the printf function can take many different formatting characters. Just a few of them are:
- %c for char
- %d for int
- %f for float
- %lld for long long
- %s for string.

Be sure to use `%lld` if you want to print out a number larger than a long can store, lest you get a negative number when you try to print it out with `%d!`

## Conditions
As we mentioned last time, conditions in C look quite similar to conditions in Scratch:
```c
if (condition)
{
    // do this
}
```

Question: does # work for comments in C? No.

When we have two forks in the road, we can use if-else:
```c
if (condition)
{
    // do this
}
else (condition)
{
    // do that
}
```

We can even handle more than two forks in the road with the if-else if-else syntax:
```c
if (condition)
{
    // do this
}
else if (condition)
{
    // do that
}
else
{
    // do this other thing
}
```

C is a `strictly typed` language, which means we have to be explicit about what type each variable is. For example asking a user to put a number, in this case, since we’re asking the user for an integer, we must assign it to a variable that has type `int`.

## Switches
A common theme this semester will be the ability to accomplish a task in many different, but equally efficient ways. When this is the case, the way that you choose will often come down to a matter of style. For example, instead of using the if-else if-else construct, we can use a switch statement to accomplish the same:
```c
switch (expression)
{
    case i:
        // do this
        break;
    case j:
        // do that
        break;
    default:
        // do this other thing
}
```

## Loops
for loops take the following general structure:
```c
for (initializations; condition; updates)
{
    // do this again and again
}
```
Within the parentheses after the for keyword, there are three parts. Before the first semicolon, we are initializing a variable which will be our iterator or counter, often named i by convention. Between the two semicolons, we’re providing a condition which, if true, will cause another iteration of the loop to be executed. Finally, we provide code to update our iterator.

