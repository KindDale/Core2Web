#include<stdio.h>


void main(){

	int size;
	printf("enter size:");
	scanf("%d",&size);
	int arr[size];
	for(int i = 1;i < size;i++){
		scanf("%d",&arr[i]);
		if(arr[i]>5){
			printf("Re enter");
			scanf("%d",&arr[i]);
		}
	}
	for(int i=0;i<size;i++){
		printf("%d",arr[i]);

	}



}
