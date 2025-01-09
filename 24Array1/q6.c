#include <stdio.h>

void main () {
        int row,column;
        printf("Enter the size of Row and Column\n");
        scanf("%d %d",&row,&column);

        while (row <= 0 || column <= 0){
                if (row <= 0){
                        printf("Invalid Row size Re-Enter Row size\n");
                        scanf("%d",&row);
                }
                if (column <= 0){
                        printf("Invalid Column size Re-Enter Column size\n");
                        scanf("%d",&column);
                }
        }

        int arr[row][column];

        printf("Enter array Elements\n");
        for (int i = 0; i < row; i++){
                for (int j = 0; j < column; j++){
                        scanf("%d",&arr[i][j]);
                }
        }

        printf("Array Elements are\n");


        for (int i = 0; i < row; i++){
                for (int j = 0; j < column; j++){
                	if (arr[i][j] % 3 ==0 ){
				printf("%d\n",arr[i][j]);
			}
		}
        }
}
