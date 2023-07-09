//sum of digits of a given number...
#include<stdio.h>
void main()
{
	int n,sum;
	
	printf("Enter number : ");
	scanf("%d",&n);
	
	sum=0;
	while(n)
	{
		sum += n%10;
		n /= 10;
	}
	
	printf("sum of digtis of a given number is : %d\n",sum);
	
}
