#include <stdio.h>

int main(){
    int a, product;
    printf("Enter a number to find its factorial: ");
    scanf("%d", &a);
    product = 1;

    for (int i = 1; i <= a; i++) 
    {
        product *= i;
    }

    printf("The factorial of %d is %d\n", a, product); 
    return 0;
}
