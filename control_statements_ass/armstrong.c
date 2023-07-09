//armstrong numbers between 1 to 500...
#include<stdio.h>
void main()
{
	int n=0,temp,i,rem;
	
	for(i=1;i<=500;i++)
	{
		temp=i;
		while(temp)
		{
			rem = temp % 10;	
			n += (rem*rem*rem);
			temp /= 10;
		}
		if(n == i)
		{
			printf("%d ",i);
		}
		n=0;
	}
	printf("\n");
}

