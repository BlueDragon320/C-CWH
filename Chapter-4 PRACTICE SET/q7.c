#include <stdio.h>

int main(){
    int n=8, i, sum;
    for( int i = 1; i<=10; i++){
        printf("%d x %d = %d\n",n , i, n*i);
    }


    i = 1;
    while(i<=10){
        sum += n*i;
        i++;
    }
    printf("Total sum of %d x 1 to 10 is %d\n", n, sum);
    return 0;
}