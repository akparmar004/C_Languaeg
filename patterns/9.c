#include<stdio.h>
void main()
{
	int i,j,n=1,m=1;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5-1-i;j++)
		{
			printf("  ");
		}
		for(j=0;j<n;j++)
		{
			printf("%d ",m);
			m++;
		}
		
		n+=2;
		m=1;
		
		printf("\n");
	}
}
