#include <stdio.h>
void main () {
	int size;
	printf("Enter the size of the Array = ");
	scanf("%d",&size);
	int arr1[size],arr2[size];
	
	printf("Enter the elements in the 1st array are\n");
	
	for (int i = 0; i < size;i++){
		scanf("%d",&arr1[i]);
	}

	printf("Elements in the 2nd array are\n");
	for (int i = 0; i < size; i++){
		arr2[i] = arr1[i];
		printf("%d\n",arr2[i]);
	}
}
