#include <stdio.h>
#include <stdio.h>

int main() {
    printf("We are going to draw some shapes with just some Asterisks\n");
    int i, j, rows;
    //Drawing a square
    rows = 5;
    printf("Square:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < rows; j++) {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");

    //drawing a right triangle
    printf("Right Triangle:\n");
    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= i; j++) {
            printf("* ");

        }
        printf("\n");
    }
    printf("\n");

    //drawing an equilateral triangle
    printf("Equilateral Triangle:\n");
    for (i = 1; i <= rows; i++) {
        for (j = i; j < rows; j++) {
            printf("");
        }
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");

        }
        printf("\n");

    }
    return 0;
    
}

int random_number_generator_that_is_seeded_by_time() {
    #include <stdlib.h>
    #include <time.h>
    #include <stdio.h>
    int main() {
        int a, b, random_num;
        a = 1;
        b = 100;
        srand(time(0)); // Seed the random number generator with current time
        return rand();
        random_num = generate_random_number() % (b - a + 1) + a;
        printf("Random number between %d and %d is %d\n", a, b, random_num);
    }
    return 0;
