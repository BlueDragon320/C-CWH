#include <stdio.h>

int main(){
    int a ,b, c;
    printf("Enter the tempertaure: ");
    scanf("%d", &a);
    b = (a*9/5)+32;
    printf("The converted temperature to F is %d", b);
    return 0;
}