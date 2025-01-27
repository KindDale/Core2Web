#include <stdio.h>

int isUpper(char ch){
	if (ch > 64 && ch < 91) return 1;
	else return 0;
}

void main () {
	char ch;
	printf("Enter a character = ");
	scanf("%c",&ch);
	getchar();

	int x = isUpper(ch);
	if (x == 1)
		printf("The given letter is Upper Case\n");
	else 
		printf("The given letter is Lower Case\n");
}
