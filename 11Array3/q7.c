#include <stdio.h>

void main () {
	int size1, size2 , size3=size1+size2;

	printf("Enter the size of the 1st array = ");
	scanf("%d",&size1);
	
	int arr1[size1],arr2[size2], arr3[size1+size2];

	printf("Enter the array elements of 1st array\n");
	for (int i = 0; i < size1 ; i++){
		scanf("%d",&arr1[i]);
	}
	
	printf("Enter the size of the 2nd array = ");
        scanf("%d",&size2);

	printf("Enter the array elements of 2nd array\n");
	for (int i = 0; i < size2; i++){
		scanf("%d",&arr2[i]);
	}

	printf("After concatenation of both arrays\n");
	for (int i = 0; i < size1; i++){
		arr3[i] = arr1[i];
	}
	for (int i = 0; i < (size1+size2); i++){
		arr3[size1+i] = arr2[i];
	}

	for (int i = 0; i < size1+size2; i++){
		printf("%d ",arr3[i]);
	}

	
}
