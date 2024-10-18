

#include <stdio.h>
void main () {
	char ch;
	printf("Enter something : \n");
	scanf("%c",&ch);

	if (ch >= 'A' && ch <= 'Z'){
		printf("The character is in UPPERCASE\n");
	} else if(ch >= 'a' && ch <='z') {
		printf("The character is in lowercase\n");
	} else {
		printf("There is no character\n");
	}
}
