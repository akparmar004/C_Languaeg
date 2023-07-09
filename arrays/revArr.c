#include<stdio.h>
void main()
{
	int a[10],ele,i,j,t;
	ele=sizeof(a)/sizeof(a[0]);
	printf("enter the element");

	for(i=0;i<ele;i++)
	{
		scanf("%d",&a[i]);
	}

	printf("\n");
	
	printf("Before reverse...");

	for(i=0;i<ele;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
	///////////////////////////////////////////////////
	
	for(i=0,j=ele-1; i<j; i++,j--)
	{
		t=a[i];
		a[i]=a[j];
		a[j]=t;
	}

	//////////////////////////////////////////////////
	printf("After reverse...");
	for(i=0;i<ele;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
}
