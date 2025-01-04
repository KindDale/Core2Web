#include <stdio.h>

void main () {
	int size,num=1;
	printf("Enter the size of the loop = ");
	scanf("%d",&size);

	for (int i = 1; i <=size; i++){
		
		for (int j = 1; j <= size; j++){
			printf("%d ",num*j);
					
		}
		num = num + size;
		printf("\n");
	}
}
