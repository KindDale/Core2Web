#include <stdio.h>

int digitSum (int num){
	int sum = 0;
	int temp = 0;
	while (num > 0){
		temp = num % 10;
	       	sum = sum + temp;
		num = num /10;
	}
	return sum;
}

void main () {
	int row, column;
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

	printf("Sum of digits is\n");
	
        for (int i = 0; i < row; i++){
		
                for (int j = 0; j < column; j++){
			
			digitSum(arr[i][j]);
			printf("%d\t",digitSum(arr[i][j]));

		}
	}

}
