#include<stdio.h>
void main()
{
	int a[10],b[10],i,j,t=0,ele;
	ele=sizeof(a)/sizeof(a[0]);
	printf("Enter numbers : ");
	
	for(i=0;i<ele;i++)
	{
		 scanf("%d",&a[i]);
	}
	
	for(i=0;i<ele;i++)
	{
		for(j=2;j<a[i];j++)
		{
			if(a[i] % j == 0)
			{
				break;
			}
		}
		if(a[i] == j)
		{
			b[t]=a[i];
			t++;
		}
	}
	
	for(i=0;i<t;i++)
	{
		printf("%d ",b[i]);
	}
	printf("\n");
	
	
}
