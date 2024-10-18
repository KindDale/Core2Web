

#include <stdio.h>

void main() {
	int age;
	printf("Enter age : \n");
	scanf("%d",&age);

	if (age >= 18){
		printf("Eligible for voting \n");
	} else {
		printf("Not eligible for voting \n");
	}
}
