#include <stdio.h>  
#include <string.h>  
  
int main() {  
    char s1[100], s2[100];  
    int exist[256] = {0};  
    char result[100];  
    int idx = 0;  
    int valid = 1;  
      
    if (scanf("%s %s", s1, s2) != 2) {  
        valid = 0;  
    } else {  
        for (int i = 0; s1[i] != '\0'; i++) {  
            if (!((s1[i] >= '0' && s1[i] <= '9') || (s1[i] >= 'A' && s1[i] <= 'Z') || (s1[i] >= 'a' && s1[i] <= 'z'))) {  
                valid = 0;  
                break;  
            }  
        }  
        if (valid) {  
            for (int i = 0; s2[i] != '\0'; i++) {  
                if (!((s2[i] >= '0' && s2[i] <= '9') || (s2[i] >= 'A' && s2[i] <= 'Z') || (s2[i] >= 'a' && s2[i] <= 'z'))) {  
                    valid = 0;  
                    break;  
                }  
            }  
        }  
    }  
      
    if (!valid) {  
        printf("Wrong Input!\n");  
    } else {  
        for (int i = 0; s1[i] != '\0'; i++) {  
            exist[(unsigned char)s1[i]] = 1;  
        }  
        for (int i = 0; s2[i] != '\0'; i++) {  
            exist[(unsigned char)s2[i]] = 1;  
        }  
          
        for (char c = '0'; c <= '9'; c++) {  
            if (exist[(unsigned char)c]) {  
                result[idx++] = c;  
            }  
        }  
        for (char c = 'A'; c <= 'Z'; c++) {  
            if (exist[(unsigned char)c]) {  
                result[idx++] = c;  
            }  
        }  
        for (char c = 'a'; c <= 'z'; c++) {  
            if (exist[(unsigned char)c]) {  
                result[idx++] = c;  
            }  
        }  
          
        result[idx] = '\0';  
        printf("%s\n", result);  
    }  
      
    return 0;  
}  
