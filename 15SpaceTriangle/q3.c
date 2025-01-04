#include <stdio.h>
void main () {
        int size;
        printf("Enter the size of the loop = ");
        scanf("%d",&size);
	int ch = size;
        for (int i = 1; i <= size; i++){
                int num = 64+ch;
                for (int j = size; j >= 1; j--){
                        if (i >= j){
                                printf("%c ",num);
                                num++;
                        } else {
                                printf("  ");
                        }
			
                }
		ch--;
                printf("\n");
        }
}
