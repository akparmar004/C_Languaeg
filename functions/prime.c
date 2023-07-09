#include<stdio.h>

int prime(int);

void main()
{
	int num,ans;
	
	printf("Enter number : ");
	scanf("%d",&num);
	
	ans=prime(num);
	
	if(ans==1)
	{
		printf("prime...\n");
	}
	else
	{
		printf("not prime...\n");
	}
}

int prime(int n)
{
	int i;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			return 0;
		}
	}
	return 1;
}
