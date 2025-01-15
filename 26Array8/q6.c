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

	for (int i = 0; i < size-1; i++){
		if (arr[i] > arr[i+1]){
			printf("%d is a leader number\n",arr[i]);
		} 
	}
	

}
