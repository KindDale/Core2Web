


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

	int Eqsum = 0;
	int Oqsum = 0;
	for(int i = 0; i<size;i++){
		if(arr1[i]%2==0){
			Eqsum = Eqsum + (arr1[i]*arr1[i]);
		}

		else{
			Oqsum = Oqsum + (arr1[i]*arr1[i]);
		}
	}
	
	int diff = Eqsum - Oqsum;

	printf("\nDifference is : - %d\n\n",diff);

}
