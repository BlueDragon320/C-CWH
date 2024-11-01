#include <stdio.h>

int main(){
    float principal=100, number_of_years=12, rate_of_interest=10;
    printf("The simple interest of %f for %f at %f is: %f", principal, number_of_years, rate_of_interest, (principal*rate_of_interest*number_of_years)/100);
    return 0;
}