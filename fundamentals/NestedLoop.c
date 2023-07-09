#include<stdio.h>
void main()
{
	int num,i,j;

	printf("Enter number : ");
	scanf("%d",&num);

	for(i=1;i<=num;i++)
	{
		for(j=1;j<=10;j++)
		{
			printf("%2d * %2d = %2d\n",i,j,i*j);	
		}
		printf("\n");
	}
}

