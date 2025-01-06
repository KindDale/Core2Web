#include<stdio.h>

void main(){
	
	int N;
	printf("Enter The Size of Array:");
	scanf("%d",&N);
	int arr[N];
	if (N<0||N==0){
		
		printf("Re-enter the size:");
		scanf("%d",&N);
	
	}
	else{
		for(int i=0; i < N ; i++){

			scanf("%d",&arr[i]);

		}
		printf("Reverse Array Is:");
		for(int i=(N-1) ; i>=0 ; i--){

			printf("%d ",arr[i]);

		}
		

	}


}
