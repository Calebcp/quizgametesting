#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main() {

    srand(time(0));
    int random_idx = rand() % total_colors;
    char *target_color = colors[random_idx];

    char *colors[] = {"red", "blue", "green", "yellow", "black", "white"};
    int total_colors = 6;
    char guess[20];
    
    

    printf("Guess the color of the bus!\n");
    printf("Possible colors: red, blue, green, yellow, black, white\n");
    printf("Enter your guess: ");
    scanf("%s", guess);

    if (strcmp(guess, target_color) == 0) {
        printf("Congratulations! You guessed the right color!\n");
    } else {
        printf("Wrong guess! The bus color is %s.\n", target_color);
    }

     while (attempts > 0 && !correct) {
        printf("Attempt %d/%d - Enter your guess: ", 4 - attempts, 3);
        scanf("%19s", guess);
        to_lower(guess);

        if (!is_valid_guess(guess, colors, total_colors)) {
            printf("Invalid input! Choose only from the listed colors.\n");
            continue;
        }

        if (strcmp(guess, target_color) == 0) {
            correct = 1;
            printf("\n🎉 Congratulations! You guessed correctly!\n");
        } else {
            attempts--;
            if (attempts > 0) {
                printf("❌ Wrong! You have %d attempt(s) left.\n", attempts);
            }
        }
    }

    if (!correct) {
        printf("\n💥 Game Over! The bus color was %s.\n", target_color);
    }

    return 0;
}