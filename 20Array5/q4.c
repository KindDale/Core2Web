


#include<stdio.h>

void main(){

        int size;
        printf("Enter size :-  ");
        scanf("%d",&size);

        char arr1[size];

        printf("Enter the elements of Array :- \n ");
	
        for(int i = 0; i<size;i++){
		getchar();
                printf("Element %d :- ",i+1);
                scanf("%c",&arr1[i]);

        }
		
        printf("\nFormat output \n\n");
	for(int i =0;i<=size;i++){
		for(int j = 0;j<i;j++){
			printf(" %c",arr1[j]);
		}
		printf("\n");
        }
}





