#include <stdio.h>
void main () {
	int size;
	printf("Enter the size of the array = ");
	scanf("%d",&size);

	int arr1[size],arr2[size];
	printf("Enter the elements in 1st array\n");
	for(int i = 0; i < size; i++){
		scanf("%d",&arr1[i]);
	}
	int num = size-1;
	for (int i = 0; i < size; i++) {
		arr2[i] = arr1[num];
		num--;
		printf("%d \n",arr2[i]);
	}
}
