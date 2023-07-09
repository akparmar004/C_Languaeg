#include<stdio.h>
void main()
{
	int a[5],i,ele;

	ele=sizeof(a)/sizeof(a[0]);
	
	//input
	for(i=0;i<ele;i++)
	{
		scanf("%d",&a[i]);
	}

	printf("\n");

	//print
	for(i=0;i<ele;i++)
	{
		printf("%d ",a[i]);
	}
	
	printf("\n");
}
