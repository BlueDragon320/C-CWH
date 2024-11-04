#include <stdio.h>

int main(){
        int a, product;
    printf("Enter a number to find its factorial: ");
    scanf("%d", &a);
    product = 1;
    int i = 1;
    while(i<=a) {
        product *= i;
        i++;
    }

    printf("The factorial of %d is %d\n", a, product); 
    return 0;
    return 0;
}