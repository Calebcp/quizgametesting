#include <stdio.h>

int main() {
	int conversion_type;
	double value_to_convert;
	double converted_value;
	int input_status;
	
	for (i = 0; i < 3; i++) {
		
		input_status = scanf("%d, %lF", &conversion_type, &value_to_convert);
		
		if (input_status != 2 || (convertion_type != 1 && convertion_type != 2)) {
			
			printf("Wrong Input"\n);
			
			while (getchar() != '\n');
				continue; 
			
		}
	}
}