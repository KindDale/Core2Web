#include <stdio.h>

char* trim (int size1, char arr1[size1],int size2,char arr2[size2]){
	int i = 0, j = 0;
	while (arr1[i] != '\0'){
		if (arr1[i] == ' '); 
		else {
			arr2[j] = arr1[i];
			size2++; j++; 
		} 
		i++;	
	}
	return arr2;
}

void main () {
	printf("Enter a string = ");
	int i = 0, size = 1;
	char arr1[size],ch;
	int size2 = 1;
	char arr2[size2];

	
	while ((ch = getchar()) != '\n'){
		arr1[i] = ch;
		i++; size++; //size2++;
	}

	arr1[i] = '\0';

	printf("Original string = %s\n",arr1);
	printf("Trimmed string = %s\n",trim(size, arr1, size2, arr2));
}	
