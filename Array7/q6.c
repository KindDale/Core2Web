#include <stdio.h>

void main () {
	int size;
	printf("Enter the size of the array = ");
	scanf("%d",&size);

	int arr[size], freq[size];
	
	printf("Enter the array elements\n");
	
	for (int i = 0; i < size; i++){
		freq[i] = -1;
		scanf("%d",&arr[i]);
	}
	
	printf("Elements\t Frequency\n");

	for (int i = 0; i < size; i++){
		int count = 1;
		for (int j = i + 1; j < size; j++){
			if (arr[i] == arr[j]){
				count++;
				freq[j] = 0;
			}
		}
		if (freq[i] != 0){
			freq[i] = count;
		}
	}

	for (int i = 0; i < size; i++){
		if (freq[i] != 0)
		printf("%d\t%d\n",arr[i],freq[i]);
	}
	
}
