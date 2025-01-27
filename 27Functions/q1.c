#include <stdio.h>

int factorial (int x){
	int fact = 1;
	while (x > 0){
		fact *= x;
		x--;
	}
	return fact;	
}

void main () {
	int num;
	printf("Enter a positive Integer = ");
	scanf("%d",&num);

	while (num < 0){
		printf("Invalid Input Re-Enter the number\n");
		scanf("%d",&num);
	}
	printf("Factorial of %d = %d\n",num,factorial(num));
}
