#include <stdio.h>

int mystrlen(int size, char name[size]){
	int count = 0;

	for (int i = 0; i < size; i++){
		if (name[i] != '\0'){
			count ++;
		}
	}
	return (count);
}	
	
void main () {
	printf("Enter your string = ");
	
	int i = 0,size = 1;
	char name[size];
	char ch;
	
	while ((ch = getchar()) != '\n'){
		name [i] = ch;
		i++;
		size++;
	}
	name [i] = '\0';
	printf("%d\n",mystrlen(size,name));
}
