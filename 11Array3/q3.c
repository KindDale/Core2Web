#include <stdio.h>

void main () {
	int size;
	printf("Enter the size of the 1st array = ");
	scanf("%d",&size);
	int sum1 = 0, sum2 = 0;
	int arr1[size],arr2[size];

	printf("Enter the array elements\n");
	for (int i = 0; i < size; i++) {
		scanf("%d",&arr1[i]);
	}
	for (int i = 0; i < size; i++) {
		sum1 = sum1 + arr1[i] ;
	}

	int size1;
        printf("Enter the size of the 2nd array = ");
        scanf("%d",&size1);
	
	printf("Enter the array elements\n");
        for (int i = 0; i < size1; i++) {
                scanf("%d",&arr2[i]);
        }
        for (int i = 0; i < size1; i++) {
                sum2 = sum2 + arr2[i] ;
        }
	
	if (sum1 == sum2){
		printf("Sum of both the arrays is equal\n");
	} else {
		printf("Sum of both the arrays is not equal\n");
	}
}
