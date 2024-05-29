#include <stdio.h>

/* Write a program that uses `if-else-if`
    to check if a number is positive, negative, or zero.
*/

int main()
{

    // Negative, Positive and Zero finder converted into switch case
    // from if-else-is statments
    int x = 5;
    switch (x)
    {
    case x > 0:
        printf("x is positive\n");
        break;
    case x < 0:
        printf("x is negative\n");
        break;
    default:
        printf("x is zero\n");
    }

    // Day finder converted into if-else-if
    // from switch case
    int day = 3;
    if (day == 1)
    {
        printf("day is Monday\n");
    }
    else if (day == 2)
    {
        printf("day is Tuesday\n");
    }
    else if (day == 3)
    {
        printf("day is Wednesday\n");
    }
    else
    {
        printf("Invalid day\n");
    }
}