#include <stdio.h>

int digit (int size, char arr[size]){
	for (int i = 0; i < size; i++){
		if (!(arr[i] > 47 && arr[i] < 58)) return 0;
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
	
	int result = digit(size,arr);
	if (result == 0) printf("The given string doesn't contains only digits\n");
	else printf("The given string consists only digits\n");
}
