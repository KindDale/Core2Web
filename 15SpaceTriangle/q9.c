#include <stdio.h>

void main () {
        int size;
        printf("Enter the size of the loop = ");
        scanf("%d",&size);

        for (int i = 1; i <= size; i++) {
                int ch = 64+size;
                for (int j = 1; j <= i;j++) {
                        printf("  ");
                }
                for (int j = i; j <= size; j++) {
                        printf("%c ",ch);
                        ch--;
                }
                printf("\n");
        }
}
