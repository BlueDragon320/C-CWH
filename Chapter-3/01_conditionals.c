#include <stdio.h>

int main(){
    int age = 12;

    if(age>10){
        printf("Your age is greater than 10");
    }

    if(age%5==0){
        printf("We are inside if\n");
        printf("Your age is greater than 12\n");
    }

    return 0;
}