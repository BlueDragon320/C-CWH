#include <stdio.h>

int main(){
    int a, b ,c;
    printf("Enter the height and width of the rectangle: ");
    scanf("%d %d", &a, &b);
    c = a * b;
    printf("The Area of the Rectangle is %d", c);
    return 0;
}