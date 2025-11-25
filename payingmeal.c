#include <stdio.h>

int main()
{
	int meal;
	float tax;
	float tip;
	float total;
	printf("Enter the Total Meal Cost: ");
	scanf("%d", &meal);
	
	tax = meal * .05;
	tip = meal * .18;
	total = tax + tip + meal;
	printf("Tax: %.1f\n Tip: %.1f\n Total Cost of Meal: %.1f\n", tax, tip, total);
	
	return 0;
}