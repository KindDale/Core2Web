// Doubt

#include <stdio.h>

int main () {                                                                                               int rows;
        printf("Enter the number of rows = ");
        scanf("%d",&rows);
	int num = 1;  
        for (int i = 1; i <= rows; i++){
                int ch1 = 96 + i;
		for (int j = 1; j <= i; j++){
			int ch2 = 64 + j;
			if (i % 2 == 0){
				printf("%c ",ch2);
			} else if (i % 2 == 1){
				if (i == 3){
					printf("%c ",ch1);
				} else if (i == 3 + (4*num)){
					printf("%c ",ch1);
				} else if (i == 1){
					printf("%d ",j);
				} else if (i == 1 + (4*num)){
					printf("%d ",j);
				}
			}
                }
		num ++;
		printf("\n");
        }


        return 0;
}
