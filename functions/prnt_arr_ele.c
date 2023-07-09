#include<stdio.h>

void print(int *,int);

void main()
{
	int a[5] = {10,20,30,40,50},ele;
	ele=sizeof(a)/sizeof(a[0]);
	
	print(a,ele);
}

void print(int *p,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d ",*p++);
	}
	
	printf("\n");
}
