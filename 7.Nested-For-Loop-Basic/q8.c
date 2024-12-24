#include <stdio.h>

void main () {
        int size;
        printf("Enter size = ");
        scanf("%d",&size);
        printf("\n");

        for (int i = 1; i <= size; i++) {
                char ch = 64 + size;
                for (int j = 1; j <= size; j++) {
                        printf("%c ",ch);
                        ch--;
                }
                printf("\n");
        }

}
