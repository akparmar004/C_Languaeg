#include<stdio.h>
int fact(int);
void main()
{
	int n,ans;
	printf("Enter number : ");
	scanf("%d",&n);
	ans = fact(n);
	printf("factorial of %d is %d.",n,ans);
}

int fact(int n)
{
	if(n>0)
	{
		return n*fact(n-1);
	}
	return 1;
	
}

