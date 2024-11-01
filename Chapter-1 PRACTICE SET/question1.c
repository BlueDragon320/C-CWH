#include <stdio.h>

int main() {
    int length = 3;
    int breadth = 6;

    printf("The area of rectangle: %d\n", length * breadth);

    int a, b;
    printf("Enter the value of length followed by breadth: ");
    scanf("%d %d", &a, &b);

    printf("The area of rectangle with input values: %d\n", a * b);

    return 0;
}
