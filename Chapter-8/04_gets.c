#include <stdio.h>

int main() {
    char st[10];
    printf("Enter a string: ");
    fgets(st, sizeof(st), stdin);  // Reads up to 99 characters + null terminator
    
    puts("You entered:");
    puts(st);

    return 0;
}
