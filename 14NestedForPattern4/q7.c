// Doubt

#include <stdio.h>

void main () {
	int size,num=4;
	printf("Enter the size of the loop = ");
	scanf("%d",&size);

	for (int i = 1; i <=size; i++){
		for (int j = 1; j <= size; j++){
			if (j <= 2){
				
				printf("%d ",num);
				num += 2;		
			} else if (j == 3){
				printf("%d ",num);
			} else {
				num++;
				printf("%d ",num);	
			}	
			

		}
		num++;
		printf("\n");
	}
}
