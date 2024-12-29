#include <stdio.h>

void main () {
	int size;
	printf("Enter size of the loop = ");
	scanf("%d",&size);
	printf("\n");
	int ch = 96;
	
	for (int i = 1; i <= size; i++){
		int ch1 = (ch+(size*2)), ch2 = (ch+size);
		for (int j = 1; j <= size; j++){
			if (i % 2 == 0){
				printf("%c ",ch1);
				(ch1)--;
			} else {
				printf("%c ",ch2);
				ch2++;
			}
		}
		printf("\n");
	}	
}
