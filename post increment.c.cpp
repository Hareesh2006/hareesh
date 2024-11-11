#include<stdio.h>
int main()
{
	int a;
	printf("enter the value of a ");
	scanf("%d", &a);
	printf("the 1st term is %d\n", a++);
	printf("the 2nd term is %d\n", a++);
	printf("the 3rd term is %d\n", a++);
}
