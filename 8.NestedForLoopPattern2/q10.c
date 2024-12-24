

#include <stdio.h>

void main() {
	int size;

	printf("Enter the size of the pattern = ");
	scanf("%d",&size);

	for (int i = 1; i <= size; i++) {
		
	char ch1='A', ch2='a';
	
		for (int j = 1; j <=size; j++) {
			if (i%2==1){
				printf("%c ",ch1);
				ch1++;
			} else {
				printf("%c ",ch2);
				ch2++;
			}
		}
	printf("\n");	
	}
}
