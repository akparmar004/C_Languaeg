#include<stdio.h>

void main()
{
	int n,ans,rem;
	
	printf("Enter number : ");
	scanf("%d",&n);
	
	ans = 0;
	while(n)
	{
		rem = n % 10;
		ans = (ans*10) + rem;
		n /= 10;
	}
	
	printf("reverse of a number is : %d\n",ans);
}
