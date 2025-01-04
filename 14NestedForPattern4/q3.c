#include <stdio.h>

void main () {
	int size;
	printf("Enter the size of the loop = ");
	scanf("%d",&size);
	int num = 1;

	for (int i = 1; i <= size; i++){
		for (int j = 1; j <=size; j++){
			if (num > 9){
				num = 1;
				printf("%d ",num);
				num++;
			} else {
				printf("%d ",num);
				num++;
			}
		}
		printf("\n");
	}
}
