


#include<stdio.h>


void main(){
	int a;
	int b;
	int c;
	printf("Enter first side which is largest one :- ");
	scanf("%d",&c);
	printf("Enter second side :- ");
	scanf("%d",&a);
	printf("Enter third side :- ");
        scanf("%d",&b);


	if(c*c==a*a+b*b){
		printf("its Pythagorean triplet. \n");
	}
	else{
		printf("its not a Pythagorean triplet. \n");
	}
}
