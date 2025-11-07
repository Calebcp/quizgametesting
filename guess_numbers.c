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
	return 0;
}
