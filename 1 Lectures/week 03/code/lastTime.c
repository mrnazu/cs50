#include <stdio.h>
int main(void)
{
    printf("How many bottles of beer will there be?\n");
    int n;
    scanf("%d", &n);

    if (n < 1)
    {
        printf("Please input a positive number.\n");
        return 1;
    }

    for (int i = n; i >= 0; i--)
    {
        printf("%d bottles of beer on the wall.\n", i);
        printf("%d bottles of beer.\n", i);
        printf("Take one down, pass it around.\n");
        printf("%d bottles of beer on the wall.\n", i - 1);
    }

    return 0;
}