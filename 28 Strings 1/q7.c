#include <stdio.h>

char* replace (int size,char arr[size],char ch1,char ch2){
	for (int i = 0; i < size; i++){
		if (arr[i] == ch1){
			arr[i] = ch2;
		} 
	}
	return arr;	
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
	char ch1,ch2;
	
	printf("Letter to Replace = ");
	scanf("%c",&ch1);
	getchar();

	printf("To be replaced with = ");
	scanf("%c",&ch2);
	getchar();
	
	printf("Output = %s\n",replace(size,arr,ch1,ch2));

}
