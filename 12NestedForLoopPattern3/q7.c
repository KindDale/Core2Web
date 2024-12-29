#include <stdio.h>

void main () {
	int size;
	printf("Enter the size for the loop =  ");
	scanf("%d",&size);
	printf("\n");
	int ch = 64, num = size*size, ch2 = ch + num, n= num;
	for (int i = size; i >= 1; i--){
		for (int j = size; j >= 1; j--){
			if (j % 2 == 1){
				printf("%c ",ch2);
			} else {
				printf("%d ",n);
			}
			ch2--;
			n--;
			
		}
		printf("\n");
	}
}
