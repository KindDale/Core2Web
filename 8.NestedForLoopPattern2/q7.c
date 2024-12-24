

#include <stdio.h>

void main () {
	int size;
	printf("Enter the size = ");
	scanf("%d",&size);
	printf("\n");

	for (int i = 1; i <= size; i++) {
		for (int j = 1; j <= size; j++) {
			if (j%2==1){
				printf("* ");
			} else {
				printf("# ");
			}
		}
		printf("\n");
	}
}
