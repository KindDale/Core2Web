

#include <stdio.h>

void main () {
	int size;
	printf("Enter the size of the loop = ");
	scanf("%d",&size);
	printf("\n");
	int ch2 = 96+size;
	char ch1 = 'A';
	for (int i = 1; i <= size; i++){
		
		for (int j = 1; j <=size; j++){
			if ((i+j)%2!=0){
				printf("%c ",ch2);
				ch2++;
			} else {
				printf(" ");
			} 
		}
		printf("\n");
	}
}
