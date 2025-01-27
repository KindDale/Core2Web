#include <stdio.h>

int factorial (int x){
	int fact = 1;
	while (x > 0){
		fact *= x;
		x--;
	}
	return fact;
}

int strong(int x){
	int sum = 0;
	while (x > 0){
		sum = sum + factorial(x%10);
		x/=10;
	}
	return sum;
}

void main () {
	int num;
	printf("Enter a number\n");
	scanf("%d",&num);

	while (num < 0){
		printf("Number should be greater than 0. Re-Enter value = ");
		scanf("%d",&num);
	}
	if (strong(num) == num){
		printf("%d is a strong number\n",num);
	} else {
		printf("%d is not a strong number\n",num);
	}
}
