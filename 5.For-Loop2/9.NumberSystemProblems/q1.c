

#include <stdio.h>

void main () {
	int num;
	printf("Enter your number = ");
	scanf("%d",&num);
	printf("\n");
	
	printf("The factors of %d are = ",num);
	for (int i = 1; i <= num; i++){

		if(num%i==0){
			printf(" %d ",i);
		}
	}
	printf("\n");
}
