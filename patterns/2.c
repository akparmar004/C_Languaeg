#include<stdio.h>
void main()
{
	int i,j,n=7,t=1;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			printf(" ");
		}
		for(j=0;j<t;j++)
		{
			printf("*");
		}
		t += 2;
		printf("\n");
	}
	
	t=11;

	for(i=0;i<n-1;i++)
	{
		printf(" ");
		for(j=0;j<=i;j++)
		{
			printf(" ");
		}
		
		for(j=0;j<t;j++)
		{
			printf("*");
		}
		t-=2;
		printf("\n");
	}
}
