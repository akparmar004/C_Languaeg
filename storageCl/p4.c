#include<stdio.h>
static int i = 10;
int * dummy();

void main()
{
	static int i = 20,*p;
	p=dummy();
	printf("%d\n",i);
	printf("%d\n",*p);
}

int * dummy()
{
	i++;
	return &i;
}
