#include <stdio.h>

void main () {
	int size;
	printf("Enter the size of the loop = ");
	scanf("%d",&size);
	int num = size;
	for (int i = 1; i <= size; i++){
		
		for (int j = 1; j <= i; j++) {
			printf("  ");
		}
		for (int j = i; j <= size; j++){
			printf("%d ",num);
		}
		num--;
		printf("\n");
	}
}