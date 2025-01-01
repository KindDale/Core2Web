#include <stdio.h>

void main () {
	int size;
	printf("Enter the size of the loop = ");
	scanf("%d",&size);

	for (int i = size; i >= 1; i--){
		for (int j = i; j >= 1; j--){
			printf("%d ",i);
		}
		printf("\n");
	}
}
