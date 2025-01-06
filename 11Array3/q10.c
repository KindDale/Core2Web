#include <stdio.h>

void main () {
	int size1,size2;
	printf("Enter the size of the 1st array = ");
	scanf("%d",&size1);

	int arr1[size1], arr2[size2];

	printf("Enter the elements of the 1st array\n");
        for (int i = 0; i < size1; i++){
                scanf("%d",&arr1[i]);
        }
	
	printf("Enter the size of the 2nd array = ");
	scanf("%d",&size2);

        printf("Enter the elements of the 2nd array\n");
        for (int i = 0; i < size2; i++){
                scanf("%d",&arr2[i]);
        }
	int sum1 = 0, sum2 = 0;
	for (int i = 0; i < size1; i++){
		if (i % 2 == 0){
			sum1 = sum1 + arr1[i];
		} 
	}
	printf("The sum of the even indexed elements of the 1st array is = %d\n",sum1);
	for (int i = 0; i < size2; i++){
                if (i % 2 == 1){
                        sum2 = sum2 + arr2[i];
                }
        }
	printf("The sum of the odd indexed elements of the 2nd array is = %d\n",sum2);
}
