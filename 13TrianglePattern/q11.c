#include <stdio.h>

int main () {
	int size;
	printf("Enter the size of the loop = ");
	scanf("%d",&size);

	for (int i = size; i >= 1; i--){
		int ch = 64+size;
		for (int j = 1; j <= i; j++){
			printf("%c ",ch);
			ch--;
		}
		printf("\n");
	}
	return 0;
}

