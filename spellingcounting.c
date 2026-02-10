#include <stdio.h>
#include <string.h>

void calculator() {
    double num1, num2, result;
    char op;
    printf("\n=== Calculator Mode ===\n");
    printf("Enter operation ( +, -, *, / ): ");
    scanf(" %c", &op);
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);
    
    switch(op) {
        case '+': result = num1 + num2; break;
        case '-': result = num1 - num2; break;
        case '*': result = num1 * num2; break;
        case '/': 
            if(num2 != 0) result = num1 / num2;
            else {
                printf("Error: Division by zero\n");
                return;
            }
            break;
        default: 
            printf("Invalid operator\n");
            return;
    }
    printf("Result: %.2lf\n", result);
}

void spell_word() {
    char word[50];
    char *alphabet[] = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J", 
                         "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", 
                         "U", "V", "W", "X", "Y", "Z"};
    printf("\n=== Word Spelling Mode ===\n");
    printf("Enter a word (uppercase only): ");
    scanf("%s", word);
    
    printf("Spelling: ");
    for(int i = 0; word[i] != '\0'; i++) {
        if(word[i] >= 'A' && word[i] <= 'Z') {
            printf("%s ", alphabet[word[i] - 'A']);
        } else {
            printf("[Invalid Character] ");
        }
    }
    printf("\n");
}


int main() {
    int choice;
    do {
        printf("\n=== Multi-Function Machine ===\n");
        printf("1. Calculator\n");
        printf("2. Spell a Word\n");
        printf("3. Exit\n");
        printf("Enter your choice (1-3): ");
        scanf("%d", &choice);
        
        switch(choice) {
            case 1: calculator(); break;
            case 2: spell_word(); break;
            case 3: printf("Exiting program...\n"); break;
            default: printf("Invalid choice! Enter 1-3.\n");
        }
    } while(choice != 3);
    return 0;
}