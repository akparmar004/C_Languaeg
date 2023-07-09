#include<stdio.h>
void main()
{
	int a[5]={5,4,3,2,1},i,j,t,ele;

	ele=sizeof(a)/sizeof(a[0]);

	printf("Before sort..\n");
	for(i=0;i<ele;i++)
	{
		printf("%d ",a[i]);
	}
	for(i=0;i<ele;i++)
	{
		for(j=i;j<ele;j++)
		{
			if(a[i]>a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}

	printf("\n");
	printf("After sort..\n");
	for(i=0;i<ele;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");



}
