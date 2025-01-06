#include<stdio.h>

void main(){
	
	int size;
	printf("Enter Size");
	scanf("%d",&size);
	int arr[size];
	int sum=0;
	for(int i=0;i<size;i++){

		scanf("%d",&arr[i]);
	}
	for(int i=0;i<size;i++){

		sum=sum+(arr[i]*arr[i]);


	}
	printf("sum=%d\n",sum);




}
