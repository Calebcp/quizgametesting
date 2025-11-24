#include <stdio.h>

int main()
{
	int a, b, c;
	
	printf("Enter three numbers, find out which one is biggest!\n");
	scanf("%d %d %d", &a, &b, &c);
	
	if (a >= b && a >= c){
		printf("The number %d is the largest!", a);
	}else if (b >= c){
		printf("The number %d is the largest!", b);
		
	}else{
		printf("The number %d is the largest!", c);
	}
	printf("ANd here below lets count to ten for fun!\n");
    for (int i = 0; i <= 10; i++){
		printf("%d\n", i);
	}
	return 0;
}

/*this only took me 3 minutes!! yes! getting better! */