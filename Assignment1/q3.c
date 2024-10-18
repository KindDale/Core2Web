

#include <stdio.h>
void main () {
	int x = 19,y,z;
	y = x++ + --x -x++;
	printf("%d\n",y);

	z = -x + x-- - x++ + ++x;
	printf("%d\n",z);
}
