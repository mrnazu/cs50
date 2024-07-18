/**
 * array.c
 * Tommy MacWilliam <tmacwilliam@cs50.net>
 *
 * Demonstrates arrays and functions.
 *
 */

#include <stdio.h>

void print_int_array(int[], int);

int main(void)
{
    // create an array and populate with values
    int array[3];
    array[0] = 0;
    array[1] = 10;
    array[2] = 50;

    print_int_array(array, 3);

    // create and populate an array with less code
    int another_array[] = { 1, 2, 3 };
    print_int_array(another_array, 3);
}

/**
 * Function: print_int_array
 * Print an array of integers.
 *
 * Parameters:
 *   array - The array to print
 *   n - Length of the array
 *
 */
void print_int_array(int array[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d\n", array[i]);
}
