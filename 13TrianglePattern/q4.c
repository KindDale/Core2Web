#include <stdio.h>

void main () {
	int size;
	printf("Enter the size of the loop\n");
	scanf("%d",&size);

	for (int i = 0; i < size; i++){
		char ch = 'A' + i;
		for (int j = 0; j <= i; j++){
			printf("%c ",ch);
			ch++;
				
		}
		printf("\n");
	}
}
