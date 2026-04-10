#include <stdio.h>

// Function Prototype
int sum(int, int);

// function defination
int sum(int x, int y){
    printf("The sum is %d\n", x + y);
    return x+y;
}

int main()
{

    int a = 2, b = 4;
    sum(a,b);

    int a1 = 10, b1 = 20;
    sum(a1,b1);

    int a2 = 12, b2 = 87;
    int c = sum(a2,b2);
    printf("%d",c);  // Function Call

    return 0;
} 