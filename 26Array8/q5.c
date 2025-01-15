#include <stdio.h>

void main () {
	int size;
	printf("Enter array size = ");
        scanf("%d",&size);

        while (size < 0){
                printf("Invalid Size Re-Enter Size \n");
                scanf("%d",&size);
        }

        int arr[size];

        printf("Enter the array elements\n");

        for (int i = 0; i < size; i++){
                scanf("%d",&arr[i]);
        }

        int max = arr[0];
        int min = arr[0];

        for (int i = 0; i < size; i++){
                if (max < arr[i]){
                        max = arr[i];
                } else if (min > arr[i]){
                        min = arr[i];
                }
        }
	
	int sub = max - min;
	
	printf("Elements in range are\n");
	for (int i = 0; i < sub; i++){
		if (i < size){
			printf("%d\n",arr[i]);	
		} else {
			printf("Array Size exceeded\n");
			break;
		}
	}
}
