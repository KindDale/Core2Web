

#include <stdio.h>

void main () {
	int x;
	
	printf("Enter a number = ");
	scanf("%d",&x);
	printf("%d\n",x);
	

	if (x < 10){
		printf("%d is less than 10\n",x);
	}
	else if (x == 10){
		printf("The number is equal to 10\n");
	}	
	else if (x > 10 && x <=20){
		printf("%d is greater than 10 but less than 20\n",x);
	}
	else {
		printf("Happy Coding\n");
	}
}
