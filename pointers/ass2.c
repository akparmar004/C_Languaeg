#include<stdio.h>
void main()
{
	int *p,a=10;
	p=&a;
	*p += 1;
	printf("*p=%d,a=%d",*p,a);
	//output= *p=11, a=11.
}
