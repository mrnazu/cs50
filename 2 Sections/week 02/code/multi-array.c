#include <stdio.h>

int main() {
    char tictactoe[3][3];
    tictactoe[0][0] = 'X';
    tictactoe[0][2] = 'X';
    tictactoe[1][1] = 'O';
    tictactoe[2][0] = 'O';

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%c ", tictactoe[i][j]);
        }
        printf("\n");
    }
    return 0;
}