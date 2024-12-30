#include <stdio.h>

void main () {
        int size;
        printf("Enter the size of the array = ");
        scanf("%d",&size);
        int arr[size];

        printf("Enter the array Elements\n");
        for (int i = 0; i < size; i++){
                scanf("%d",&arr[i]);
        }
	printf("The even numbers in the array are \n");
        for (int i = 0; i < size; i++){
                if (arr[i] % 2 ==0){
                        printf("%d\n",arr[i]);
                }
        }
        
}
