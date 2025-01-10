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

	int sum = 0;

        for (int i = 0; i < row; i++){
                for (int j = 0; j < column; j++){
			int flag = 0;
			for (int k = 2; k < arr[i][j]; k++){
				if (arr[i][j] % k == 0){
					flag = 1;
					break;
				}
			}
			if (flag == 0){
				sum = sum + arr[i][j];
			}
		}
	}
	printf("Sum of Prime numbers = %d\n",sum);
}
