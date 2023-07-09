#include<stdio.h>

struct ex
{
	int i;
	char a[20];
};

void main()
{
	struct ex *p,x={10,"Arjun"};	
	p=&x;
	printf("i = %d and x = %s\n",(*p).i,p->a);
}
