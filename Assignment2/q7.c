

#include <stdio.h>
void main() {
	int num1, num2;
	printf ("Enter the 2 numbers = \n");
	scanf("%d %d",&num1, &num2);

	if (num1 > num2){
		printf("%d is greater than %d\n",num1, num2);
	}else if(num1 < num2){
                printf("%d is smaller than %d",num1, num2);
	}else {
		printf("Both numbers are equal\n");
	}
}
