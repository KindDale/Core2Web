//Factorial


#include <stdio.h>

void main () {
	int num;
	printf("Enter your number = ");
	scanf("%d",&num);
	printf("\n");
	int fact = 1;
	for (int i = num; i >= 1; i--){
		fact = fact*i;
	}
	printf("%d is the factorial of %d \n",fact,num);
}
