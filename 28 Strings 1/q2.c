#include <stdio.h>

char* mystrcpy(int size, char arr[size], char arrcpy[size]){
	int i = 0;
	while (arr[i] != '\0'){
		arrcpy[i] = arr[i];
		i++;
	}
	arrcpy[i] = '\0';
	
	return arrcpy;
}

void main () {
	int i = 0, size = 1;
	printf("Enter a string = ");	
	char arr[size],ch, arrcpy[size];
		
	while ((ch = getchar()) != '\n'){
		arr[i] = ch;
		i++; size++;
	}

	arr[i] = '\0';
	printf("Copied String = %s\n",mystrcpy(size,arr,arrcpy));
}
