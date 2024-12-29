

#include <stdio.h>
void main () {
	int size;
	
	printf("Enter size of the loop = ");
	scanf("%d",&size);
	printf("\n");
	
	int ch = 64+size;

	for (int i = 1; i <= size; i++) {
		for (int j = 1; j <= size; j++){
			printf("%c%d ",ch,size);		
		}
		printf("\n");
	}
}
