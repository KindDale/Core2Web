#include <stdio.h>

void main () {
	int size;
	printf("Enter the size of the array = ");
	scanf("%d",&size);
		
	while (size <= 0){
		printf("Invalid size Re-enter size");
		scanf("%d",&size);
	}
	
	int arr[size];
	
	printf("Enter the array elements\n");
	for (int i = 0; i < size; i++){
		scanf("%d",&arr[i]);
	}
	
	int temp;
	for (int i = 0; i < size; i++){
	for (int j = 0; j < size; j++){
		if (arr[j] > arr[j+1]){
			temp = arr[j];
			arr[j] = arr[j+1];
			arr[j+1] = temp;
			}
		}
	}

	printf("The second minimum element of the array is = %d",arr[1]);
}
