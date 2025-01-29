#include <stdio.h>

int alphabet (int size, char arr[size]){
	for (int i = 0; i < size; i++){
		if (!((arr[i] > 64 && arr[i] < 91) || (arr[i] > 96 && arr[i] < 123))) return 0;
	}
	return 1;
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
        size = i;
        printf("Original String = %s\n",arr);

        int result = alphabet(size,arr);
        if (result == 0) printf("The given string doesn't consists of only alphabets\n");
        else printf("The given string consists only alphabets\n");
}
