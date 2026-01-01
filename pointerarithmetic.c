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
  
    return 0;  
}  