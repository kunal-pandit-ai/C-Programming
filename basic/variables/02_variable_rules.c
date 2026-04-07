#include <stdio.h>

int main() {
    int a = 10;
    int b = 20;
    int c = a + b;     // c is assigned the value of a + b
    int cab = c * 2;   // cab is assigned the value of c multiplied by 2

    printf("The value of a is: %d\n", a);
    printf("The value of b is: %d\n", b);
    printf("The value of c (a + b) is: %d\n", c);
    printf("The value of cab (c * 2) is: %d\n", cab);

    return 0;
}