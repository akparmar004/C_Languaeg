#include<stdio.h>

void swap(int *,int *);

void main()
{
	int n1,n2;
	
	printf("Enter numbers : ");
	scanf("%d %d",&n1,&n2);
	
	printf("before n1=%d and n2=%d\n",n1,n2);
	
	swap(&n1,&n2);
	
	printf("After n1=%d and n2=%d\n",n1,n2);
}

void swap(int *p,int *q)
{
	int t=*p;
	*p=*q;
	*q=t;
}
