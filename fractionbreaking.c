#include <stdio.h>  
#include <stdlib.h>  
  
int gcd(int a, int b) {  
    a = abs(a);  
    b = abs(b);  
    while (b != 0) {  
        int temp = b;  
        b = a % b;  
        a = temp;  
    }  
    return a;  
}  
  
void reduceFraction(int *num, int *den) {  
    if (*num == 0) {  
        *den = 1;  
        return;  
    }  
    int commonDivisor = gcd(*num, *den);  
    *num /= commonDivisor;  
    *den /= commonDivisor;  
    if (*den < 0) {  
        *num *= -1;  
        *den *= -1;  
    }  
}  
  
int main() {  
    int a, b, c, d;  
    char op;  
    if (scanf("%d/%d %c %d/%d", &a, &b, &op, &c, &d) != 5) {  
        return 1;  
    }  
    if (b == 0 || d == 0) {  
        printf("Denominator cannot be zero.\n");  
        return 1;  
    }  
    int resNum, resDen;  
    switch (op) {  
        case '+':  
            resNum = a * d + b * c;  
            resDen = b * d;  
            break;  
        case '-':  
            resNum = a * d - b * c;  
            resDen = b * d;  
            break;  
        case '*':  
            resNum = a * c;  
            resDen = b * d;  
            break;  
        case '/':  
            if (c == 0) {  
                printf("Denominator cannot be zero.\n");  
                return 1;  
            }  
            resNum = a * d;  
            resDen = b * c;  
            break;  
        default:  
            printf("Invalid operator.\n");  
            return 1;  
    }  
    reduceFraction(&resNum, &resDen);  
    printf("%d/%d %c %d/%d = ", a, b, op, c, d);  
    if (resDen == 1) {  
        printf("%d\n", resNum);  
    } else {  
        printf("%d/%d\n", resNum, resDen);  
    }  
    return 0;  
}