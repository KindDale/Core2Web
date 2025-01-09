#include <stdio.h>

void main () {
	int row,column;
	printf("Enter the size of row and column\n");
	scanf("%d %d",&row,&column);

	while (row <= 0 || column <= 0){
		if (row <= 0){
			printf("Invalid Row size Re-Enter row size = ");
			scanf("%d",&row);
		}
		if (column <= 0){
			printf("Invalid column size Re-Enter column size = ");
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
	
	int sum1 = 0, sum2 = 0;
	int num = column - 1;
	for (int i = 0; i < row; i++){
		for (int j = 0; j < column; j++){
			if (i == j)
				sum1 = sum1 + arr[i][j];
		}
		
		sum2 = sum2 + arr[i][num];
		num--;
	}

	int prod = sum1 * sum2;
	printf("The product of sum of both the diagonals is = %d\n",prod);
	
}
