






#include<stdio.h>

void main(){

	int size;
	printf("Enter size :-  ");
	scanf("%d",&size);

	int arr1[size];

	printf("Enter the elements of Array :- \n ");

	for(int i = 0; i<size;i++){
		printf("Element %d :- ",i+1);
		scanf("%d",&arr1[i]);

	}

	printf("Array is \n");
	for(int i =0;i<size;i++){
		printf(" | %d |",arr1[i]);



	}
	
	int ind;
	printf("\n\nEnter the index number :- ");
	scanf("%d",&ind);

	printf("Element at index %d is %d. \n",ind,arr1[ind]);
}
