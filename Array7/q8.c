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
	
	int num = 0, temp = 0;
	
	printf("Array after replacing Zeroes\n");

	for (int i = 0; i < size; i++){
		temp = 0;
	       	int multiplier = 1;
		num = arr[i];
		while (num > 0){
			int digit = num % 10;
			if (digit == 0){
		
				digit = 5;
			}
			temp = (digit * multiplier) + temp;
			multiplier *= 10;
			num /= 10;
			}
			
		arr[i] = temp;
		printf("%d\n",arr[i]);
	}
}
	
