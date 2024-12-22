

#include <stdio.h>

void main () {
	int start, end;
        printf("Enter START and END values\n");
        scanf("%d %d",&start, &end);

        int prod = 1;	

	for (int i = start; i <= end; i++){
		prod = prod*i;
	}

	printf("%d\n",prod);
}
