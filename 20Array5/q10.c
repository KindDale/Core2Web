#include <stdio.h>

void main () {
	int size;
	printf("Enter size = ");
	scanf("%d",&size);

	int arr1[size],arr2[size],arr3[size];

	printf("Enter the elements of 1st Array\n ");

	for(int i = 0; i < size; i++){
		scanf("%d",&arr1[i]);
	}

	printf("Enter the elements of the 2nd array\n ");

	for(int i = 0; i < size; i++){
		scanf("%d",&arr2[i]);
	} 

	printf("Elements in Array 1 after reversing and Swapping\n");
	for (int i = 0; i < size; i++){
		arr3[i] = arr1 [size-i-1];
		printf("%d \n",arr3[i]);
	}

	printf("Elements in Array 2 after reversing and Swapping\n");
	for (int i = 0; i < size; i++){
		arr1[i] = arr2[size-i-1];
		printf("%d \n",arr1[i]);
	}
	
}
