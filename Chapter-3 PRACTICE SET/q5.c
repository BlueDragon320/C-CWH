#include <stdio.h>

int main(){
    char ch;
    printf("Enter the character : ");
    scanf("%c", &ch);
    printf("The value of character is %d \n", ch);

    if (ch >= 97 && ch<=122){
        printf("This character is lowercase\n");
    }
    else{
        printf("This character is not low3er case");
    }

    return 0;
}