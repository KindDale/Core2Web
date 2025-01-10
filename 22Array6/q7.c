#include<stdio.h>

void main(){

	int size1,size2;
	printf("Enter Size Of Array 1:");
	scanf("%d",&size1);
	
	int arr1[size1];
	

	printf("Enter Elements  Of Array 1:\n");
	for(int  i = 0 ; i < size1 ; i++){
		scanf("%d",&(arr1[i]));
	}
	
	printf("Enter the size of Array 2:");
	scanf("%d",&size2);
	int arr2[size2];

	printf("Enter Elements  Of Array 2:\n");
	for(int  i = 0 ; i < size2 ; i++){
		scanf("%d",&(arr2[i]));
	
	}
	
	printf("Uncommon elements are\n");

	for (int i = 0; i < size1; i++){
		int flag = 0;
		for (int j = 0; j < size2; j++){
			if (arr1[i] == arr2[j]){
				flag = 1;
			}
		}
		if(flag == 0){
			printf("%d\n",arr1[i]);
		}
		
	}	
	for (int i = 0; i < size2; i++){
		int flag = 0;
                for (int j = 0; j < size1; j++){
                        if (arr2[i] == arr1[j]){
                                flag = 1;
                        }
                }
		if(flag == 0){
			printf("%d\n",arr2[i]);
		}
        }
	
}

