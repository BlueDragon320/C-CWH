#include <stdio.h>

int main(){
    int marks[] = {13,24,65,56};

    // int* ptr = &marks[0];
    int* ptr = marks;  // same as line 6

    for (int i = 0; i < 4; i++)
    {
        printf("The marks at index %d is %d\n", i, marks[i]);
        printf("The marks at index %d is %d\n", i, *ptr);
        ptr++;
    }
    

    return 0;
}