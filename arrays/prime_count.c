#include<stdio.h>
void main()
{
	int a[5],i,j,ele,c;

	ele=sizeof(a)/sizeof(a[0]);

	printf("Enter ele : \n");
	for(i=0;i<ele;i++)
	{
		scanf("%d",&a[i]);
	}

	for(i=0,c=0;i<ele;i++)
	{
		for(j=2;j<a[i];j++)
		{
			if(a[i]%2==0)
			{
				break;
			}
		}
		if(a[i]==j)
		{
			c++;
		}
	}

	printf("%d",c);
	printf("\n");
}
