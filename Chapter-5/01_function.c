#include <stdio.h>

// Function prototype
int sum (int , int);
// Function definition
int sum (int x, int y){
    printf("The sum is %d\n", x+y);
    return x + y;
}


int main(){

    int a = 1;
    int b = 2;

    // int c = a + b;
    // printf("The sim id %d\n", c);

    sum (a,b);

    int a1 = 12;
    int b1 = 13;

    // int c1 = a1 + b1;
    // printf("The sum is %d\n", c1);
    sum (a1, b1);
    
    int a2 = 2;
    int b2 = 27;

    int c2 = a2 + b2;
    printf("The sum is %d\n", c2);
    sum (a1, b2);
    return 0;
}