#include <stdio.h>

int main(){
    int size = 7;
   
    for (int i = 0; i <= size/2; i++){
        for (int j = 0; j < size; j++){
            printf("");
        }
        printf("*");
    for (int j = 0; j < size - (2*i + 2); j++){
        printf(" ");
    }
    }
    return 0
}

/*more work to do one this one*/