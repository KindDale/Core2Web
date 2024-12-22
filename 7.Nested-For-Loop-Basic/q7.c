

#include <stdio.h>

void main () {
        int rows;
        printf("Enter the size of rows = ");
        scanf("%d",&rows);

        char ch = 'A';
	for (int i = 1; i <= rows; i++){
                
                for (int j = 1; j <= rows; j++){
                        printf("%c ",ch);
                        
                }
		ch++;
                printf("\n");
        }
}
