#include <stdio.h>

int f(int x);

int
main(void)
{
    int n = 4;
    
    for(int i = 0; i < 3; i++)
        n += i;
    
    int y = f(n);

    printf("%d\n", y);
}

int
f(int x)
{
    if((x % 2) == 0)
        return x;
    
    x *= 2;
    return f(x);
}
