#include <stdio.h>
void main () {
	int size;
	printf("Enter the size of the array = ");
	scanf("%d",&size);

	int arr1[size],arr2[size];

	printf("Enter the array elements of the 1st array\n");
	for (int i = 0; i < size; i++){
		scanf("%d",&arr1[i]);
	}

	printf("Enter the array elements of the 2nd array\n");
        for (int i = 0; i < size; i++){
                scanf("%d",&arr2[i]);
        }
	
	int flag = 0;

	for (int i = 0; i < size; i++){
		if (arr1[i]==arr2[i]){
			flag++;
		} 
	}
	if (flag == size){
		printf("Both arrays have equal elements\n");
	} else {
		printf("Both arrays have unequal elements\n");
	}
}
