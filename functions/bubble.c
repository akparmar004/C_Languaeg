#include<stdio.h>
void sort(int a[],int);

void print(int *p,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d ",*p++);
	}
	printf("\n");
}

void main()
{	
	int a[5]={50,40,30,20,10},ele;
	ele=sizeof(a)/sizeof(a[0]);
	
	print(a,ele);
	
	sort(a,ele);
	
	print(a,ele);
	
}



void sort(int *p,int n)
{
	int i,j,t;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(p[j]>p[j+1])
			{
				t=p[j];
				p[j]=p[j+1];
				p[j+1]=t;
			}
		}
	}
}
