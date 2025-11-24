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

    printf("And here is an array sum problem too!\n");
    #include <stdio.h>

	int arr[5] = {1, 2, 3, 4, 5};
	int sum = 0;
	
	for (int i = 0; i < 5; i++)
	sum += arr[i];
	
	printf("The sum of the array elements %d %d %d %d %d \n", arr[0], arr[1], arr[2], arr[3], arr[4]);
	printf("Sum = %d\n", sum);
	
	return 0;
}

/*this only took me 3 minutes!! yes! getting better! */