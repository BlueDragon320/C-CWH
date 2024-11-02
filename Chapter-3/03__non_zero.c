#include <stdio.h>

int main(){
    int a = 320;
    
    if(1){
        printf("This is executed\n");
    }
    if(234){
    printf("This is also executed\n");
    }
    if('c'){
        printf("This is a character still gets executed\n");
    }
    if(0){
        printf("I am zero and I'm not exectured\n");
    }

    return 0;
}