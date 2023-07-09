#include<stdio.h>
void main()
{
	int a=0,b=1,c=a+b,i;
	
	printf("%d %d ",a,b);
	
	for(i=0;c<50;i++)
	{
		c=a+b;
		printf("%d ",c);
		a=b;
		b=c;
	}
	printf("\n");
}
