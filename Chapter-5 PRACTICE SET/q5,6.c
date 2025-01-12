// Q5. 4, 5, 5 or 6 6 4
#include <stdio.h>
int sum_natural(int);
int sum_natural(int n){
    if(n==1){
        return 1;
    }
    return sum(n-1) + n;
}
int main(){
    printf("The sum of first 5 natural number is %d", sum_natural(5));
    return 0;
}