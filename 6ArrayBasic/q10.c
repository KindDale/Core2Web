#include <stdio.h>

int main () {
	int size;
	printf("Enter the size of the array\n");
	scanf("%d",&size);
	getchar();

	char arr[size];

	printf("Enter the array elements\n");
	for (int i = 0; i < size; i++){
		scanf("%c",&arr[i]);
		getchar();
	}

	for (int i = 0; i < size; i++){
		if (arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u'|| arr[i] =='A' || arr[i] =='E' || arr[i] == 'I' || arr[i] == 'O' || arr[i] == 'U'){
			printf("Vowel %c at index %d\n",arr[i],i);
		}
	}
	return 0;
}
