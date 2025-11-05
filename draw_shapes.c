#include <stdio.h>
#include <stdio.h>

int main() {
    printf("We are going to draw some shapes with just some Asterisks\n");
    int i, j, rows;
    //Draw a square
    rows = 5;
    printf("Square:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < rows; j++) {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}