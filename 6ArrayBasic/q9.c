#include <stdio.h>

void main () {
	int size;
	printf("Enter the size of the array\n");
	scanf("%d",&size);
	int arr[size];
	printf("Enter the array elements\n");
	for (int i = 0; i < size; i++){
		scanf("%d",&arr[i]);
	}
	for (int i = 0; i < size; i++){
		if (arr[i] % 5 == 0){
			printf("%d \n",arr[i]);
			
		}
		break;
	}
}
