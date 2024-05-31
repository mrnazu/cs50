/****************************************************************************
 * math3.c
 *
 * Computer Science 50
 * David J. Malan
 *
 * Computes and prints a floating-point total.
 *
 * Demonstrates loss of precision.
 ***************************************************************************/

#include <stdio.h>

int
main(void)
{
    float answer = 17 / (float) 13; // float is 32 bit
    printf("%.2f\n", answer); // .2 denotes 2 decimal places.. only show me two numbers after the decimal point
}
