#include <stdio.h>

void change(int* a);
void change(int* a){
    *a = *a * 20;
}

int main(){
    int x = 45;
    printf("The value of x is %d\n", x);
    change(&x);
    printf("The value of x is %d\n", x);

    return 0;
}