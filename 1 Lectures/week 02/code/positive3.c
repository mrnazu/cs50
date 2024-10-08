/****************************************************************************
 * positive3.c
 *
 * Computer Science 50
 * David J. Malan
 *
 * Demands that user provide a positive number.
 *
 * Demonstrates use of !.
 ***************************************************************************/

// #include <cs50.h>
#include <stdio.h>

int
main(void)
{
    // loop until user provides a positive integer
    bool thankful = false;
    do
    {
        printf("I demand that you give me a positive integer: ");
        int in = scanf("%d");
        if (in > 0)
            thankful = true;
    }
    while (!thankful);
    printf("Thanks for the positive integer!\n");
}
