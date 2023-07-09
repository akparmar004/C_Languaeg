#include<stdio.h>
void print(int n);
void main()
{
	int n;
	printf("Enter number : ");
	scanf("%d",&n);
	
	print(n);
	print("\n");
}

void print(int n)
{
	static int pos=31;
	
	if(pos>=0)
	{
		printf("%d",n>>pos&1);
		pos--;
		print(n);
	}
}
