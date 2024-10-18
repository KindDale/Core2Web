

#include <stdio.h>
void main () {
        int num1,num2;

	printf("Enter 1st number = \n",num1);
	scanf("%d",&num1);

	printf("Enter the 2nd number = \n",num2);
	scanf("%d",&num2);
        if (num1%2 == 0){
                printf("Number is even\n");
        }
	else {
                printf("Number is odd\n");
        }

	if (num2%2 == 0){
		printf("Number is even\n");
	
	}
	else {
		printf("Number is odd\n");
	}
}

