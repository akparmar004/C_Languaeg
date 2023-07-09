#include<stdio.h>
void main()
{
	int a[10],ele,i,j,t;
	ele=sizeof(a)/sizeof(a[0]);

	printf("Enter ele : \n");
	for(i=0;i<ele;i++)
	{
		scanf("%d",&a[i]);
	}

	//reversing..
	for(i=0,j=ele/2; i<ele/2; i++,j++)
	{
		t=a[i];
		a[i]=a[j];
		a[j]=t;
	}

	printf("After reversing..\n");

	for(i=0;i<ele;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
}
