#include <stdio.h>

void main () {
	int size;
	printf("Enter the array size = ");
	scanf("%d",&size);

	int arr[size];
	
	printf("Enter the array elements\n");

	for (int i = 0; i < size; i++){
		scanf("%d",&arr[i]);
	}	

	int num;
	printf("Enter the target number = ");
	scanf("%d",&num);

	for (int i = 0; i < size; i++){
		for (int j = i + 1; j < size; j++){
			if (num == arr[i] + arr[j]){
				printf("%d  %d  \n",arr[i],arr[j]);
			}
		}
	}
}
