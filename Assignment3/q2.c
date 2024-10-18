

#include<stdio.h>

void main(){
	int y;
	printf("Enter the year to be checked :- ");
	scanf("%d",&y);

	if(y%4==0){
		printf("The year of %d is a leap year \n",y);
	}
	else{
		 printf("The year of %d is not a leap year \n",y);
	}

}
