#include <stdio.h>

int mystrtoint (int size, char arr1[size]){
	int i = 0, temp = 0;
	while (arr1[i] != '\0'){
		if (arr1[i] > 47 && arr1[i] < 58){
			if (arr1[i] == 48) arr1[i] = 0;
			else if (arr1[i] == 49) arr1[i] = 1;
			else if (arr1[i] == 50) arr1[i] = 2;
			else if (arr1[i] == 51) arr1[i] = 3;
			else if (arr1[i] == 52) arr1[i] = 4;
			else if (arr1[i] == 53) arr1[i] = 5;
			else if (arr1[i] == 54) arr1[i] = 6;
			else if (arr1[i] == 55) arr1[i] = 7;
			else if (arr1[i] == 56) arr1[i] = 8;
			else if (arr1[i] == 57) arr1[i] = 9;
			
			temp = (temp * 10) + arr1[i];
			i++;
		} else{ 
			i++;
			continue;
		}
	}
	//num = temp;
	return temp;
}

void main () {
	int i = 0, size = 1,num;
	printf("Enter some digits = ");
	char arr1[size], ch;

	while ((ch = getchar()) != '\n'){
		arr1[i] = ch;
		i++; size++;
	}
	arr1[i] = '\0';
	printf("String = %s\n",arr1);
	printf("String to Integer = %d\n",mystrtoint(size,arr1));
}
