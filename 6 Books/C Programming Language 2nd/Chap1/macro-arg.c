#include <stdio.h>

#define SQUARE(x) ((x) * (x))    /* SQUARE root calc */

int main() {
    int x1 = 2;
    int x2 = 3;
    int x3 = 4;
    int result1 = SQUARE(x1);
    int result2 = SQUARE(x2);
    int result3 = SQUARE(x3);
    printf("Square of 2: %d\n", result1);
    printf("Square of 3: %d\n", result2);
    printf("Square of 4: %d\n", result3);
    return 0;
}