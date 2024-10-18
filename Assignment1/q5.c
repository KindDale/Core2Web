

#include <stdio.h>
void main () {
	int num1 = 10, num2 = 20, temp;
	printf("Before swapping num1 = %d and num2 = %d\n",num1,num2);

	temp = num2;
	num2 = num1;
	num1 = temp;

	printf("After swapping num1 = %d and num2 = %d\n",num1,num2);
}
