#include<stdio.h>
void main()
{
	int i=10;
//	int *p=&i;
	char *p=&i;

	//increment of pointer..
	//p=p+1;

	
	printf("%p\n",p);
	//increment of value by pointer
//	*p=*p+1;
	p=p+1;
	printf("%p\n",p);
	printf("i=%d\n",i);
}
