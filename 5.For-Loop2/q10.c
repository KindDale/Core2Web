

#include <stdio.h>

void main () {
	int num, count = 0;

	printf("Enter a number = ");
	scanf("%d",&num);
	printf("\n");
	
	for (int i = 1; i < (num/2); i ++){
		if (num%i==0){
			count++;
		} 
	}
	
	if (count <= 1){
		printf("Prime number\n");
	} else {
		printf("Composite number\n");
	}
}
