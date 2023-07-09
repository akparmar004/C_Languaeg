#include<stdio.h>
void main()
{
	int i,j,n=6,m=11;
	for(i=0;i<n;i++)
	{
		for(j=0;j<i;j++)
		{
			printf(" ");
		}
		for(j=0;j<m;j++)
		{
			printf("*");
		}
		m-=2;
		printf("\n");
	}
	
	m=3;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-2-i;j++)
		{
			printf(" ");
		}
		for(j=0;j<m;j++)
		{
			printf("*");
		}
		m+=2;
		printf("\n");
	}
}
