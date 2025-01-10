#include <stdio.h>

void main () {
	int row,column;
	printf("Enter the size of row = ");
	scanf("%d",&row);
	printf("Enter the size of column = ");
	scanf("%d",&column);

	while (row <= 0 || column <= 0){
		if (row <= 0){
			printf("Invalid Size Re-Enter Row");
			scanf("%d",&row);
		}
		if (column <= 0){
			printf("Invalid Size Re-Enter Column");
			scanf("%d",&column);
		}
	}

	int arr[row][column];

	printf("Enter the array elements\n");

	for (int i = 0; i < row; i++){
		for (int j = 0; j < column; j++){
			scanf("%d",&arr[i][j]);
		}
	}

	printf("Even indexed elements are\n");
	for (int i = 0; i < row; i++){
		if (i % 2 == 0){
			for (int j = 0; j < column; j++){
				if (j % 2 == 0){
					printf("%d\n",arr[i][j]);
				}
			}
		}
	}
}
