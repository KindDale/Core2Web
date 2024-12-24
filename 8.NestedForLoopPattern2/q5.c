

#include <stdio.h>

void main () {
        int size;
        printf("Enter the pattern size = ");
        scanf("%d",&size);
	
	
	for (int i = 1; i <= size; i++){
		
		for (int j = 1; j <= size; j++){
			if (i%2==1){
				printf("%d ",j);
				
			} else {
				printf("%d ",size-j+1);
				
			}
		}
		printf("\n");
	}
}
