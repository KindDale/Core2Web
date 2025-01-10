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

        int arr[row][column],arr1[column];

        printf("Enter the array elements\n");

        for (int i = 0; i < row; i++){
                arr1[i] = 0;
                for (int j = 0; j < column; j++){
                        scanf("%d",&arr[i][j]);
                }
        }

        int sum = 0;

        for (int j = 0; j < column; j++){
                sum = 0;
                for (int i = 0; i < row; i++){
                        sum = sum + arr[i][j];
                }
                arr1[j] = sum;
        }

        int max = arr1[0],index,count = 0;;

        for (int i = 0; i < column; i++){
                if (max < arr1[i]){
                        max = arr1[i];
                        index = i;
                } else if (max == arr1[i]){
                        count ++;

                }
        }
        if (count == column)
                printf("Sum is equal for all rows\n");
        else
                printf("Maximum sum at column %d and sum is %d\n",index,max);


}
