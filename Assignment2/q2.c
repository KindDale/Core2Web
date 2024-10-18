

#include <stdio.h>

void main () {
	int num;
	printf ("Enter a number = \n");
	scanf ("%d",&num);

	if (num%5 == 0 && num % 10 == 0){
		printf("Number is divisible by 5 and 10\n");
	} else {
		printf("Number is not divisible by 5 and 10\n");
	}
}
