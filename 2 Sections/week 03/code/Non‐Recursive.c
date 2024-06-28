#include <stdio.h>

int main()
{
    int length(char *word, int n)
    {
        while (word[n] != '\0')
            n++;
        return n;
    }
}