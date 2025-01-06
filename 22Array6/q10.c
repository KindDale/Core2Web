#include <stdio.h>

void main () {
        int size;
        printf("Enter the size of the array = ");
        scanf("%d",&size);

        int arr[size];

	printf("Enter the elements of the array\n");
	for (int i = 0; i < size; i++){
                scanf("%d",&arr[i]);
        }

	if (size % 2 == 0){
		printf("If the array elements are even then the array elements are\n");
		for (int i = 0; i < size; i++){
			if (i % 2 == 0){
				printf("%d\n",arr[i]);
			}
		}
	
	} else {
		printf("If the array size is odd the elements are\n");
		for (int i = 0; i < size; i++){
			printf("%d\n",arr[i]);
		}
	
	}
}
