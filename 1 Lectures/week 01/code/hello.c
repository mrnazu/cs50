#include <cs50.h>
#include <stdio.h>

int
main(void)
{
    printf("Say your name: ");
    string s = GetString();
    printf("o hai, %s!\n", s);
}
