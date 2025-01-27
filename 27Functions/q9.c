#include <stdio.h>

int digSum (int num){
	int sum = 0;
	while (num != 0){
		sum += (num % 10);
		num /= 10;
	}	
	return sum;
}

int niven (int num){
	if (num % digSum(num) == 0) printf("%d is a Niven number\n",num);
	else printf("%d is not a Niven number\n",num);
}

void main () {
	int num;
	printf("Enter a number = ");
	scanf("%d",&num);

	while (num < 0){
		printf("Invalid Input. Re-Enter Value = ");
		scanf("%d",&num);
	}

	niven(num);
}
