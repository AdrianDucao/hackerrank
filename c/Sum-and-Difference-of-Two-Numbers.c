#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int a, b, add, sub;
	float c, d, fadd, fsub;
	
	scanf("%d %d", &a, &b);
	scanf("%f %f", &c, &d);

	add = a+b;
	sub = a-b;

	fadd = c+d;
	fsub = c-d;	

	printf("%d %d \n", add , sub);
	printf("%0.1f %0.1f \n", fadd, fsub);	


	return 0;
}
