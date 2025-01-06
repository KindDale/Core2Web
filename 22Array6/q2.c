#include <stdio.h>

void main () {
	int size;
	printf("Enter the size of the array = ");
	scanf("%d",&size);
	
	int arr[size],num,n=1;
	
	for (int i = 0; i < size; i++){
		scanf("%d",&arr[i]);
	}
	printf("Enter a number = ");
	scanf("%d",&num);

	for (int i = 0; i < size; i++){
		for (int j = 0; j < size; j++){
			if (num == arr[i] + arr[j]){
				printf("Index = %d and Index = %d ",i,j);
			
			}
			printf("\n");
		}
	}
}
