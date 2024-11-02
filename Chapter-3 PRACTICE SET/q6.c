#include <stdio.h>

int main(){
    int a=10, b=90, c=60, d=40;
    if(a>b && a>c && a>d){
        printf("%d is greater than %d, %d, %d", a, c, b, d);
    }
    else if(b>c && b>d && b>a){
        printf("%d is greater than %d, %d, %d", b, a, d, c);
    }
    else if(c>a && c>b && c>d){
        printf("%d is greater than %d, %d, %d", c, a, b, d);
    }
    else if(d>a && d>c && d>b){
        printf("%d is greater than %d, %d, %d", d, a, b, c);
    }

    return 0;
}