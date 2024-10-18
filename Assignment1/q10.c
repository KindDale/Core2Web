



#include <stdio.h>
void main () {
        int num1;

        printf("Enter 1st number = \n",num1);
        scanf("%d",&num1);

        if (num1%3 == 0){
                printf("%d is divisible by 3\n",num1);
        }
        else {
                printf("%d is not divisible by 3\n",num1);
        }
}

