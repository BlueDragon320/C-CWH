// Q1. I am not 11
// Q2.
#include <stdio.h>
int main(){
    int sub1, sub2, sub3, final, final1;
    printf("Enter the marks one by one : \n");
    scanf("%d %d %d", &sub1, &sub2, &sub3);

    if(sub1<33 || sub2<33 || sub3<33){
        printf("You have failed");
    }
    else if(((sub1+sub2+sub3)/3) < 40){
        printf("you are failed due to less percentage\n");
    }
    else{
        printf("You have passed");
    }
    return 0;
}