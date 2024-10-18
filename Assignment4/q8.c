

#include <stdio.h>
void main() {
	int i, count = 0;
	for (i = 2; i <= 200; i++){
		if(i%2 ==0){
			count++;
		}
		
	}
	printf("There are %d even numbers between 2 and 200 \n",count);
}
