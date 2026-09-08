#include <stdio.h>

int main() {
    int secret = 7;
    int guess;
    int max_tries = 3;
    int won = 0;

    printf("Guess a number between 1 and 10.\n");

    for (int attempt = 1; attempt <= max_tries; attempt++) {
        printf("Attempt %d/%d. Enter your guess: ", attempt, max_tries);
        scanf("%d", &guess);

        if (guess < secret) {
            printf("Too low! Try again.\n");
        } else if (guess > secret) {
            printf("Too high! Try again.\n");
        } else {
            printf("Correct! You win!\n");
            won = 1;
            break;
        }
    }

    if (!won) {
        printf("You lose! The number was %d.\n", secret);
    }

    return 0;
}