


#include<stdio.h>

void main(){

        int size;
        printf("Enter size :-  ");
        scanf("%d",&size);

        int arr[size] , arreven[size] , arrodd[size];

        printf("Enter the elements of Array :- \n ");

        for(int i = 0; i<size;i++){
                printf("Element %d :- ",i+1);
                scanf("%d",&arr[i]);

        }

        printf("Array is \n");
        for(int i =0;i<size;i++){
                printf(" | %d |",arr[i]);
        }
	printf("\n");
	int j=0;
	int k=0;

	for(int i=0;i<size;i++){
		if(arr[i]%2==0){
			arreven[j]=arr[i];
			j++;
		}
		else{
			arrodd[k]=arr[i];
			k++;
		}
	}

	printf("\n\n Even Array :- \n");
	for(int i=0;i<j;i++){
		printf(" | %d |",arreven[i]);
	
	}

	printf("\n\nOdd Array :-\n");
	for(int i=0;i<k;i++){                                                                                                                                               printf(" | %d |",arrodd[i]);
	}

}

