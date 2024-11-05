#include <stdio.h>

int main(){
    int a = 4;
    printf("%d %d %d \n", a, ++a, a++);
    //  6 6 4 This is what we get, becuase its printed from right to left in this case
    // 4 5 5 expected
    return 0;
}