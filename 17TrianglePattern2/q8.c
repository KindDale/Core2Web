#include <stdio.h>

int main () {                                                                                               int rows;
        printf("Enter the number of rows = ");
        scanf("%d",&rows);

        for (int i = 1; i <= rows; i++){
                for (int j = 1; j <= i; j++){
			int ch = 64 + j;
			if (i % 3 == 0){
				if(j % 2 == 0){ 
					printf("%c ",ch);
				} else {
					printf("%d ",j);
				}
			} else {
				printf("%d ",j);
			}
                }
		printf("\n");
        }


        return 0;
}
