#include <stdio.h>

int palindrome (int num) {
	int temp = 0;
	while (num > 0){
		temp = temp * 10 + (num % 10);
		num /= 10;
	}	
	return temp;
}

int factorial (int num){
	int fact = 1;
	for (int i = 1; i <= num; i++){
		fact *= i;
	}
	return fact;
}
int strongnum (int num){
	int sum = 0,temp = 0;
	int fact = 1;
	while (num > 0){
		temp = num % 10;
		sum += factorial(temp);
		num /= 10;
	}	
	return sum;
}

void main () {
	int size;
	printf("Enter the array size = ");
	scanf("%d",&size);

	while (size < 0 || size > 10){
                printf("Invalid Size Re-Enter Size \n");
                scanf("%d",&size);
        }

        int arr[size];

        printf("Enter the array elements\n");
	
	for (int i = 0; i < size; i++){
		scanf("%d",&arr[i]);
	}

	for (int i = 0; i < size; i++){
		if (palindrome(arr[i]) == arr[i]){
			printf("%d is a Palindrome number\n",arr[i]);
		} else if (strongnum(arr[i]) == arr[i]){
			printf("%d is a strong number\n",arr[i]);
		} else if (arr[i] % 2 == 0){
			printf("%d is an Even number\n",arr[i]);
		} else if (arr[i] % 2 != 0){
			printf("%d is an Odd number\n",arr[i]);
		}

	}
}
