#include <stdio.h>
float tempr ( float a ){
    return (a * 9.0/5) + 32;
}
int main(){
    float celsius = 10;
    float f = tempr(celsius);
    printf("Temperature of %.2f C in F is %.2f", celsius, f);

    return 0;
}