#include <stdio.h>

int main(){
    int i=1, sum=0;
    do {
        sum += i;
        i++;
    } while(i<=10);
    printf(
        "Sum of all previous numbers is %d", sum
        );
    return 0;
}