
#include<stdio.h>

void main(){

	int N;
	printf("Enter Size of Array:");
	scanf("%d",&N);
	char arr[N];
	printf("Enter The Elements:");
	for(int i = 0 ; i < N ; i++){
		getchar();	
		scanf("%c",&arr[i]);
	}
	printf("Array:");
	for(int i = 0 ; i < N ; i++){
		
		if(i%2==0){
			printf("%c |",arr[i]);
		}
		
	}
	

}
