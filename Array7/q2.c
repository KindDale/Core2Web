#include <stdio.h>

void main () {
        int size;
        printf("Enter the size of the array = ");
        scanf("%d",&size);

        int arr[size];
        printf("Enter the array elements\n");

        for (int i = 0; i < size; i++){
                scanf("%d",&arr[i]);
        }


	for (int i = 0; i < size; i++){
		for (int j = 0; j < size; j++){
			if (arr[j] < arr[j+1]){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	printf("2nd largest element is = %d",arr[size-2]);
	
}
