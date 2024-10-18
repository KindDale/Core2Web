


#include<stdio.h>


void main(){

	int d;
	printf("Enter distance in km to be traveled :- ");
	scanf("%d",&d);

	if(d<5){
		printf("Prefer cycle of distance of %d. \n",d);
	}
	else if(10>=d && d>5){
		 printf("Prefer rickshaw of distance of %d. \n",d);
	}
	else if(15>=d && d>10){
                 printf("Prefer car of distance of %d. \n",d);
        }
	else if(20>=d && d>15){
                 printf("Prefer bus of distance of %d.\n",d);
        }
	else if(30>=d && d>20){
                 printf("Prefer super bus of distance of %d.\n",d);
        }
	else if(70>=d && d>30){
                 printf("Prefer train of distance of %d.\n",d);
        }
	else{
		printf("Don't travel\n");
	}




}
