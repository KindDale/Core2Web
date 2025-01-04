#include <stdio.h>

int is_prime(int num) {
    if (num <= 1) {
        return 0; 
    }

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; 
        }
    }
    return 1; 
}
int main() {
    int rows, count = 0, num = 2;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= rows; j++) {
            
            while (!is_prime(num)) {
                num++;
            }
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }

    return 0;
}
