#include <stdio.h>

void bad(int n);

int main(void){
    int n = 0;
    bad(n);
}

void bad(int i){
    printf("%d\n", i);
    i++;
    bad(i);
}