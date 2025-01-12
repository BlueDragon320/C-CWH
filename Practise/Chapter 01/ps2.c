#include <stdio.h>

int main(){
    int a, b, c, d;
    printf("Enter the radius of circle: ");
    scanf("%d", &a);
    printf("Enter the height of circle: ");
    scanf("%d", &c);
    b = 3.14*a;
    d = 3.14*a*a*c;
    printf("The area of Circle is %d\n", b);
    printf("The Volume of Circle is %d", d);

    return 0;
}