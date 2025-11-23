
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
int main()
{
	int playerChoice, computerChoice;
	srand(time(0));
	
	printf("THis is the fame rock-paper-scissors!\n");
	printf("Choosse: 1 Rock, 2 Paper, or 3 Scissors\n");
	printf("Enter your choice 1-3\n");
	scanf("$d", &playerChoice);
	
	if (playerChoice < 1 || playerChoice > 3){
        printf("Invalid choice! only 1-3 allowed.\n");
        return 1;

    }
    computerChoice
}
