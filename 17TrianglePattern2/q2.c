#include <stdio.h>

int main () {
	int rows;
	printf("Enter the number of rows = ");
	scanf("%d",&rows);

	for (int i = 1; i <= rows; i++){
		char ch = 64 + i;
		for (int j = 1; j <= i; j++){
			printf("%c ",ch);
			ch--;
		}
		printf("\n");
	}
	
	
	return 0;
}
