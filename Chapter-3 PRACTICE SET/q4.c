#include <stdio.h>

int main(){
    int a;
    printf("Enter number days in the year : ");
    scanf("%d", &a);

    if(a==366){
        printf("It is a leap year");
    }
    else{
        printf("It's not a leap year");
    }

    return 0;
}