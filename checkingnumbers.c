#include <stdio.h>

int main ()
{
	int num;
	
	printf("Enter a number to check if it is odd or even:\n");
	scanf("%d", &num);
	
	if (num % 2 == 0)
	{
		printf("The number is even!\n");
	}else{
		printf("The number is odd!\n");
	}
	return 0;
}

/*wrote this in under two minutes and a half
ive been so busy but have to be faster*/