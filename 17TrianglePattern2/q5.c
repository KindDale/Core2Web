#include <stdio.h>

int main () {                                                                                               int rows;
        printf("Enter the number of rows = ");
        scanf("%d",&rows);

        for (int i = 1; i <= rows; i++){
                int ch1 = 96 + i;
		for (int j = 1; j <= i; j++){
			int ch2 = 64 + j;
			if (i % 2 == 1){
				printf("%c ",ch1);
			} else {
				printf("%c ",ch2);
			}
                }
		printf("\n");
        }
        return 0;
}
