

#include <stdio.h>

void main () {
	int size;
	printf("Enter size of the loop = ");
	scanf("%d",&size);
	printf("\n");

	for (int i = 1; i <= size; i++){
		for (int j = 1; j <= size; j++){
			if (j%2==0){
				printf("%d ",(i*i*i));
			} else {
				printf("%d ",(i*i));
			}
		}
		printf("\n");
	}

}
