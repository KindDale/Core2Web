
#include <stdio.h>

void main () {
	int size;
	printf("Enter the size of the loop \n");
	scanf("%d",&size);

	for (int i = 1; i <=size; i++){
		for (int j = 0; j < i; j++){
			printf("%d ",(size-j));
		}
		printf("\n");
	}
}
