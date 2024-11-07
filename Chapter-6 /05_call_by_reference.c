
#include <stdio.h>
int sum (int*, int*);
// sum should chagne the value of x
int sum(int* a, int* b ){
    *a = 6;
    return *a + *b;
}

int main(){
    int x = 1, y = 6;
    printf("The sum if 1 and 6 is %d\n", sum(&x,&y));
    printf("The value of x id %d", x);
    return 0;
}