#include <stdio.h>
#define QUARTER 25

int main(){
    int coins = 0;
    int change;
    scanf("%d", &change);
    coins += change / QUARTER;
    printf("%d", coins);
    return 0;
}