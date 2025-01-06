#include <stdio.h>

void main () {
        int size;
        printf("Enter the size of the array = ");
        scanf("%d",&size);

        int arr[size],min;
        
        printf("Enter the array elements\n");
        for (int i = 0; i < size; i++){
                scanf("%d",&arr[i]);
        }

        min = arr[0];

        for (int i = 1; i < size; i++){
                if (min > arr[i]){
                        min = arr[i];
                }
        }
        printf("%d is the smallest number in the array \n",min);	
}
