#include <stdio.h>

int palindrome (int num){
        int temp = 0;
        while (num > 0){
                temp = temp * 10 + (num % 10);
                num = num /10;
        }
        return temp;
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

	printf("------------------------\n");
	
	int flag = 0;
        for (int i = 0; i < row; i++){
                for (int j = 0; j < column; j++){
			int flag = 0;
			int n = palindrome(arr[i][j]);
			if(n == arr[i][j]){
				printf("%d\n",arr[i][j]);
				flag = 1;
			}
		}
		
	}
	if (flag == 0)
		printf("No palindrome elements\n");
}
