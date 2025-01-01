#include <stdio.h>

void main () {
        int size;
        printf("Enter the size of the loop = ");
        scanf("%d",&size);

        for (int i = size; i >= 1; i--){
                for (int j = 1; j <= i; j++){
                        printf("%d ",j);
                }
                printf("\n");
        }
}
