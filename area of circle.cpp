#include <stdio.h>
int main()
{
	float r,a;
	printf("please enter the radius of the cirle ");
	scanf("%f", &r);
	a = 3.14159 * r * r;
	printf("the area of the circle is %.2f", a);
	return 0;
}
