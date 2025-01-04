#include <stdio.h>
void main () {
	int size;
	printf("Enter the size of the loop = ");
	scanf("%d",&size);

	for (int i = 1; i <= size; i++) {
		int ch = 64+i;
		for (int j = 1; j <= i;j++){
			printf("  ");
		}
		for (int j = i; j <= size; j++){
			if (size % 2 == 1) {
				if (j%2 == 1) {
					printf("%c ",ch);	
				} else {
					printf("%d ",ch);
				}
			} else if (size % 2 == 0){
				if (j % 2 == 0){
					printf("%c ",ch);
				} else {
					printf("%d ",ch);
				}
			}
			ch++;
		}
	 		
		printf("\n");
		
	}
}
