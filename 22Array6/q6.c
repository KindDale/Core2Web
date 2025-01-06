#include <stdio.h>

void main () {
        int start, end, size;
	printf("Enter the start of the range = ");
	scanf("%d",&start);

	printf("Enter the end of the range =");
	scanf("%d",&end);
	
        printf("Enter the size of the array = ");
        scanf("%d",&size);

	int arr[size];
	printf("Enter the array elements\n");
	for (int i = 0; i < size; i++){
                scanf("%d",&arr[i]);
        }
	printf("Elements between %d and %d are = ",start,end);
	for (int i = 0; i < size; i++){
		if (start < arr[i] && arr[i] < end){
			printf("%d ",arr[i]);
		}
	}
}
