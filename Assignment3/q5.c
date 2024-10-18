

#include<stdio.h>

void main(){
	int m;
	printf("Enter Percentage of student :- ");
	scanf("%d",&m);
	if(100>=m>=85){
		printf("Enter science field \n");
	}
	else if(85>m>=65){
		printf("Enter Commarce field \n");
	}
	else if(65>m){
		printf("Enter Arts field \n");
	}
	else{
		printf("Invalid input\n");
	}
}

