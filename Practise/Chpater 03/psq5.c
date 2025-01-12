#include <stdio.h>

int main(){
    char ch = 'a';
    printf("The value of character is %d", ch);
    if (ch <123 || ch > 96)
    {
       printf("Character is lowercase\n");
    }else{
        printf("Character is uppercase");
    }
    

    return 0;
}