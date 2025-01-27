#include <stdio.h>

int isDuck (int x){
	int num = 0;
	while (x > 0){
		num = x % 10;
		x /= 10;
		if (num == 0) return 1;		
	}
	return 0;
}

void main () {
	int num;
	printf ("Enter a number = ");
	scanf("%d",&num);

	while (num < 0){
		printf("Invalid value. Re-Enter number = ");
		scanf("%d",&num);
	}

	if (isDuck(num) == 1) {
		printf("%d is a Duck number\n",num);
	}else if (isDuck(num) == 0) {
		printf("%d is not a Duck number\n",num);

	}
}

