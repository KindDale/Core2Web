#include <stdio.h>

void main () {
	int size,flag = 0;
	printf("Enter the size of array = ");
	scanf("%d",&size);

	printf("Enter array elements\n");
	
	int arr[size];

	for (int i = 0; i < size; i++){
		scanf("%d",&arr[i]);
	}
	
	for (int i = 0; i < size; i++){
		for (int j = 0; j < size; j++){
			if (arr[i] == arr[j+1]){
				flag = 1;
				break;
			}
		}
		if (flag == 1) {
                                printf("The first repeating element is %d\n",arr[i]);
                                break;
                        }
	}
}
