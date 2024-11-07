#include <stdio.h>

int main(){
    int i = 72;
    int* j  = &i; // j is a pointer pointing to i(J is an integer pointer)
    int k = 67;
    printf("The address of i is %p\n", &i);
    printf("The address of i is %u\n", &i);
    printf("The address of k is %p\n", &i);

    printf("The value at address j is %d\n", *j); 
    printf("The value at address j is %d\n", (&i)); 
    printf("The value at address j is %d\n", *(&i)); 
    return 0;
}