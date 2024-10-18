

#include <stdio.h>
void main() {
	int marks;
	printf("Enter marks : \n");
	scanf("%d",&marks);

	if (marks >= 91 && marks <= 100){
		printf("A\n");
	}else if(marks >= 81 && marks <= 90) {
		printf("B\n");
	}else if(marks >= 71 && marks <= 80){
		printf("C\n");
	}else if (marks >= 61 && marks <= 70){
		printf("D\n");
	}else {
		printf("FAIL\n");
	}
}
