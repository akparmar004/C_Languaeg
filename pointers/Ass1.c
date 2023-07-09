#include<stdio.h>
void main()
{
	int *p,a=10;
	
	p=&a;
	*p+=1;
	printf("%d %d\n",*p,a);


	//printf("%u\n",p);
	//printf("%d\n",*p);
}
