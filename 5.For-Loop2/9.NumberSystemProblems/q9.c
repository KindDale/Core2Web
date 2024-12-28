

#include <stdio.h>

int factorial (int num) {
	int fact = 1;
	for (int i = 1; i <= num; i++){
		fact = fact * i;
	}
	return fact;
}

void main () {
	int num,sum=0,real,remainder;
	printf("Enter a number = ");
	scanf("%d",&num);
	printf("\n");
	real = num;
	while (num > 0){
		remainder = num % 10;
		sum = sum + factorial (remainder);
		num = num / 10;
	}
	if (sum == real){
		printf("The number is a Strong number\n");
	} else {
		printf("The number is not a strong number\n");
	}
}
