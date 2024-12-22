#include <stdio.h>

int main() {
    int rows;
    char start;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the starting character: ");
    scanf(" %c", &start);

    for (int i = 0; i < rows; i++) {
        for (char ch = start; ch >= 'A'; ch--) {
            printf("%c ", ch);
        }
        printf("\n");
    }

    return 0;
}

