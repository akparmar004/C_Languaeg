#include<stdio.h>
void main()
{
	int i,j,n=1;
	
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(j%2 != 0)
			{
				printf("%d",i);
			}
			else if(j%2 == 0)
			{
				printf("*");
			}
		}
		printf("\n");
		n+=2;
	}
	n=7;
	for(i=4;i>0;i--)
	{
		for(j=1;j<=n;j++)
		{
			if(j%2 != 0)
			{
				printf("%d",i);
			}
			else if(j%2 == 0)
			{
				printf("*");
			}
		}
		printf("\n");
		n-=2;
	}
}
