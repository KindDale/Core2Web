
#include<stdio.h>

void main(){

	int N,n;
	printf("Enter Size of Array:");
	scanf("%d",&N);
	int arr[N];
	printf("Enter The Elements:");
	for(int i = 0 ; i < N ; i++){
		getchar();	
		scanf("%d",&arr[i]);
	}
	printf("Enter Index To Which You Want To Print");
	scanf("%d",&n);
	while(n>N){
		printf("Please Re-enter:");
		scanf("%d",&n);
	}
	printf("Array:");
	for(int i = 0 ; i < n ; i++){
		
			printf("%d |",arr[i]);
		
	}
	

}
