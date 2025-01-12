#include <stdio.h>

int main(){
    int principal, years, rateofinterest, simpleinterest;
    printf("Enter the Principal amount, Years, Rate Of Interest: ");
    scanf("%d %d %d", &principal, &years, &rateofinterest);
    simpleinterest = principal*rateofinterest*years/100;
    printf("The simple interest is %d", simpleinterest);
    return 0;
}