#include <stdio.h>

void main () {
	int rows;
	printf("Enter the size of the loop = ");
	scanf("%d",&rows);

	for (int i = 0; i < rows; i++) {  
        char ch = 'A' + i;           
        int num = 65 + i;            

        for (int j = i; j < rows; j++) { 
            if ((i+j) % 2 != 0) {     
                printf("%c ", ch);
                
            } else {                     
 		printf("%d ", ch);
                
            }
	    ch++;
        }
        printf("\n"); 
    }
}
