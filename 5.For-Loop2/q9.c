

#include <stdio.h>

void main () {
	int ch = 97;
	
	for (int i = 1; i <= 26; i++){
		if (i%2==1){
			printf("%c ",ch);
		} else {
			printf("%c ",(ch-32));
		}
	ch ++;
	}
}
