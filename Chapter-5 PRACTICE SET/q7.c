#include <stdio.h>
int star(int);
int star(int i){
    for(i=0; i<3; i++){
        for(int j=0; j<2*i+1; j++){
            printf("*");
        }
        printf("\n");
    }
}
int main(){
    int i=0;
    star(i);
    return 0;
}