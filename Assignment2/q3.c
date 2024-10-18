

#include <stdio.h>

void main () {
	int num;
	printf ("Enter a number = \n");
	scanf("%d",&num);

	if (num % 7 == 0){
		if (num < 21){
			printf("The number is divisible by 7 and less than 21\n");
		} else if (num > 21){
			printf("The number is divisible by 7 and greater than 21\n");
		} else {
			printf("The number is divisible by 7 and is 21\n");
		}
	}
	if (num % 7 != 0){
		if (num < 21){
                        printf("The number is not divisible by 7 and less than 21\n");
                } else if (num > 21){
                        printf("The number is not divisible by 7 and greater than 21\n");
            	}

	}
}
