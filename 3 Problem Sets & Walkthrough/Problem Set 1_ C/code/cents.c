#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    float f = GetFloat();
    int n = round(f * 100);
    printf("%d\n", n);
}