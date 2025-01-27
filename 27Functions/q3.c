#include <stdio.h>

int square (int x){
	return x*x;
}

void main () {
	int start, end;
	printf("Enter the Starting range \n");
	scanf("%d",&start);
	printf("Enter the Ending range\n");
	scanf("%d",&end);

	while (start > end || start == end || start < 0 || end < 0){
		if (start > end){
			printf("Starting index must be less than Ending index. Re-Enter Value \n");
			printf("Start = ");
			scanf("%d",&start);
			printf("End = ");
			scanf("%d",&end);
		}
		if (start == end){
			printf("Starting index is equal to the Ending index. Re-Enter Value \n");
			printf("Start = ");
			scanf("%d",&start);
			printf("End = ");
			scanf("%d",&end);
		
		}
		if (start < 0){
			printf("Starting index must be greater than 0. Re-Enter Value \n");
			printf("Start = ");
			scanf("%d",&start);
		}
		if (end < 0){
			printf("Ending index must be greater than 0. Re-Enter Value \n");
			printf("End = ");
			scanf("%d",&end);
		}
	}
	printf("Squares from range %d to %d are\n",start,end);
	for (int i = start; i <= end; i++){
		printf("%d = %d\n",i,square(i));
	}
}
