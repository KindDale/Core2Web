#include <stdio.h>

void main () {
        int size;
        printf("Enter the size of the array = ");
        scanf("%d",&size);

        int arr[size],max;

        for (int i = 0; i < size; i++){
                scanf("%d",&arr[i]);
        }

	max = arr[0];

	for (int i = 1; i < size; i++){
		if (arr[i] > max){
			max = arr[i];
		}
	}
	printf("%d is the largest number in the array \n",max);
	
}
