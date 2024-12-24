

#include <stdio.h>

void main () {
	int size,ch=64;
	printf("Enter the size of the pattern = ");
	scanf("%d",&size);
	

	for (int i = 1; i <= size; i++) {
		for (int j = 1; j <= size; j++) {
			if (j%2==1){
				printf("%d ",j);
			} else {
				printf("%c ",ch+j);
			}
		}
		printf("\n");
	}
}
