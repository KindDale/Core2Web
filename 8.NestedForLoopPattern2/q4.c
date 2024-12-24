

#include <stdio.h>

void main () {
        int size;
        printf("Enter the pattern size = ");
        scanf("%d",&size);
	
	int n = 1;
	for (int i = 1; i <= size; i++){
		for (int j = 1; j <= size; j++){
			printf("%d ",n);
			n=n+2;
		}
		printf("\n");
	}
}
