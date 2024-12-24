

#include <stdio.h>
void main () {
	int size;
	printf("Enter size of the pattern = ");
	scanf("%d",&size);

	for (int i = 1; i <= size; i++){
		for (int j = 1; j <= size; j++){
			
			printf("%d ",((size*i)*j));
		}
		printf("\n");
	}
}
