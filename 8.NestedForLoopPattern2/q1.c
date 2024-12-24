

#include <stdio.h>

void main () {
	int size;
	printf("Enter the pattern size = ");
	scanf("%d",&size);

	char ch = 'A';

	for (int i = 0; i < size; i++){
		for (int j = 0; j < size; j++) {
			printf("%c ",ch);
			ch++;
		}
		printf("\n");
	}
}
