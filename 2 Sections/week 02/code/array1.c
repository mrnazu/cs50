#include <stdio.h>

int main(){
    int arrName[3];
    arrName[0] = 12;
    arrName[1] = 13;
    arrName[2] = 14;

    for(int i = 0; i <= 2; i++){
        printf("%d\t", arrName[i]);
    }
}