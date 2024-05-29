#include <stdio.h>

/* Write a program that uses `if-else-if`
    to check if a number is positive, negative, or zero.
*/

int main()
{
    int x = 5;
    if (x > 0)
    {
        printf("x is positive\n");
    }
    else if (x < 0)
    {
        printf("x is negative\n");
    }
    else
    {
        printf("x is zero\n");
    }
}