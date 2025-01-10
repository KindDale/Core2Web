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

        printf("Sum of even elements is\n");
	
	int sum = 0;

        for (int i = 0; i < row; i++){
                for (int j = 0; j < column; j++){
			if (arr[i][j] % 2 == 0){
				sum = sum + arr[i][j];
			}
		}
	}
	printf("%d\n",sum);
}
