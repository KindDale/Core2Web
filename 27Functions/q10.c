#include <stdio.h>


int input (int arr[], int size){
	for (int i = 0; i < size; i++){
		scanf("%d",&arr[i]);
	}
}

int cube (int arr[], int size){
	for (int i = 0; i < size; i++){
		arr[i] = arr[i] * arr[i] * arr[i];
	}
	printf("Cube of each element is\n");
	for (int i = 0; i < size; i++){
		printf("%d\n",arr[i]);
	}
}

void main () {
	int size;
	printf("Enter the size of an array = ");
	scanf("%d",&size);

	while (size < 0){
		printf("Invalid Size, Re-Enter Size = ");
		scanf("%d",&size);
	}
	printf("Enter the array elements\n");
	int arr[size];

	input(arr,size);
	cube(arr,size);
}
