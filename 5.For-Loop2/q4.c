

#include <stdio.h>

void main () {
	int start, end;
	printf("Enter START and END values\n");
	scanf("%d %d",&start, &end);

	int sum = 0;

	for (int i = start; i <=end; i++){
		sum = sum + i;
	}
	printf("%d\n",sum);
}
