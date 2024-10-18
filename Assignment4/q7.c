

#include <stdio.h>
void main () {
	int n,i, count = 0;
	printf("Enter a number : \n");
	scanf("%d",&n);

	for (i = 2; i<=10; i++){
		if (n%i == 0){
			count++;
		}
	} printf("Divisors of %d in the range of 2 and 3 are = %d\n",n,count);

}
