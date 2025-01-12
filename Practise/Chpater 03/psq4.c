#include <stdio.h>

int main(){
    int a;
    printf("Enter number of days in a year: ");
    scanf("%d", &a);
    if(a>365){
        printf("Its a leap year");
    }else{
        printf("Not a leap year");
    }
    return 0;
}