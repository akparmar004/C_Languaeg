#include<stdio.h>
void main()
{
	int i,j,n;
	
	for(i=1;i<=6;i++)
	{
		n=i;
		for(j=1;j<=i;j++)
		{
			printf("%d ",n);
			n+=i;
		}
		printf("\n");
	}
}
