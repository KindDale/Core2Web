

#include <stdio.h>

void main () {
	int size;
	printf("Enter the size of the loop = ");
	scanf("%d",&size);
	printf("\n");
	int ch = 64+size;
	
	for (int i = 1; i <= size; i++){
		int ch2 = ch;
		for (int j = 0; j < size; j++){
			if (j%2 != 0){
				printf("%d ",i);
			} else {
				printf("%c ",ch2);
				ch2--;
				
			}
		
			
		}
		printf("\n");
	}
}
