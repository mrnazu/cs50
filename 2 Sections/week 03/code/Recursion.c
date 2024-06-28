#include <stdio.h>

int main()
{
    int length(char *word, int n)
    {
        if (word[n] != '\0')
            return 1 +
                   length(word, n + 1);
        else
            return 0;
    }
}