//  3*x/y-z+k 

//  where
//     x=2
//     z=3
//     y=3
//     k=1

// at first we multiply 3*2 that gives 6/3 will give 2-3 thats -1+1 is 0 

// So answer should be 0


#include <stdio.h>

int main(){
    int x=2, y=3, z=3, k=1;
    int a = 3*x/y-z+k;
    printf("%d", a);
    return 0;
}