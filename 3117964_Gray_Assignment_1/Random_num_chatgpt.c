#include <stdio.h> // includes input/output functions


int main() { // starts the main function
    int secretNumber = 7; // sets the secret number
    int guess; // stores the user's guess
    int attempt = 1; // tracks the current attempt
    int won = 0; // tracks whether the user won
    printf("Guess a number between 1 and 10.\n"); // prompts the user
    
    while (attempt <= 3) { // allows up to 3 attempts
        printf("Attempt %d/3.\n", attempt); // shows the attempt number
        printf("Enter your guess: "); // asks for a guess
        scanf("%d", &guess); // reads the user's guess
        if (guess == secretNumber) { // checks if the guess is correct
            printf("Correct! You win!\n"); // tells the user they won
            won = 1; // records that the user won
            break; // stops the loop
        } else if (guess < secretNumber) { // checks if the guess is too low
            printf("Too low! Try again.\n"); // tells the user
        } else { // runs if the guess is too high
            printf("Too high! Try again.\n"); // tells the user
        }
        attempt++; // next attempt
    }
    
    if (won == 0) { // checks if the user lost
        printf("You lose! The secret number was %d.\n", secretNumber); // shows the lose message
    }
    
    return 0; // ends the program 
}   //  kill the main function
