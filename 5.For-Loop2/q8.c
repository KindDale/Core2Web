

#include <stdio.h>

void main () {
	int ch = 65;
	
	for (int i = 1; i <= 26; i++){
		if(i%2==1){
			printf("%d ",i);
		} else {
			printf("%c ",ch);
		}
		ch++;
	}	

}
