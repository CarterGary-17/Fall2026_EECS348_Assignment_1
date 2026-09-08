//// EECS 348 Assignment 1 - Number Guessing Game 
// claude code


// A C program that picks a secret number between 1 and 10 and gives the
// user up to 3 tries to guess it, telling them if they're too high, too
// low, or correct.

// Input: none (reads guesses interactively from the keyboard via scanf) -user input in CLI
// Output: terminal prompts and feedback for the user, plus a final win/lose message

// Collaborators: None 
// Other sources: None 
// Author: Carter Gray
// Creation date: 8/9/2026


#include <stdio.h> // include standard I/O library for printf and scanf

int main() { // start of main function, program execution begins here
    int SECRET = 7; // fixed secret number the user must guess
    int guess; // variable to store the user's guess each attempt
    int MAX_TRIES = 3; // maximum number of guesses allowed
    int won = 0; // flag to track if the user has won (0 = not yet, 1 = won)

    printf("Guess a number between 1 and 10.\n"); // print initial instructions to the user

    for (int attempt = 1; attempt <= MAX_TRIES; attempt++) { // loop from attempt 1 up to max_tries
        printf("Attempt %d/%d. Enter your guess: ", attempt, MAX_TRIES); // show current attempt number and prompt for input
        scanf("%d", &guess); // read the user's guess into the guess variable

        if (guess < SECRET) { // check if the guess is lower than the secret number
            printf("Too low! Try again.\n"); // tell the user their guess was too low
        } else if (guess > SECRET) { // check if the guess is higher than the secret number
            printf("Too high! Try again.\n"); // tell the user their guess was too high
        } else { // otherwise, the guess must be correct
            printf("Correct! You win!\n"); // tell the user they are guessing correctly
            won = 1; // set the won flag to 1 to indicate success
            break; // kill the loop immediately  
        }
    }

    if (!won) { //  check if the user never guessed correctly
        printf("You lose! The number was %d.\n", SECRET); // tell the secret number and tell the user they lost
    }

    return 0; // program ended successfully
}