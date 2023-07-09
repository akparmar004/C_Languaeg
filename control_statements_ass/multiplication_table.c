#include<stdio.h>
void main()
{
	int i,j,n=10;
	
	for(i=1;i<=11;i++)
	{
		for(j=1;j<=10;j++)
		{
			printf("%d * %2d = %3d",n,j,n*j);
			printf("\n");
		}
		n++;
		printf("\n");
	}
}
