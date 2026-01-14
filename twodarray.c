#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	
	int nums[3][2] = {
	{1, 3},
	{5, 7},
	{9, 8}
	};
	int i, j;
	for (i = 0; i < 3; i++){
		for (j = 0; j < 2; j++){
			printf("%d,", nums[i][j]);
		}
		printf("\n");
	}
	return 0;
}