#include <stdio.h>

void main () {
	int size;
	printf("Enter the size of the arrays = ");
	scanf("%d",&size);

	int arr1[size], arr2[size],temp[size];

	printf("Enter the elements of the 1st array\n");
	for (int i = 0; i < size; i++){
		scanf("%d",&arr1[i]);
	}

	printf("Enter the elements of the 2nd array\n");
	for (int i = 0; i < size; i++){
                scanf("%d",&arr2[i]);
        }

	printf("After swapping the 2 arrays\n");
	for (int i = 0; i < size; i++) {
		temp[i] = arr1[i];
	}
	for (int i = 0; i < size; i++) {
                arr1[i] = arr2[i];
        }
	for (int i = 0; i < size; i++) {
                arr2[i] = temp[i];
        }
	printf("Array 1 =");
	for (int i = 0; i < size; i++) {
                printf(" %d ",arr1[i]);
        }
	printf("\n");

	printf("Array 2 = ");
	for (int i = 0; i < size; i++){
		printf(" %d ",arr2[i]);
	} printf("\n");
}
