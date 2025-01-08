#include <stdio.h>

void main () {
	int size;
	printf("Enter the size of the array = ");
	scanf("%d",&size);

	int arr[size];
	printf("Enter the array elements\n");

	for (int i = 0; i < size; i++){
		scanf("%d",&arr[i]);
	}
	int min = arr[0];
	int max = arr[0];
	for (int i = 0; i < size; i++){
		if (min > arr[i]){
			min = arr[i];
		}
	}
	
	for (int i = 0; i < size; i++){
		if (max < arr[i]){
			max = arr[i];
		}
	}


	printf("Minimum Element = %d\n",min);
	printf("Maximum Element = %d\n",max);

}
