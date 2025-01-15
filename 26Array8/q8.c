
#include <stdio.h>

void main () {
	int size;
	printf("Enter the size of the array = ");
	scanf("%d",&size);

	while (size < 0){
        	        printf("Invalid Size Re-Enter Size \n");
                	scanf("%d",&size);
        }
	
        int arr[size];

        printf("Enter the array elements\n");

        for (int i = 0; i < size; i++){
               	scanf("%d",&arr[i]);
       	}

	for (int i = 0; i < size; i++){
		for (int j = 0; j < size-1; j++){
			if (arr[j] > arr[j+1]){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}

	int n;
	printf("Enter the value of N to find Nth smallest element\n");
	printf("N = ");
	scanf("%d",&n);

	while (n < 0 || n > size){
		if (n < 0){
			printf("Invalid value of N Re-Enter value of n\n");
			scanf("%d",&n);
		}
		
		if (n > size){
			printf("Value of N is greater than the size of the array Re-Enter the value of N\n");
			scanf("%d",&n);
		}
	}

	printf("Nth smallest element is = %d\n",arr[n-1]);	
}
