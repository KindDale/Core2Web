#include <stdio.h>

int main () {
	int size;
	printf("Enter the size of the pattern = ");
	scanf("%d",&size);
	
	for (int i = 1; i <= size; i++){
		int prod = 1;
		int num = 1;
		for (int j = 1; j <= i; j++){
			prod = prod * num;	
			printf("%d ",(i*prod));
			num++;
		}
		printf("\n");
	}

	return 0;
}
