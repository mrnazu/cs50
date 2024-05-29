#include <stdio.h>

#define SPEED_OF_LIGHT 299792458

int main() {
    int distance = SPEED_OF_LIGHT * 10; // instead of using 299792458 directly
    return 0;
}

/*
In this example, SPEED_OF_LIGHT is defined as a macro with the value 299792458. 
I can then use this macro throughout my code, making it easier to read and maintain.
*/