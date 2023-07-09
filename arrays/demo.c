#include<stdio.h>
void main()
{
	int i=5,j;
	int a[i];

	for(j=0;j<i;j++)
	{
		scanf("%d",&a[j]);
	}

	for(j=0;j<i;j++)
	{
		printf("%d ",a[j]);
	}
	printf("%p",a[10]);
	printf("\n");

}
