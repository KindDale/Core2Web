#include <stdio.h>

void main() {
    int num, digit, isDuck = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

   
    if (num == 0) {
        printf("0 is not a Duck number\n");
        return;
    }

   
    while (num > 0) {
        digit = num % 10; 
        if (digit == 0) {
            isDuck = 1; 
        }
        num /= 10; 
    }

    if (isDuck) {
        printf("The number is a Duck number\n");
    } else {
        printf("The number is not a Duck number\n");
    }
}

