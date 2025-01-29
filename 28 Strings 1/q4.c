#include <stdio.h>

char* mystrupr (int size, char arr1[size]){
	int i = 0;
	char temp = 0;
	while (arr1[i] != '\0'){
		if (arr1[i] > 95 && arr1[i] < 123){
			temp = arr1[i] - 32;
			arr1[i] = temp;
			i++;
		} else {
			i++;
			continue;
		}
	}
	return arr1;
}

void main () {
	printf("Enter a String = ");

	int i = 0, size = 1;
	char arr1[size], ch;

	while ((ch = getchar()) != '\n'){
		arr1[i] = ch;
		i++;
	}
	arr1[i] = '\0';
	printf("Original string = %s\n",arr1);
	printf("Converted string = %s\n",mystrupr(size,arr1));
}
