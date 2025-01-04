#include <stdio.h>

void main () {
	int size;
	printf("Enter the size of the loop = ");
	scanf("%d",&size);

	for (int i = 1; i <= size; i++){
		int ch = 64 + i;
		for (int j = 1; j <= size; j++){
			if ((i+j)%2==0){
				printf("%d ",ch-64);
			} else {
				printf("%c ",ch);
			}
			ch++;
		}
		printf("\n");
	}
}
