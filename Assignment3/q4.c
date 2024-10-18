


#include<stdio.h>


void main(){
	int u;
	int A;
	printf("Enter Your meter units to check the bill :- ");
	scanf("%d",&u);
	if(u<=100){
		A=u*5;
		printf("Your total electricity bill for  %d units is %d. \n",u,A);	
	}
	else if(100<u<=300){
		A=500+((u-100)*7);
		printf("Your total electricity bill for  %d units is %d. \n",u,A);
	}
	else{
		A=1900+((u-300)*10);
		printf("Your total electricity bill for  %d units is %d. \n",u,A);
	}



}
