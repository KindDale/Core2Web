#include <stdio.h>

void main () {
	int size;
        printf("Enter the size of the array = ");
        scanf("%d",&size);

	int arr[size];

        for (int i = 0; i < size; i++){
                scanf("%d",&arr[i]);
        }

	printf("The numbers with even sum are = ");
	for (int i = 0; i < size; i++){
		int sum=0;
		int temp=0;
		int num=arr[i];
		while(num>0){
			sum+=num%10;
			num=num/10;
		
		}
		if(sum%2==0){
			printf("%d ",arr[i]);
		}
	}
	printf("\n");
}
