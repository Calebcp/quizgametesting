
#include <stdio.h>

int main() {
	int n, m;
	int a[20];
	int i, j, pos, tmp;
	
	scanf("%d %d", &n, &m);
	
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
		
	for (i = 0; i < n - 1; i++) {
		for (j = 0; j < n - 1 - i; j++) {
			if (a[j] < a[j + 1]) {
				tmp = a[j];
				a[j] = a[j+1];
				a[j+1] = tmp;
			}
		}
	}
	pos = 0;
	while (pos < n && a[pos] > m)
		pos++;
		
	for (i = n; i > pos; i--)
		a[i] = a[i-1];
		
	a[pos] = m;
	
	for (i = 0; i < n + 1; i++){
		if (i) printf(" ");
		printf("%d", a[i]);
	}
	
	return 0;
}



