#include <stdio.h>  
#include <string.h>  
  
int main() {  
    char str1[100], str2[100];  
    int count[256] = {0};  
    int i, len1, len2;  
      
    fgets(str1, sizeof(str1), stdin);  
    fgets(str2, sizeof(str2), stdin);  
      
    len1 = strlen(str1);  
    len2 = strlen(str2);  
      
    if (str1[len1 - 1] == '\n') {  
        str1[len1 - 1] = '\0';  
        len1--;  
    }  
    if (str2[len2 - 1] == '\n') {  
        str2[len2 - 1] = '\0';  
        len2--;  
    }  
      
    if (len1 != len2) {  
        printf("Those strings are not anagrams.\n");  
        return 0;  
    }  
      
    for (i = 0; i < len1; i++) {  
        count[(unsigned char)str1[i]]++;  
        count[(unsigned char)str2[i]]--;  
    }  
      
    for (i = 0; i < 256; i++) {  
        if (count[i] != 0) {  
            printf("Those strings are not anagrams.\n");  
            return 0;  
        }  
    }  
      
    printf("Those strings are anagrams.\n");  
    return 0;  
}  

int romanToInt(const char *s) {
    int val = 0, curr, next;
    while (*s) {
        curr = (*s == 'M') ? 1000 : (*s == 'D') ? 500 : (*s == 'C') ? 100 : (*s == 'L') ? 50 : (*s == 'X') ? 10 : (*s == 'V') ? 5 : 1;
        next = (*(s+1)) ? ((*(s+1) == 'M') ? 1000 : (*(s+1) == 'D') ? 500 : (*(s+1) == 'C') ? 100 : (*(s+1) == 'L') ? 50 : (*(s+1) == 'X') ? 10 : (*(s+1) == 'V') ? 5 : 1) : 0;
        val += (curr < next) ? -curr : curr;
        s++;
    }
    return val;
}