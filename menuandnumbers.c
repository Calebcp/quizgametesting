int main()
{
	float length, width, area;
	
	printf("Enter the length of the room in feet: \n");
	scanf("%f", &length);
	
	printf("Enter the width of the room in feet: \n");
	scanf("%f", &width);
	
	area = length * width;
	
	printf("The area of the room is %.2f square feet.\n", area);
	
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