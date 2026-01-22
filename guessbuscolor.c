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

    return 0;
}