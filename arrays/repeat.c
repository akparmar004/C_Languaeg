#include<stdio.h>
void main()
{
	int a[10],i,j,c,ele,flag;
	ele=sizeof(a)/sizeof(a[0]);

	printf("Enter ele : \n");
	for(i=0;i<ele;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n");

	//printing array
	for(i=0;i<ele;i++)
	{
		printf("%d ",a[i]);
	}

	printf("\n");
	//counting repeat numbers...
	for(i=0,c=0;i<ele;i++)
	{
		for(j=i-1,flag=0;j>=0;j--)
		{
			if(a[i]==a[j])
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			for(j=i+1;j<ele;j++)
			{
				if(a[i]==a[j])
				{
					c++;
				}
			}

			printf("%d repeats %d times\n",a[i],c);
			c=0;
			}
	}
	printf("\n");
}
