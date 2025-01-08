
#include<stdio.h>

void main(){

        int size;
        printf("Enter size of array 1 :-  ");
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

	int size2;
        printf("\nEnter size of array 2 :-  ");
        scanf("%d",&size2);

        int arr2[size2];

        printf("Enter the elements of Array :- \n ");

        for(int i = 0; i<size2;i++){
                printf("Element %d :- ",i+1);
                scanf("%d",&arr2[i]);

        }

        printf("Array is \n");
        for(int i =0;i<size2;i++){
                printf(" | %d |",arr2[i]);

        }
	printf("\nCommon elements \n");
	for(int i=0;i<size;i++){
		for(int j =0;j<size;j++){
			if(arr1[i]==arr2[j]){
				printf("| %d |",arr1[i]);
			}
		
		}
	}

}
