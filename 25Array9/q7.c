// Doubt

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

        printf("Non-Corner Elements are\n");
        for (int i = 0; i < row; i++){
        	for (int j = 0; j < column; j++){
				if (((i==0 && j==0)||(i==0 && j==column-1)||(i==row-1 && j==0)||(i==row-1 && j==column-1))==0){
					printf("%d\t",arr[i][j]);
				}
			}
		}
        
	
}
