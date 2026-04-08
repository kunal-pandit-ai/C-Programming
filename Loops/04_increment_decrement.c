#include <stdio.h>

int main() {
    int i = 5;

    i =  i + 5; //10
    printf("%d\n", i);
    
    i += 5; //15
    printf("%d\n", i);

    i ++; //16
    printf("%d\n", i);

    i --; //15
    printf("%d\n", i);

    // ++i and i++ diferent

    // i++ print first then Increments
    // i++ first Increments then print

    printf("%d\n", ++i);  //16
    printf("%d\n", i++);  //16 nothing Increment


    return 0;
}