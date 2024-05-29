#include <stdio.h>

int main()
{
    int x = 5;
    int y = 3;
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

    switch (y)
    {
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
}