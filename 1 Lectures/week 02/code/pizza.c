#include <stdio.h>

// Function prototype
double calculateTotalCost(int numToppings, double crustSize, double sauceType);

int main() {
    // Call the function
    double totalCost = calculateTotalCost(3, 14.5, 2.0);
    printf("Total cost: $%.2f\n", totalCost);
    return 0;
}

double calculateTotalCost(int numToppings, double crustSize, double sauceType)
{
    return 0.0;
}
