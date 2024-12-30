

#include <stdio.h>

void main () {
	int size;
	printf("Enter the size of the array = ");
	scanf("%d",&size);
	int arr[size];
	printf("Enter the array Elements\n");
	for (int i = 0; i < size; i++){
		scanf("%d",&arr[i]);
	}

	for (int i = 0; i < size; i++){
		if (i%2==0){
			printf("%d	",arr[i]);
		}
	}
}
