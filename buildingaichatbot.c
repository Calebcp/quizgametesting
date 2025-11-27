#include <stdio.h>

int main()
{
	char name[50];
	
 	printf("Hello, what is your name: ");
 	scanf("%s", &name);
 	
 	printf("Hello there, %s!", name);
 	
 	return 0;
}

#include <stdio.h>

int main()
{
	char name[50];
	char response[50];
	int a, b;
 	printf("Hello, what is your name: ");
 	scanf("%s", &name);
 	
 	printf("Hello there, %s!\n", name);
 	
 	printf("What would you like today? Type A) To do some math or Type B) to exit\n");
	scanf("%s", &response);
 	
 	if (response == "A" || response == "a"){
 		printf("Lets do some math! Type two numbers!\n");
 		scanf("%d %d", &a, &b);
 		int sum = a + b;
 		printf("%d + %d = %d", a, b, sum);
	 }else if (response == "B" || response == "B"){
	 	printf("You have been exited out of the program, see you next time!\n");
	 }else{
	 	printf("Error! Response can only be A or B");
	 }
 	
 	return 0;
}