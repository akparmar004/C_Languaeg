#include<stdio.h>

int sum(int,...);

void main()
{
	int a=10,b=20,c=30,d=40,r;
	
	r=sum(2,a,b);
	printf("r=%d\n",r);
	r=sum(3,a,b,c);
	printf("r=%d\n",r);
	r=sum(4,a,b,c,d);
	printf("r=%d\n",r);
}

int sum(int n,...)
{
	va_list v; 
	int sum,i,num;
	
	va_start(v,n);
	
	for(i=0,sum=0;i<n;i++)
	{
		num=va_arg(v,int);
		sum=sum+num;
	}
	return sum;

}
