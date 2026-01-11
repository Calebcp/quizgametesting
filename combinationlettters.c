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
       return 0;
}  
