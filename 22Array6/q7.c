//Doubt

#include<stdio.h>

void main(){

	int size;
	printf("Enter Size Of Array:");
	scanf("%d",&size);
	
	int arr1[size],arr2[size];

	printf("Enter Elements  Of Array:\n");
	for(int  i = 0 ; i < size ; i++){
		scanf("%d",&(arr1[i]));
	}

	printf("Enter Elements  Of Array2:\n");
	for(int  i = 0 ; i < size ; i++){
		scanf("%d",&(arr2[i]));
	}
	
}
