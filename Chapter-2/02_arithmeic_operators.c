#include <stdio.h>

int main(){
    int a = 5;
    int b = 3;
    int c = a + b;
    printf("The value of a is %d and value of b is %d and sum is %d\n", a, b, c);
    printf("The remainder when %d is divided by %d is: %d", a, b, a%b);
    return 0;
}