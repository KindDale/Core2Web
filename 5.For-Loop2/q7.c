

#include <stdio.h>

void main () {
	int start, end, cube;
	printf("Enter the starting and ending numbers respectively\n");
	scanf("%d %d",&start,&end);
	
	printf("Cube of odd numbers is\n");
	
	if (start%2==1){	
		for (int i = start; i <= end; i=i+2){
			cube = i * i * i;
			printf("%d\n",cube);
		}
	}

}
