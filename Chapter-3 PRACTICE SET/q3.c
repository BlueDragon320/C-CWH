#include <stdio.h>

int main(){
    int income, tax=0;
    printf("Enter income : ");
    scanf("%d", &income);
    if(income<250000){
        tax=0;
    }
    else if(income<=500000 && income>250000){
        tax = 0.05 * (income - 250000);
    }
    else if(income<=1000000 && income>500000){
        tax = 0.05 * (500000 - 250000) + 0.2* (income - 500000);
    }
    else{
        tax = 0.05 * (500000 -250000) + 0.2 * (100000 - 500000) + 0.3*(income - 1000000);
    }

    printf("Your subscription cost according to your income for the year is %d", tax);

    return 0;
}