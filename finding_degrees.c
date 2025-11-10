#include <stdio.h>

int main() {
	int conversion_type;
	double value_to_convert;
	double converted_value;
	int input_status;
	
	for (int i = 0; i < 3; i++) {
		
		printf("Write 1 or 2 then ',' a degree number of temperature (1 is to convert to centigrad, and 2 is to convert it to Fahrenheit)\n");
		input_status = scanf("%d %lf", &conversion_type, &value_to_convert);
		
		if (input_status != 2 || (conversion_type != 1 && conversion_type != 2)) {
			
			printf("Wrong Input\n");
			
			while (getchar() != '\n');
				continue; 
			
		}
		
		if (conversion_type == 1) {
			
			converted_value = (value_to_convert - 32) * 5.0/9.0;
			
		}else{
			converted_value = (value_to_convert * 9.0/5.0) + 32;
		}
		
		if (conversion_type == 1) {
			printf("The Centigrade is %.2lf\n", converted_value);
		}else{
			printf("The Fahrenheit is %.2lf\n", converted_value);
		}
		
	}
	return 0;
}