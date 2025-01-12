#include <stdio.h>
float average(int, int, int);
float average (int a, int b, int c){
    return (a+b+c)/3;
}

int main(){
    printf("The average of a, b, c is %.2f", average(1,2,3));
    return 0;
}