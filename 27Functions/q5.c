#include <stdio.h>

int isPrime(int x){
	int flag = 0;
	for (int i = 2; i < x-1; i++){
		if (x%i == 0){
			flag = 1;
			break;
		} 
	}
	if (flag == 0) return x;
	else return 0;
}

void main () {
	int num;
	printf("Enter a number\n");
	scanf("%d",&num);

	while (num < 0){
		printf("Invalid Size. Re-Enter value = ");
		scanf("%d",&num);
	}
	if (isPrime(num) == num){
		printf("%d is a Prime number\n",num);
	} else {
		printf("%d is not a Prime number\n",num);
	}
}
