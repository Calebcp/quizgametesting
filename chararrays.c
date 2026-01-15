#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	
	char fruit[][10] = {"Apple", "Banana", "Oranges", "Cherry"};
	
	int size = sizeof(fruit) / sizeof(fruit[0]);
	
	for (int i = 0; i < size; i++){
		printf(" %s\n", fruit[i]);
	}
	
	return 0;
}