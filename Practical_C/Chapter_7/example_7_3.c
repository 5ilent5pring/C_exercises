/**************************************************************************
 * guess - A simple guessing game.                                        *
 * Usage:                                                                 *
 *      guess                                                             *
 *              A random number is chosen between 1 and 100,              *
 *              The player is given a 5 sets of bounds                    *
 *              If the player chooses the correct number, he/she wins     *
 *              Otherwise, the bounds are adjusted to reflect             *
 *              the player's guess and the game continues                 *
 *              until the limit of 5.                                     *
 *                                                                        *
 **************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int random_number;
int guess_limit = 5;
int guess;

int main() {
    /*if you dont use this the random number does not change after first execution*/
    srand(time(NULL));
    random_number = rand() % 100 +1;
    while (guess_limit > 0) {
        printf("Guess: ");
        scanf("%d", &guess);
        if (guess == random_number) {
            printf("Bingo!\n");
            break;
        } else if (guess > random_number) {
            printf("Go down..");
        } else {
            printf("Go up...");
        }
        guess_limit--;
    }
    if (guess_limit == 0) {
        printf("Sorry, no tries left..\n");
        printf("The number was: %d\n", random_number);
    }
    return 0;
}
