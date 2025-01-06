
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
	int pro=1;
	printf("-----------------------");
	for(int i = 0 ; i < N ; i++){
		
		if(arr[i]%2==0){
			arr[i]=arr[i]*arr[i];
		}
		else{

			arr[i]=arr[i]*arr[i]*arr[i];

		}
		
	}
	for (int i = 0 ; i < N ; i++){

		printf("%d\n",arr[i]);


	}

}
