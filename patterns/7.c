#include<stdio.h>
void main()
{
	int i,j,m=1,n=2;
	
	for(i=1;i<=6;i++)
	{
		if(i%2 != 0)
		{
			for(j=1;j<=i;j++)
			{
				printf("%d ",m);
				m+=2;
			}
			m=1;
			printf("\n");
		}
		
		else
		{
			for(j=1;j<=i;j++)
			{
				printf("%d ",n);
				n+=2;
			}
			n=2;
			printf("\n");
		}
	}
}
