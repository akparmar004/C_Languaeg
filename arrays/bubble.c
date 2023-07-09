#include<stdio.h>
void main()
{
	int a[5],i,j,ele,t;
	ele=sizeof(a)/sizeof(a[0]);
	  
	printf("Enter ele : ");
	for(i=0;i<ele;i++)
	{
		scanf("%d",&a[i]);
	}

	for(i=0;i<ele-1;i++)
	{
		for(j=0;j<ele-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	
	printf("Sorted Array..\n");
	for(i=0;i<ele;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
}
