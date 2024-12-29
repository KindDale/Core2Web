

#include <stdio.h>
void main () {
	int size;
	printf("Enter the size of the loop = ");
	scanf("%d",&size);
	printf("\n");

	for (int i = 1; i <= size; i++){
		int n = i;
		for (int j = 1; j <= size; j++){
			printf("%d ",n);
			n++;
		}
		printf("\n");
	}
}
