#include<stdio.h>

void main(){

	int size;
	printf("Enter Size");
	scanf("%d",&size);
	char arr[size];
	
	for(int i = 0 ; i < size ; i++){
		getchar();
		scanf("%c",&arr[i]);


	}
	for(int i = 0; i < size ; i++){

		printf("%d\n",arr[i]);

	}

}
