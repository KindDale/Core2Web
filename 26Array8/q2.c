#include <stdio.h>
void main () {
	int size;
	printf("Enter the size of the array = ");
	scanf("%d",&size);

	while (size < 0){
		printf("Invalid size Re-Enter size = ");
		scanf("%d",&size);
	}

	int arr[size];

	printf("Enter array elements\n");
	
	int sumEven = 0, sumOdd = 0;
	for (int i = 0; i < size; i++){
		scanf("%d",&arr[i]);
		if (arr[i] % 2 == 0){
			sumEven = sumEven + (arr[i]*arr[i]);
		} else {
			sumOdd = sumOdd + (arr[i]*arr[i]);
		}
	}

	
	printf("Difference = %d\n",(sumEven - sumOdd));
}
