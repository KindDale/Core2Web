

#include <stdio.h>

void main () {
	int num;
	printf("Enter your value\n");
	scanf("%d",&num);

	for (int i = 1; i <= 10; i++){
		int p = i*num;
		printf("%d\n",p);
		
	}
}
