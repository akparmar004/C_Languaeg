#include<stdio.h>
void main()
{
	int i,j,n=4,m;
	
	for(i=1;i<=5;i++)
	{
		m=i;
		m+=n;
		for(j=1;j<=i;j++)
		{
			if(j==1)
			{
				printf("%d ",i);
			}
			else if(j>1)
			{
				printf("%d ",m);
				n--;
				m+=n;
				
			}
		}
		n=4;
		printf("\n");
	}
}
