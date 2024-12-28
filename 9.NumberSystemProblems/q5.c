//count of digits

#include <stdio.h>

void main () {
	int num,count=0;
	printf("Enter your number = ");
	scanf("%d",&num);
	printf("\n");
	

	while (num != 0){
		num /= 10;
		count++;
		
	}
	printf("The above number has %d digits\n",count);	

}
