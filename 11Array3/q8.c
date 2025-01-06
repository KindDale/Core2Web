#include <stdio.h>

void main () {
	int size1,size2;

	printf("Enter the size of the 1st array = ");
	scanf("%d",&size1);
	int arr1[size1], arr2[size2];

	printf("Enter the elements in the 1st array\n");
	for(int i = 0; i < size1; i++) {
		scanf("%d",&arr1[i]);
	}

	printf("Enter the size of the 2nd array = ");
        scanf("%d",&size2);

        printf("Enter the elements in the 2nd array\n");
        for(int i = 0; i < size2; i++) {
                scanf("%d",&arr2[i]);
        }
	int max;
	if (size1 > size2){
		max = size1;
	} else {
		max = size2;
	}
	printf("After printing alternate elements\n");
	for (int i = 0; i < max; i++){
		if (i < size1) {
         		printf("%d ", arr1[i]);
        	}
        	if (i < size2) {
            		printf("%d ", arr2[i]);
        }
	}
}
