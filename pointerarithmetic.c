#include <stdio.h>  
  
int main() {  
    int r, c;  
    printf("Enter number of rows and columns: \n");  
    scanf("%d %d", &r, &c);  
  
    int a[10][10];  
  
    printf("Enter the array elements (%d x %d):\n", r, c);  
    for (int i = 0; i < r; i++) {  
        for (int j = 0; j < c; j++) {  
            scanf("%d", &a[i][j]);  
        }  
    }  
  
    printf("\n");  
    printf("Modified array (all odd numbers):\n");  
  
    for (int i = 0; i < r; i++) {  
        for (int j = 0; j < c; j++) {  
            if (a[i][j] % 2 == 0) a[i][j]++;  
            printf("%d", a[i][j]);  
            if (j < c - 1) printf(" ");  
        }  
        printf("\n");  
    }  
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
    return 0;  
}  

#include <stdio.h>  
  
int main() {  
    int a, b, c;  
    int min, max, mid;  
  
    printf("Enter the first number: \n");  
    if (scanf("%d", &a) != 1) {  
        printf("Invalid input!\n");  
        return 1;   
    }  
  
    printf("Enter the second number: \n");  
    if (scanf("%d", &b) != 1) {  
        printf("Invalid input!\n");  
        return 1;  
    }  
  
    printf("Enter the third number: \n");  
    if (scanf("%d", &c) != 1) {  
        printf("Invalid input!\n");  
        return 1;  
    }  
  
    min = (a < b) ? ((a < c) ? a : c) : ((b < c) ? b : c);  
    max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);  
    mid = a + b + c - min - max;  
  
    printf("The numbers in sorted order are: %d %d %d.\n", min, mid, max);  
  printf("Enter the second number: \n");  
    if (scanf("%d", &b) != 1) {  
        printf("Invalid input!\n");  
        return 1;  
    }  
  
    printf("Enter the third number: \n");  
    if (scanf("%d", &c) != 1) {  
        printf("Invalid input!\n");  
        return 1;  
    }  
  
    min = (a < b) ? ((a < c) ? a : c) : ((b < c) ? b : c);  
    max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);  
    mid = a + b + c - min - max;  
    return 0;  
}

