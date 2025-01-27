#include <stdio.h>

int palindrome (int x){
	int num;
	while (x > 0){
		num = num * 10 + (x%10);
		x /= 10;
	}
	return num;
}

void main () {
	int num;
	printf("Enter a number = ");
	scanf("%d",&num);
	
	while (num < 0){
		printf("Invalid number. Re-Enter value = ");
		scanf("%d",&num);
	}
	if (palindrome(num) == num) printf("%d is a palindrome number\n",num);
	else printf("%d is not palindrome number\n",num);
}
