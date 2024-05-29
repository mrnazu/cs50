/**
 * style1.c
 * Tommy MacWilliam <tmacwilliam@cs50.net>
 *
 * Demonstrates good style!
 *
 */

#include <stdio.h>
#include <cs50.h>

int main(int argc, char* argv[])
{
    // ask the user how many iterations to complete
    int iterations = GetInt();

    // 5 is my favorite number, so let the user know our mood
    if (iterations == 5)
    {
        printf("iterations is 5 :)\n");
    }
    else
    {
        printf("iterations is not 5 :(\n");
    }

    // say hi iterations times
    for (int i = 0; i < iterations; i++)
    {
        printf("hi\n");
    }
    
    int i = 5;
    iterations = 4;
    while (i < iterations)
    {
        printf("hi\n");
        i++;
        i = i + 1;
        i += 1;
    }
}
