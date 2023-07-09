//first 100 prime numbers..
#include<stdio.h>
void main()
{
	int n=1000,i,j,c=0;
	
	for(i=1;i<=n;i++)
	{
		for(j=2;j<=i;j++)
		{
			if(i % j == 0)
			{
				break;
			}
		}
		if(j == i)
		{
			c++;
			printf("%d ",i);
		}
		if(c==100)
		{
			break;
		}
	} 
	printf("\n");
}
