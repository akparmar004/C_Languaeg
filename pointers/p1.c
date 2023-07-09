#include<stdio.h>
void main()
{
	int i=10,j=20;
	int *p;

	p=&i;

	printf("i=%d and *p=%d",i,*p);

	//modifying value of i..
	*p=100;
	printf("j=%d and *p=%d",i,*p);

	printf("\n");
}
