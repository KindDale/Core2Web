#include <stdio.h>

int main () {                                                                                               int rows;
        printf("Enter the number of rows = ");
        scanf("%d",&rows);

        for (int i = 1; i <= rows; i++){
                for (int j = 1; j <= i; j++){
			if (i % 5 == 0){
				printf("%d ",i);
			} else if (i % 2 == 1){
				printf("1 ");
			} else {
				printf("0 ");
			}
                }
		printf("\n");
        }


        return 0;
}
