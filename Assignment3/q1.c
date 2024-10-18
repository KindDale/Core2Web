

#include<stdio.h>

int main(){
	int x;
	printf("Enter number to be Checked :- ");
	scanf("%d",&x);

	if(1<=x<=1000){
		printf("The number %d is in the range of 1 to 1000 \n ",x );
	}
	else{
		printf("The number %d is not in the range of 1 to 1000 \n ",x );
	}
}
