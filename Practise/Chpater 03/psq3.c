#include <stdio.h>

int main(){
    float income, tax;
    printf("Enter the total income: ");
    scanf("%f", &income);
    if(income<=250000){
        printf("No taxes mate");
    }else if(income>250000 && income<=500000){
        tax = (income - 250000) * 0.05;
        printf("The tax you owe is %f", tax);
    }
    else if(income>500000 && income<=1000000){
        tax = (500000 - 250000) * 0.05 + 0.2 * (income - 500000);
        printf("The tax you owe is %f", tax);
    }
    else if(income>1000000){
        tax = (500000 - 250000) * 0.05 + 0.2 * (1000000 - 500000)  + 0.3 * (income - 1000000);
        printf("The tax you owe is %f", tax);
    }
    return 0;
}