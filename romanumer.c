#include <stdio.h>  
#include <string.h>  
  
int romanToInt(const char *s) {  
    if (*s == '\0') return 0;  
    int val = 0;  
    if (*s == 'M') val = 1000;  
    else if (*s == 'D') val = 500;  
    else if (*s == 'C') {  
        if (*(s+1) == 'M') {  
            val = 900;  
            s++;  
        } else if (*(s+1) == 'D') {  
            val = 400;  
            s++;  
        } else val = 100;  
    } else if (*s == 'L') val = 50;  
    else if (*s == 'X') {  
        if (*(s+1) == 'C') {  
            val = 90;  
            s++;  
        } else if (*(s+1) == 'L') {  
            val = 40;  
            s++;  
        } else val = 10;  
    } else if (*s == 'V') val = 5;  
    else if (*s == 'I') {  
        if (*(s+1) == 'X') {  
            val = 9;  
            s++;  
        } else if (*(s+1) == 'V') {  
            val = 4;  
            s++;  
        } else val = 1;  
    }  
    return val + romanToInt(s+1);  
}  
  
int main() {  
    char s[20];  
    fgets(s, sizeof(s), stdin);  
    s[strcspn(s, "\n")] = '\0';  
    printf("%d\n", romanToInt(s));  
    return 0;  
}  