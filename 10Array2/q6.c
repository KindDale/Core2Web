
#include<stdio.h>


void main(){

	int size;
	printf("enter size:");
	scanf("%d",&size);
	float arr[size];
	for(int i = 1;i < size;i++){
		scanf("%f",&arr[i]);
		if(arr[i]<5.5||arr[i]>6){
			printf("Re enter");
			scanf("%f",&arr[i]);
		}
	}
	for(int i=0;i<size;i++){
		printf("%f",arr[i]);

	}



}
