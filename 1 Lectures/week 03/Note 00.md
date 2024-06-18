# Week 03
## From Last Time
I just revised the last time topics, such as getting input from users, for loop, and so on realted topics.
## More Problems with Scope
Let’s take a look at `buggy4.c` to see another example of a problem with scope:
```c
/****************************************************************************
 * buggy4.c
 *
 * Computer Science 50
 * David J. Malan
 *
 * Should increment a variable, but doesn't!
 * Can you find the bug?
 ***************************************************************************/

#include <stdio.h>


// function prototype
void increment(void);


int main(void)
{
    int x = 1;
    printf("x is now %d\n", x);
    printf("Incrementing...\n");
    increment(); // in other word.. we are saying x++;
    printf("Incremented!\n");
    printf("x is now %d\n", x);
}


/*
 * Tries to increment x.
 */

void increment(void)
{
    x++;
}
```
ofc if we try to compile this code.. we will get an error:
```bash
$ gcc buggy4.c -o buggy4
buggy4.c: In function 'increment':
buggy4.c:35:5: error: 'x' undeclared (first use in this function)
     x++;
     ^
buggy4.c:35:5: note: each undeclared identifier is reported only once for each function it appears in
```

But why? last time we have discussed about global and local scops.. right? That's it :)) The problem is that x is declared and initialized only in main function, not in increment. We can’t add 1 to x in increment because x doesn’t exist within the scope of increment function. Okay, so let’s try fixing this by declaring x within increment:
```c
void increment(void)
{
    int x;
    x++;
}
```
This program actually will compile because x has now been declared. However, it hasn’t been initialized, so when we try to increment it, we’ll be adding 1 to whatever garbage value is in x at runtime. This garbage value is whatever was left over in x’s memory from the last time it was used. This is definitely not what we want.

Not only are we adding 1 to a garbage value, we’re not having any effect on the original variable x that was declared in main. Because main and increment have different scopes, the x from increment is completely separate from the x in main. Thus adding 1 to the former has no effect on the latter.

So in order to solve this.. we have to add global x, like this:
```c
#include <stdio.h>


// global var
int x;

// function prototype
void increment(void);


int main(void)
{
    x = 1;
    printf("x is now %d\n", x);
    printf("Incrementing...\n");
    increment(); // in other word.. we are saying x++;
    printf("Incremented!\n");
    printf("x is now %d\n", x);
}

void increment(void)
{
    x++;
}
```

# Strings and Arrays
Arrays in C are collections of variables of the same type stored in contiguous memory. You can think of an array in C as a row of mailboxes in a dorm or apartment building. Each mailbox represents one element in the array and can store one variable of whatever type the array was declared to store.

If our row has 5 mailboxes in it, the maximum length of a word we could store in this row is 4. This is because we need space for the null terminator (\0) which signifies the end of the string.

We’ve already seen that strings can be treated as arrays, so let’s have some fun with them:
```c
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // ask user for string
    string s = GetString();
    int n = strlen(s);
}
```

To find the length of the string we just got from the user, we’ll call a function named strlen. But we can’t remember where this function is declared, so how can we figure it out? Recall that we can look up the manual entry for this function by typing man strlen at the command line. In the Synopsis section, the manual entry will tell you that strlen is declared in string.h. Also in the Synopsis section, we see that the function prototype looks as follows
```c
size_t strlen(const char *s);
```

Apparently, this function doesn’t take a string type as an argument, but rather a const char *. As a teaser, the * means this type is a pointer, or actually a memory address. We’ll come back to this. In fact, the string data type we declared in the CS50 Library is just a synonym for const char *. What about the size_t? It’s another custom data type which, in this case, is synonymous with int. Know that you can get similar information from the C Reference linked from the course website.

and the rest is what we have coverd last week :))