#include <stdio.h>

int mystrchr(int size, char arr[size],char occ){
	
	int count = 0;

	for (int i = 0; i < size; i++){
		if (arr[i] == occ){
			return count;
		}
		count++;
	}
	printf("No element present\n");
	return -1;
}

void main () {
	printf("Enter a string = ");
	int i = 0, size = 1;
	char arr[size], ch;

	while ((ch = getchar()) != '\n'){
		arr[i] = ch;
		i++; size++;
	}
	arr[i] = '\0';

	printf("Original String = %s\n",arr);
	printf("Occurence of which character = ");
	
	char occ;
	scanf("%c",&occ);
	getchar();		
	if (mystrchr(size,arr,occ) != -1)
		printf("Output = %d\n",mystrchr(size,arr,occ));
}
