#include <stdio.h>

void main () {
	int size;
	printf("Enter the size of the loop = ");
	scanf("%d",&size);

	for (int i = 1; i <= size; i++){
		for (int j = 1; j <= size; j++){
			if (i == 1 || i == size){
				if (j>=2 && j < size){
					printf("0 ");
				} else {
					printf("1 ");
				}
			} else if (i >= 2 || i < size){
				if (j>=2 && j < size){
                                        printf("1 ");
                                } else {
                                        printf("0 ");
                                }

			}
		}
		printf("\n");
	}
}