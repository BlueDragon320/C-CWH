#include <stdio.h>
int sum_natural(int);

int sum_natural(int n){
    // sum(n) = 1+2+3+4+5+ ... n-1+n;
    if (n==1){
        return 1;
    }
    return sum_natural(n-1)+n;
}
int main(){
    printf("The sum of first five natural number is %d", sum_natural(5));
    return 0;
}