#include <stdio.h>

int main() {
    int secretNumber = 7;
    int guess;
    int attempt = 1;
    int won = 0;

    printf("Guess a number between 1 and 10.\n");

    while (attempt <= 3) {
        printf("Attempt %d/3.\n", attempt);
        printf("Enter your guess: ");
        scanf("%d", &guess);

        if (guess == secretNumber) {
            printf("Correct! You win!\n");
            won = 1;
            break;
        } else if (guess < secretNumber) {
            printf("Too low! Try again.\n");
        } else {
            printf("Too high! Try again.\n");
        }

        attempt++;
    }

    if (won == 0) {
        printf("You lose! The secret number was %d.\n", secretNumber);
    }

    return 0;
}