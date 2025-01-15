#include <stdio.h>

void main (){
	int size1,size2;
	printf("Enter the size of the 1st array = ");
	scanf("%d",&size1);
	printf("Enter the size of the 2nd array = ");
	scanf("%d",&size2);

	while (size1 < 0 || size2 < 0){
		if (size1 < 0){
		printf("Invalid size of 1st array Re-Enter size\n");
		scanf("%d",&size1);
		}

		if (size2 < 0){
		printf("Invalid size of 2nd array Re-Enter size\n");
		scanf("%d",&size2);	
		}
	}

	int arr1[size1],arr2[size2];

	printf("Enter the array elements of the 1st array\n");

	for (int i = 0; i < size1; i++){
		scanf("%d",&arr1[i]);
	}
	printf("Enter the array elements of the 2nd array\n");

	for (int i = 0; i < size2; i++){
		scanf("%d",&arr2[i]);
	}

	for (int i = 0; i < size1; i++){
		for (int j = 0 ; j < size1-1; j++){
			if (arr1[j] > arr1[j+1]){
				int temp = arr1[j];
				arr1[j] = arr1[j+1];
				arr1[j+1] = temp;
			}
		}
	}
	for (int i = 0; i < size2; i++){
		for (int j = 0 ; j < size2-1; j++){
			if (arr2[j] > arr2[j+1]){
				int temp = arr2[j];
				arr2[j] = arr2[j+1];
				arr2[j+1] = temp;
			}
		}
	}

	printf("The sorted array is\n");
	printf("arr1 = ");
	for (int i = 0; i < size1; i++){
		printf("%d\t",arr1[i]);
	}

	printf("\narr2 = ");
	for (int i = 0; i < size2; i++){
		printf("%d\t",arr2[i]);
	}
	int sum,count = 0;
	printf("\nEnter the sum to be initiated\n");
	scanf("%d",&sum);
	if (size1 > size2){
		for (int i = 0; i < size1-1; i++){
			if (i > size1){
				arr2[i] = 0;
			}
			if (sum = arr1[i] + arr2[i]){
				count++;
			}
		}
	} else if (size2 > size1){
		for (int i = 0; i < size2-1; i++){
			if (i > size2){
				arr1[i] = 0;
			}
			if (sum = arr1[i] + arr2[i]){
				count++;
			}
		}
	} else if (size1 == size2){
		for (int i = 0; i < size1-1; i++){
			if (sum = arr1[i] + arr2[i]){
				count++;
			}
		}
	}

	printf("Pair sum count is %d\n",count);
	


}
