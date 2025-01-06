#include <stdio.h>

void main () {
	int size;
	printf("Enter the size of the array = ");
	scanf("%d",&size);
	
	int arr[size];

	printf("Enter the elements of the array\n");
	for (int i = 0; i < size; i++){
		scanf("%d",&arr[i]);
	}

	printf("Elements after reversing are\n");
	for (int i = 0; i < size; i++){
		int reverse = 0;
		int num = arr[i];
		while(num > 0){
			reverse = reverse * 10 + (num % 10);
			num = num / 10;
		}
		
		printf("%d\n",reverse);
		}
	}

