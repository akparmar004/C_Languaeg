#include<stdio.h>
int pal(int);
void main()
{
	int i;
	for(i=1;i<=1000;i++)
	{
		if(pal(i) == 1)
		{
			printf("%d ",i);	
		}
	}
	printf("\n");
}

int pal(int n)
{
	int temp=0,ans = n,rem;
	while(n)
	{
		rem=n%10;
		temp=(temp*10) + rem;
		n /= 10; 
	}
	if(temp == ans)
		return 1;
	else
		return 0;
}
