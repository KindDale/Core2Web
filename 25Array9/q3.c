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
	int num,n,temp;
	printf("Enter the element to search = ");
	scanf("%d",&num);
	
	for (int i = 0; i < row; i++){
		for (int j = 0; j < column; j++){
			if (num == arr[i][j]){
				n = num = temp;
				printf("Element found at Row %d and Column %d\n",i,j);		
			} 
		}
	}
	if (num != temp){
		printf("Element not found\n");
	}
	
	

}
