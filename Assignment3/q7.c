


#include<stdio.h>

int main(){
	int m;
	printf("Enter percentage of student :- ");
	scanf("%d",&m);
	if(100>m && m>=75){
		printf("The grade is first class with distinction \n");
	}
	else if(75>m&&m>=60){
		printf("The grade is first class \n");
	}
	else if(60>m&&m>=50){
		printf("The grade is second class \n");
	}
	else if(50>m&&m>=40){
		printf("The grade is third class \n");
	}
	else if(40>m){
		printf("The grade is fail \n");
	}
	else {
		printf("Invaild input \n");
	}
}

