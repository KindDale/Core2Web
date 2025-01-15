#include <stdio.h>

void main () {
        int size;
        printf("Enter the size of the array = ");
        scanf("%d",&size);

        while (size < 0){
                        printf("Invalid Size Re-Enter Size \n");
                        scanf("%d",&size);
        }

        printf("Enter the Character array\n");
        char arr[size];
	getchar();
	scanf("%s",arr);
/*
	char ch;
	int index = 0;

	while ((ch = getchar()) != '\n'){
		arr[index] = ch;
		index++;
	}	
*/
	
	for (int i =0; i < size; i++){
		if ('A' <= arr[i] && arr[i] <= 'Z'){
			arr[i] += 32;
		}
	}
	
	printf("Sorted string is\n");

	for (int i = 0; i < size-1; i++){
		for (int j = 0; j < size-i-1; j++){
			if (arr[j] > arr[j+1]){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	printf("%s\n",arr);
	
		
}
