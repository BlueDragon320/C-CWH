#include <stdio.h>

int main(){
    int a, b, c, average;
    printf("Enter the marks of 3 subjects seperated by space: ");
    scanf("%d %d %d", &a, &b, &c);
    average = (a+b+c)/3;
    if(average>=40 && a>=33 && b>=33 && c>=33){
        printf("The students has cleared all exams with %d %d %d marks", a,b,c);
    }
    else{
        printf("Sorry buddy you failed");
    }

    return 0;
}