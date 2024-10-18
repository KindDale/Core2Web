

#include<stdio.h>

void main(){
	int c;
	int s;
	int a;
	printf("Enter cost price of product :- ");
	scanf("%d",&c);

	printf("Enter selling price of product :- ");
        scanf("%d",&s);

	if(c>s){
		a = c-s;
		printf("Its a profit of %d. \n",a);
	}
	else if(s>c){
		a = s-c;
                printf("Its a profit of %d. \n",a);
	}
	else{
                printf("Its not a profit nor loss. \n");
	}

}
