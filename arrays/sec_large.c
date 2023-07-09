#include<stdio.h>
void main()
{
	int a[10],i,L,SL,ele,LI=0,SLI=0;
	ele=sizeof(a)/sizeof(a[0]);

	printf("Enter ele : \n");
	for(i=0;i<ele;i++)
	{
		scanf("%d",&a[i]);
	}

	if(a[0]>a[1])
	{
		L=a[0];
		SL=a[1];
	}
	else
	{
		L=a[1];
		SL=a[0];
	}
	for(i=2;i<ele;i++)
	{
		if(a[i]>L)
		{
			   SL=L;
			   L=a[i];
		}
		else if(a[i]>SL)
		{
			SL=a[i];
		}
	}

	for(i=0;i<ele;i++)
	{
		if(a[i]==L)
		{
			LI=i;
		}
		else if(a[i]==SL)
		{
			SLI=i;
		}
		else if(LI!=0 && SLI!=0)
		{
			break;
		}
	}

	printf("Largest ele = %d and index = %d \n Second largest ele = %d and index = %d",L,LI,SL,SLI);
}
