#include<stdio.h>
void main()
{
	int n;
	
	printf("Enter number : ");
	scanf("%d",&n);
	
	if(n && (n & (-n)) == n)
	{
		printf("Number is power of 2\n");
	}
	else
	{
		printf("Number is not power of 2\n");
	}
}
