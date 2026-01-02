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

void add_element(int *arr, int *size, int value) {  
    if (*size < MAX_SIZE) {  
        arr[*size] = value;  
        (*size)++;  
    }  
}  
  
int delete_all(int *arr, int *size, int value) {  
    int found = 0, j = 0;  
    for (int i = 0; i < *size; i++) {  
        if (arr[i] == value) found = 1;  
        else arr[j++] = arr[i];  
    }  
    *size = j;  
    return found;  
}  
  
void sort_array(int *arr, int size) {  
    for (int i = 0; i < size - 1; i++) {  
        for (int j = i + 1; j < size; j++) {  
            if (arr[j] < arr[i]) {  
                int t = arr[i];  
                arr[i] = arr[j];  
                arr[j] = t;  
            }  
        }  
    }  
}  
  
void reverse_array(int *arr, int size) {  
    for (int i = 0, j = size - 1; i < j; i++, j--) {  
        int t = arr[i];  
        arr[i] = arr[j];  
        arr[j] = t;  
    }  
}  
  
void display_array(int *arr, int size) {  
    printf("Array elements:");  
    if (size > 0) printf(" ");  
    for (int i = 0; i < size; i++) {  
        printf("%d", arr[i]);  
        if (i < size - 1) printf(" ");  
    }  
    printf("\n");  
}  