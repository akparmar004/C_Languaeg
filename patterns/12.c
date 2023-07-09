#include<stdio.h>
void main()
{
	int i,j,n=8,m;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		for(j=1;j<=n;j++)
		{
			printf(" ");
		}
		n-=2;
		m=i;
		for(j=1;j<=i;j++)
		{
			printf("%d",m);
			m--;
		}
		printf("\n");
	}
}
