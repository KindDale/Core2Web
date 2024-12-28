

#include <stdio.h>

void main () {
	int num,sum=0;
	printf("Enter a number = ");
	scanf("%d",&num);
	printf("\n");

	for (int i = 1; i <= num/2; i++) {
		if (num % i == 0){
			sum = sum + i;
		}
	}
	printf("%d\n",sum);
	if (num == sum){
		printf("The number is a perfect number \n");
	} else {
		printf("The number is not a perfect number \n");
	}
	
	
	
}
