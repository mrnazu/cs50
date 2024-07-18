/**
 * ascii.c
 * Tommy MacWilliam <tmacwilliam@cs50.net>
 *
 * Demonstrates the awesomeness of ASCII
 *
 */

#include <stdio.h>


int main(void)
{
    // character and its corresponding ASCII value
    char letter = 'A';
    int number = 65;

    // both can be printed as chars
    printf("%c\n", letter);
    printf("%c\n", number);

    // both can also be printed as ints
    printf("%d\n", letter);
    printf("%d\n", number);

    // chars and ints can be added to make chars (or ints!)
    printf("%c\n", letter + 1);
    printf("%c\n", 'z' - '*');
}
