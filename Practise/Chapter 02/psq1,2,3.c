// Q1. c
// Q2. float
#include <stdio.h>

int main(){
    int number, test;
    printf("Enter a number: ");
    scanf("%d", &number);
    if(number%97==0){
        printf("The number %d is divisible", number);
    }
    else{
        printf("The number %d is not divisible", number);
    }
    return 0;
}