#include <stdio.h>

void main () {
	int size1,size2;
	printf("Enter the size of the 1st array = ");
	scanf("%d",&size1);

	int arr1[size1],arr2[size2];
	printf("Enter the array elements\n");
	 
	for (int i = 0; i < size1; i++){
		scanf("%d",&arr1[i]);
	}
	
        printf("Enter the size of the 2nd array = ");
        scanf("%d",&size2);

        
        printf("Enter the array elements\n");

        for (int i = 0; i < size2; i++){
                scanf("%d",&arr2[i]);
        }

	if (size1 == size2){
		printf("The array length is equal\n");
	} else {
		printf("The array length is unequal\n");
	}
}
