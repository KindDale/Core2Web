//Prime or not  

#include <stdio.h>

void main () {
	int num,count;
	printf("Enter your number = ");
	scanf("%d",&num);
	printf("\n");

	for (int i = 1; i <= num; i++){
		if (num%i==0){
			count++;
		}
		}
		if (count > 2){
			printf("%d is composite number \n",num);
		} else {
			printf("%d is prime number \n",num);
		}
}
