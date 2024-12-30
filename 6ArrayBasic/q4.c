#include <stdio.h>

void main () {
        int size;
        printf("Enter the size of the array = ");
        scanf("%d",&size);
        int arr[size],prod = 1;

        printf("Enter the array Elements\n");
        for (int i = 0; i < size; i++){
                scanf("%d",&arr[i]);
        }
        printf("The product of even numbers in the array is = ");
        for (int i = 0; i < size; i++){
                if (arr[i] % 2 ==0){
                        prod = prod * arr[i];
                }
        }
	printf("%d\n",prod);

}
