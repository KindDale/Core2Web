
#include <stdio.h>
void main () {
	int size1,size2;
	printf("Enter the size of the 1st array = ");
	scanf("%d",&size1);
	printf("Enter the size of the 2nd array = ");
	scanf("%d",&size2);

	while (size < 0){
		printf("Invalid size Re-Enter size = ");
		scanf("%d",&size);
	}

	int arr[size],arr1[size-1];

	printf("Enter array elements\n");

	for (int i = 0; i < size; i++){
		scanf("%d",&arr[i]);
	}
	
	int sub = 0;

	printf("Subtraction\n");
	for (int i = 0; i < size-1; i++){
		sub = 0;
		sub = arr[i+1] - arr[i];
		arr1[i] = sub;
		printf("%d\n",arr1[i]);
	}
}

