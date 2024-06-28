#include <stdio.h>
#include <stdlib.h>

// declare factorial function
long long factorial(long long n);

int
main(int argc, char* argv[])
{
    // ensures correct input
    if(argc != 2)
    {
        printf("Usage: ./factorial number\n");
        return 1;
    }
    
    // converts input to number
    int f = atoi(argv[1]);
    
    // ensures input is positive integer
    if(f <= 0)
    {
        printf("Input must be a positive integer.\n");
        return 2;
    }
    
    // prints result
    printf("%lld\n", factorial(f));
}

long long
factorial(long long n)
{
    // base case
    if(n <= 1)
        return 1;
    
    // recursive call
    return n * factorial(n - 1);
}
