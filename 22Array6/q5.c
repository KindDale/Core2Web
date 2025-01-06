#include <stdio.h>

void main () {
	int size,count = 0;;
	printf("Enter the size of the array = ");
        scanf("%d",&size);

	int arr[size];

        for (int i = 0; i < size; i++){
                scanf("%d",&arr[i]);
        }
	int num;
	printf("Enter a number = ");
	scanf("%d",&num);

	for (int i = 0; i < size; i++){
		if (num == arr[i]){
			count++;
		} 
	}

	if (count > 0){
		printf("Frequency of %d is %d \n",num,count);
	} else {
		printf("%d is not present in the array\n",num);
	}
}
