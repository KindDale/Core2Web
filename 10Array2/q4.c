#include<stdio.h>

void main(){

	int size;
	printf("Enter Size:");
	scanf("%d",&size);
	int arr[size];
	printf("Enter Ids Of Student");
	for(int i =0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	printf("Id to be searched");
	int key;
	scanf("%d",&key);
	
	for(int i=0;i<size;i++){
		if(arr[i]==key){
			printf("enter %d element is at index =%d",key,i);
			break;
	     }
	}

	
}
