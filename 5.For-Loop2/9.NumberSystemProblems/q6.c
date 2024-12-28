#include <stdio.h>

void main () {
	int num,remainder;
	printf("Enter your number = ");
	scanf("%d",&num);
	printf("\n");
	
	printf("Reverse of the number is = ");
	while (num != 0){
		remainder = num % 10;
		printf("%d",remainder);
		num = num / 10;
	}
	printf("\n");

}
