

#include <stdio.h>
void main() {
	int i,count = 0;
	for (i = 1; i <= 100; i++){
		if (i % 2 == 0 && i % 5 == 0){
			count++;
		}
	}
	printf("There are %d numbers divisible with 2 and 5 from 1 to 100 \n",count);
}
