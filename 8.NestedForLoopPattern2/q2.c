

#include <stdio.h>

void main () {
        int size;
        printf("Enter the pattern size = ");
        scanf("%d",&size);
	
	for (int i = 1; i <= size; i++){
		int a = size;
		for (int j = 1; j <= size; j++){
			printf("%d ",a);
			a--;
		}
		printf("\n");
		
	}
}
