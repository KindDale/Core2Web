

#include <stdio.h>

void main () {
	int size;
	printf("Enter the size of pattern = ");
	scanf("%d",&size);
	printf("\n");

	for (int i = 0; i < size; i++){
		for (int j = 0; j < size; j++){	
			printf("1 ");
		}
		printf("\n");
	}
}
