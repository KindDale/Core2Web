#include <stdio.h>

int power (int base, int exp){
	int result = 1;

	for (int i = 1; i <= exp; i++){
		result *= base;	
	}
	return result;
}

int isArmstrong (int x){
	int num = x,count = 0;
	while (num != 0){
		num /= 10;
		count++;
	}
	
	num = x;
	int result = 0, remainder;
	while (num != 0){
		remainder = num % 10;
		result += power (remainder,count);
		num /= 10;
	}
	return result;
}

void main () {
	int num;
	printf("Enter a number = ");
	scanf("%d",&num);

	while (num < 0){
		printf("Invalid input. Re-Enter value = ");
		scanf("%d",&num);
	}

	if (isArmstrong(num) == num) printf("%d is an Armstrong number\n",num);
	else printf("%d is not an Armstrong number\n",num);
}
