

#include <stdio.h>

void main () {
	int num,prod;
	printf("Enter a number = ");
	scanf("%d",&num);
	printf("\n");

	if (num%2==0){
		printf("Table of even number is\n");
		for (int i = 1; i <= 10; i++){
			prod = num * i;
			printf("%d\n",prod);	
		}
	} else {
		printf("Table of odd number is \n");
		for (int i = 10; i >= 1; i--){
			prod = num * i;
			printf("%d\n",prod);
		}
	}
}
