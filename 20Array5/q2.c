

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

	int occ = -1;
	int num;
	printf("\n\nEnter number to find :- ");
	scanf("%d",&num);
	for(int i = 0; i<size; i++){
		if(arr1[i]==num){
			occ = i; 
		}
	}
	
	if(occ==-1){
		printf("\n\nNumber not present in Array\n\n");
	}
	else{
	
		printf("\n\nElement is present at %d  \n",occ);
	}

}

