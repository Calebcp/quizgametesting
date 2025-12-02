int main()
{
	float length, width, area;
	
	printf("Enter the length of the room in feet: \n");
	scanf("%f", &length);
	
	printf("Enter the width of the room in feet: \n");
	scanf("%f", &width);
	
	area = length * width;
	
	printf("The area of the room is %.2f square feet.\n", area);
	
    printf("Do you want to calculate another room? (y/n): \n");
	return 0;
}

#include <stdio.h>

int main()
{
	while (1)
	{
		int a, b, c, min, mid, max;
	
	printf("Enter three numbers, and automatically have them sorted from smallest to largest: \n");
	
	printf("Enter the first number: \n");
	scanf("%d", &a);
	
	printf("Enter the second number: \n");
	scanf("%d", &b);
	
	printf("Enter the third number: \n");
	scanf("%d", &c);
	
	min = a < b ? (a < c ? a : c) : (b < c ? b : c);
	
	max = a > b ? (a > c ? a : c) : (b > c ? b : c);
	
	mid = a + b + c - min - max;
	
	printf("%d %d %d\n\n", min, mid, max);
	
	char again;
	printf("Press a key and enter for another round or n to quit: \n");
	scanf(" %c", &again);
	if (again == 'n' || again == 'N') break;
	}
	
	return 0;
	
}



#include <stdio.h>

int main()
{
	while (1)
	{
		float tax, tip, meal, total;
		
		printf("Enter the cost of the meal: \n");
		scanf("%f", &meal);
		
		tax = 5.00;
		tip = meal * .18;
		total = tax + tip + meal;
		
		printf("The tax is %.2f and the tip is %.2f, making the total %.2f\n\n", tax, tip, total);
				
		char again;
		printf("Type yes (y) if you want to calculate another meal or no (n): \n");
		scanf(" %c", &again);
		if (again == 'n' || again == 'N') break;
	}
	return 0;
}

#include <stdio.h>

int main()
{
	int a, b, sum;
	
	printf("Input two integers with comma in between to get their sum: \n");
	scanf("%d, %d", &a, &b);
	
	sum = a + b;
	
	if (a < 0 || b < 0 || a + b < 0)
	{
		printf("(%d) + (%d) = (%d)", a, b, sum);
	}else{
		printf("%d + %d = %d", a, b, sum);
	}
	return 0;
}

//more exercises
#include <stdio.h>

int main()
{
	int a, b, c;
	
	printf("Enter the size of each of your Triangles sides: \n");
	printf("Enter First Side: ");
	if (scanf("%d", &a) !=1)
	{
		printf("Error, must be a number!");
		return 1;
	}

	printf("Enter Second Side: ");
	if (scanf("%d", & b) !=1)
	{
		printf("Error, must be a number!");
		return 1;
	}

	printf("Enter Third Side: ");
	if (scanf("%d", &c) !=1)
	{
		printf("Error, must be a number!");
		return 1;
	}
	
	if (a == b && b == c)
	{
	  printf("That's an Equilateral Triangle!");
	}else if ( a == b || b == c || c == a){
		printf("That's a Isoceles Triangle!");
	}else {
		printf("That's a Scalene Triangle!");
	}
	
	return 0;
}
