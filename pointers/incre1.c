#include<stdio.h>
void main()
{
	int i=258;
	char *p;
	//short *p;

	p=&i;
	

	printf("%d\n",*p);
	//printf("%p\n",p);
	//p=&p+1;
	p=p+1;
	printf("i=%p\n",&i);
	printf("p=%p\n",p);
	//printf("%p\n",p);
	printf("%d\n",*p);
}
