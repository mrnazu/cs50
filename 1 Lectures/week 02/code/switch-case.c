#include <stdio.h>

int main()
{
    int day = 3;
    switch (day)
    {
    case 1:
        printf("day is Monday\n");
        break;
    case 2:
        printf("day is Tuesday\n");
        break;
    case 3:
        printf("day is Wednesday\n");
        break;
    default:
        printf("Invalid day\n");
        break;
    }
}
