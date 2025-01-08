
#include<stdio.h>

void main(){

        int num;
        printf("Enter number :-  ");
        scanf("%d",&num);

        int arr[10];

        printf("\nMultiplication table of %d is:- \n ",num);

        for(int i = 0; i<10;i++){
		arr[i] = num * (i+1);
        }
	
	int *ptr = arr;
   
        for(int i =0;i<10;i++){
                printf("%d x %d  = %d \n",num,i+1,*(ptr+i));
        } 
}	
