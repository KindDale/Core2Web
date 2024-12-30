#include <stdio.h>

void main () {
        int size;
        printf("Enter the size of the array = ");
        scanf("%d",&size);
        int arr[size],even = 0,odd = 0;

        printf("Enter the array Elements\n");
        for (int i = 0; i < size; i++){
                scanf("%d",&arr[i]);
        }
        printf("The sum of even numbers in the array is \n");
        for (int i = 0; i < size; i++){
                if (i % 2 ==0){
                        even = even + arr[i];
                } else {
			odd = odd + arr[i];
		}
        }
	printf("The difference is = %d\n",(even-odd));


}
