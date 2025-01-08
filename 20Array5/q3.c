



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


	int ceven=0;
	int codd=0;

	for(int i = 0;i<size;i++){
		if(arr1[i]%2==0){
			ceven++;
		}

		else{
			codd++;
		}
	}

	printf("\n\nThe Even Count is %d. \n\n",ceven);
	printf("\n\nThe Odd Count is %d. \n\n",codd);

}


