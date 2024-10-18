	

#include <stdio.h>
void main (){
	int ang1, ang2, ang3, angSum;
	printf("Enter the angles of the triangle : \n");
	scanf("%d %d %d",&ang1, &ang2, &ang3);
	angSum = ang1 + ang2 + ang3;

	if(ang1 <=0 || ang2 <=0 || ang3 <=0) {
                printf("Enter the angles greater than 0\n");
        }


	if (angSum == 180){
		printf("The above angles constitute a triangle\n");
	}else if(angSum < 180 || angSum > 180) {
		printf("The above angles do not constitute a triangle\n");
	}
}
