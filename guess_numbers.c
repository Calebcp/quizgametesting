#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int a , b, c, random_number;
	a =1;
	b =50;
	srand(time(0));
	
	random_number = rand() % (b-a+1) + a;
	printf("Guess the Correct number between 1-50!\n I will tell you if you are too high or too low!\n");
	printf("Random number between %d and %d is %d\n", a, b, random_number);
	
	int game_over = 0;
    while (game_over == 0) {
	printf("Enter your guess('0' to Quit): ");
	scanf("%d", &c);
	
	if (c == 0){
		printf("Thanks for playing! See you next time!\n");
		game_over = 1;
		continue;
	}
	
	if (c>50 || c<1) {
		printf("Not within 1-50!\n");
	}
	else if (c==random_number) {
		printf("Correct!\n");
		game_over = 1;
	}
	else if (c > random_number - 3 && c < random_number + 3) {
            printf("You are Very close!\n");
    }
	
	else if (c < random_number){
		if (random_number - 10){
			printf("Too Low\n");
		}else {
			printf("You are Close!\n");
		}
	}
	else if (c > random_number){
		if (random_number + 10){
			printf("Too High\n");
		}else {
			printf("You are close!\n");
		}
		
	}

}
	int final_guess;
	printf("The correct number was %d\n", random_number);
	



	return 0;
}

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char input[1000], num_part[1000], exp_sign[2], exp_num[100];
    char integer_part[1000], decimal_part[1000];
    int exp, int_len, dec_len, total_len, shift;
    int i, j, k;

    fgets(input, sizeof(input), stdin);
    sscanf(input, "%s %*c %s %s", num_part, exp_sign, exp_num);

    char *dot = strchr(num_part, '.');
    if (dot) {
        strncpy(integer_part, num_part, dot - num_part);
        integer_part[dot - num_part] = '\0';
        strcpy(decimal_part, dot + 1);
    } else {
        strcpy(integer_part, num_part);
        decimal_part[0] = '\0';
    }

    exp = atoi(exp_num);
    if (strcmp(exp_sign, "-") == 0) exp = -exp;

    int_len = strlen(integer_part);
    dec_len = strlen(decimal_part);
    shift = int_len - 1 + exp;

    char full_num[10000] = {0};
    strcat(full_num, integer_part);
    strcat(full_num, decimal_part);
    total_len = strlen(full_num);

    char result[10000] = {0};
    if (shift >= 0) {
        if (shift + 1 >= total_len) {
            strcpy(result, full_num);
            for (i = total_len; i <= shift; i++) strcat(result, "0");
            strcat(result, ".00000000");
        } else {
            strncpy(result, full_num, shift + 1);
            result[shift + 1] = '.';
            strcat(result, full_num + shift + 1);
        }
    } else {
        strcpy(result, "0.");
        for (i = 0; i < -shift - 1; i++) strcat(result, "0");
        strcat(result, full_num);
    }

    char *dot_res = strchr(result, '.');
    char final_int[10000], final_dec[100] = "00000000";
    if (dot_res) {
        strncpy(final_int, result, dot_res - result);
        final_int[dot_res - result] = '\0';
        strncpy(final_dec, dot_res + 1, 8);
        final_dec[8] = '\0';
    } else {
        strcpy(final_int, result);
    }

    printf("%s.%s\n", final_int, final_dec);

    return 0;
}