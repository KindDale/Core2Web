#include <stdio.h>

void main () {
	int size;
	printf("Enter the size of the loop = ");
	scanf("%d",&size);
	printf("\n");
	
	if (size % 2== 0){
		for (int i = 1; i <= size; i++){
			int ch = 64;
			for (int j = 1; j <= size; j++){
				if (j % 2 == 0){
					printf("%c ",(ch+j));
				} else {
					printf("%d ",(ch+j));
				}
			}
			printf("\n");
		}
	} else {
		for (int i = 1; i <= size; i++){
			int ch = 64;
			for (int j = 1; j <= size; j++){
				printf("%c ",(ch+j));
			}
			printf("\n");
		}
	}
}
