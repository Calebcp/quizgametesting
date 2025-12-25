#include <stdio.h>  
#include <string.h>  
#include <ctype.h>  
  
int main() {  
    char plate[20];  
    fgets(plate, sizeof(plate), stdin);  
    plate[strcspn(plate, "\n\r")] = '\0';  
      
    int len = strlen(plate);  
    int is_old = 1;  
    int is_new = 1;  
      
    if (len == 6) {  
        for (int i = 0; i < 3; i++) {  
            if (!isupper(plate[i])) {  
                is_old = 0;  
                break;  
            }  
        }  
        if (is_old) {  
            for (int i = 3; i < 6; i++) {  
                if (!isdigit(plate[i])) {  
                    is_old = 0;  
                    break;  
                }  
            }  
        }  
    } else {  
        is_old = 0;  
    }  
      
    if (len == 7) {  
        for (int i = 0; i < 4; i++) {  
            if (!isdigit(plate[i])) {  
                is_new = 0;  
                break;  
            }  
        }  
        if (is_new) {  
            for (int i = 4; i < 7; i++) {  
                if (!isupper(plate[i])) {  
                    is_new = 0;  
                    break;  
                }  
            }  
        }  
    } else {  
        is_new = 0;  
    }  
      
    if (is_old) {  
        printf("The plate is a valid older style plate.\n");  
    } else if (is_new) {  
        printf("The plate is a valid newer style plate.\n");  
    } else {  
        printf("The plate is not valid.\n");  
    }  
      
    return 0;  
}