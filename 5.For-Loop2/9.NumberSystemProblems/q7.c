

#include <stdio.h>

void main () {
	int num, remainder=0,n=0;
	printf("Enter a number = ");
	scanf("%d",&num);
	printf("\n");
	int real = num;
	while (num != 0){
		remainder = num % 10;
		n = n * 10 + remainder;
		num = num / 10;
	}
	printf("%d\n",n);
	if (real == n){
		printf("The number is a Palindrome\n");
	} else {
		printf("The number is not a palindrome\n");
	}
}
