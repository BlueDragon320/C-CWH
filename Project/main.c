#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int a;
    // Seed the random number generator with the current time
    srand(time(0));

    // Generate a random number between 1 and 100
    int random_number = (rand() % 100) + 1;
    int no_of_guess = 0;
    int guessed;

    do {
        printf("Guess the number: ");
        scanf("%d", &guessed);

        no_of_guess++; // Increment the guess count each time

        if (guessed > random_number) {
            printf("Guessed number is high, try lower\n");
        } else if (guessed < random_number) {
            printf("Guessed number is low, try higher\n");
        }
        else{
            printf("Congrats you guessed it right");
        }
    } while (guessed != random_number);

    printf("You guessed the number in %d guesses\n", no_of_guess);

    return 0;
}
