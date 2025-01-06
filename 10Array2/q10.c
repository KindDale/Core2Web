
#include<stdio.h>

void main(){

	int N;
	printf("Enter Size of Array:");
	scanf("%d",&N);
	int arr[N];
	printf("Enter The Elements:");
	for(int i = 0 ; i < N ; i++){	
		scanf("%d",&arr[i]);
	}
	printf("Array:");
	for(int i = 0 ; i < N  ; i+=2){
		
		printf("%d |",arr[N-i-1]);
		
	}
	

}
