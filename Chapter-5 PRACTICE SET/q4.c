#include <stdio.h>

// fibonacci (n) = finbonacci(n-1) + fibonacci(n-2)
int fibonacci (int);
int fibonacci(int n){
    if (n == 1 || n == 2){
        return n - 1; 
    }
    return fibonacci(n-1) + fibonacci(n-2);
}

int main(){
    int n = 6;
    printf("The value of fibonacci series at %d is %d", n, fibonacci(n));
    return 0;
}