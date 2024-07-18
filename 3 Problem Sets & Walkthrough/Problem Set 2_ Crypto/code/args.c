// #include <cs50.h>
#include <stdio.h>

int main(int argc, int argv[])
{
    for (int i = 0; i < argc; i++)
    {
        printf("%d: %s\n", i, argv[i]);
    }
}