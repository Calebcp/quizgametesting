#include <stdio.h>  
#include <string.h>  
#include <ctype.h>  
 
#define LIST_SIZE 5  
#define MAX_STR 20  
  
void toLower(char *str) {  
    for (int i = 0; str[i] != '\0'; i++) {  
        str[i] = tolower(str[i]);  
    }  
}  
  
int main() {  
    char list[LIST_SIZE][MAX_STR] = {  
        "Apple",  
        "banana",  
        "Cherry",  
        "date",  
        "elderberry"  
    };  
      
    char searchWord[MAX_STR];  
    char lowerSearch[MAX_STR];  
    char lowerItem[MAX_STR];  
    int foundIndex = -1;  
  
    printf("Enter a word to search: \n");  
    fgets(searchWord, MAX_STR, stdin);  
    searchWord[strcspn(searchWord, "\n")] = '\0';  
      
    strcpy(lowerSearch, searchWord);  
    toLower(lowerSearch);  
      
    for (int i = 0; i < LIST_SIZE; i++) {  
        strcpy(lowerItem, list[i]);  
        toLower(lowerItem);  
          
        if (strcmp(lowerSearch, lowerItem) == 0) {  
            foundIndex = i;  
            break;  
        }  
    }  
      
    if (foundIndex != -1) {  
        printf("Word \"%s\" found at index %d.\n", searchWord, foundIndex);  
    } else {  
        printf("Word \"%s\" not found in the list.\n", searchWord);  
    }  
      
    return 0;  
}  