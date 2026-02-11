#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>

void to_lower(char *str) {
    for (int i = 0; str[i]; i++) {
        str[i] = tolower(str[i]);
    }
}

int is_valid_guess(char *guess, char **colors, int total) {
    for (int i = 0; i < total; i++) {
        if (strcmp(guess, colors[i]) == 0) return 1;
    }
    return 0;
}

int main() {
    char *colors[] = {"red", "blue", "green", "yellow", "black", "white"};
    char *hints[] = {
        "Warm-toned (like fire!)",
        "Cool-toned (like the sky!)",
        "Cool-toned (like grass!)",
        "Warm-toned (like school buses!)",
        "No light reflection (total darkness!)",
        "Reflects all light (like snow!)"
    };
    char *praise[] = {"Amazing!", "Perfect!", "Spot on!"};
    char *encouragement[] = {"Nice try!", "Almost there!", "Don't give up!"};
    int total_colors = 6, total_praise = 3, total_enc = 3;
    char guess[20], hint_choice[5];
    int attempts = 3, correct = 0, attempts_used = 0, hint_used = 0;

    srand(time(0));
    int rand_color = rand() % total_colors;
    int rand_praise = rand() % total_praise;
    int rand_enc = rand() % total_enc;
    char *target = colors[rand_color];
    char *target_hint = hints[rand_color];

    printf("=========================================\n");
    printf("        BUS COLOR GUESSING GAME          \n");
    printf("=========================================\n");
    printf("🎯 Guess the bus color (3 attempts max!)\n");
    printf("🎨 Options: red | blue | green | yellow | black | white\n");
    printf("💡 Type 'hint' for a clue (costs 1 attempt!)\n\n");

    while (attempts > 0 && !correct) {
        printf("[Attempt %d/%d] Enter your guess: ", 3 - attempts + 1, 3);
        scanf("%19s", guess);
        to_lower(guess);

        if (strcmp(guess, "hint") == 0) {
            if (hint_used) {
                printf("❌ You already used your hint!\n");
                continue;
            }
            attempts--;
            hint_used = 1;
            printf("✨ HINT: %s (1 attempt deducted!)\n", target_hint);
            printf("⚠️ Remaining attempts: %d\n", attempts);
            continue;
        }

        attempts_used++;
        if (!is_valid_guess(guess, colors, total_colors)) {
            printf("❌ Invalid! Only use listed colors or 'hint'\n");
            attempts_used--;
            continue;
        }

        if (strcmp(guess, target) == 0) {
            correct = 1;
            printf("\n🎉 %s You guessed it in %d attempt(s)! \n", praise[rand_praise], attempts_used);
            printf("🎊 The bus is indeed %s! \n", target);
        } else {
            attempts--;
            if (attempts > 0) {
                printf("⚠️ %s Wrong guess - %d attempt(s) left!\n", encouragement[rand_enc], attempts);
            }
        }
    }

    if (!correct) {
        printf("\n💀 Game Over! All attempts used (%d total)\n", attempts_used);
        printf("🔍 The correct bus color was: %s \n", target);
        printf("💡 Tip: Try focusing on common bus colors next time!\n");
    }

    printf("\n=========================================\n");
    printf("      Thanks for playing! See you soon!  \n");
    printf("=========================================\n");

    return 0;
}