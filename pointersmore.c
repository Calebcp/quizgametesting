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