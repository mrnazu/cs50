#include <stdio.h>

int main() {
    int age;

    do {
        printf("Enter your age: ");
        scanf("%d", &age);
    } while (age <= 0 || age > 100);

    printf("You are %d years old.\n", age);

    return 0;
}