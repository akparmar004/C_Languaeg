#include<stdio.h>
void main()
{
	int a[10],ele,i,p;
	
	ele=sizeof(a)/sizeof(a[0]);
	printf("Enter elements : ");
	for(i=0;i<ele;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("Enter position to be removed : ");
	scanf("%d",&p);
	
	for(i=p-1;i<ele;i++)
	{
		a[i]=a[i+1];
	}
	
	for(i=0;i<ele-1;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
	
}
