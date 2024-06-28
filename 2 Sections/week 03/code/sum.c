#include <stdio.h>

// declare sum function
int sum(int array_size, int numbers[]);

int
main(void)
{
    // initalizes an array of numbers
    int s = 5, num[] = {1, 4, 9, 16, 25};
    
    // calls sum function and print result
    printf("%d\n", sum(s, num));
}

int
sum(int array_size, int numbers[])
{
    // declares counter variable
    int count = 0;
    
    // sum numbers in array
    for(int i = 0; i < array_size; i++)
        count += numbers[i];

    // returns sum
    return count;
}
