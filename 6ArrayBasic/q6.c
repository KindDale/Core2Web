#include <stdio.h>

void main () {
        int size;
        printf("Enter the size of the array = ");
        scanf("%d",&size);
        int arr[size],sum=0;
        printf("Enter the array Elements\n");
        for (int i = 0; i < size; i++){
                scanf("%d",&arr[i]);
        }

        for (int i = 0; i < size; i++){
        	sum = sum + arr[i];
        }
	printf("The sum of the elements of the array is = %d \n",sum);
}
