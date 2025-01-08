



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

	int count = 0;
	for(int i = 0;i<size;i++){
		if(arr1[i]>arr1[i+1]){
			count++;
		}
	
	}

	if(count == size-1){
		printf("\nDecreasing order present \n");
	}

	else{
		printf("\nDecreasing order not followed \n");
		
        }                                                
}
