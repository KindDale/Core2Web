#include <stdio.h>

void main () {
	int size, temp;
        printf("Enter the size of the array = ");
        scanf("%d",&size);

        int arr[size];

        printf("Enter the array elements\n");

        for (int i = 0; i < size; i++){
                scanf("%d",&arr[i]);
	}
	printf("Array in Descending order \n");

        for (int i = 0; i < size; i++){
                for (int j = 0; j < size-1; j++){
			if (arr[j] < arr[j+1]){
                                temp = arr[j];
                                arr [j] = arr[j+1];
                                arr[j+1] = temp;
                        }
                }
        }
        for (int i = 0; i < size; i++){
                printf("%d\t",arr[i]);
        }
	
}
