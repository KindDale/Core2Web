#include <stdio.h>

void main () {
	int size;
	printf("Enter the size of the array = ");
	scanf("%d",&size);
	int arr[size];
	printf("Enter the elements in the array = \n");

	for (int i = 0; i < size; i++) {
		scanf("%d",&arr[i]);
	}
	
	printf("The same elements are \n");
	for (int i = 0; i < size; i++){
		if (arr[i] == i){
			printf("%d\n",i);
		}
	}
		
}
