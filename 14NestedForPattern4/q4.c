#include <stdio.h>

void main () {
	int size;
	printf("Enter the size of the loop = ");
	scanf("%d",&size);

	for (int i = 1; i <= size; i++){
		int num = i;
		for (int j = 1; j <= size; j++){
			if (num > size){
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
