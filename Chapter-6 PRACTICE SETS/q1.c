#include <stdio.h>
int main(){
    int a = 69;
    int* b = &a;

    printf("Address of a is %p", b); 
    return 0;
}