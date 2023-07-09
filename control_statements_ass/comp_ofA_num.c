//program to find compliment of a number...
#include<stdio.h>
void main()
{
	int n,pos;
	
	printf("Enter number : ");
	scanf("%d",&n);
	
	n = (~n)+1;
	
	pos=31;
	while(pos>=0)
	{
		printf("%d",n>>pos&1);
		pos--;
	}
	
	printf(", octal = %o, decimal = %d, hexa = %x",n,n,n);
	printf("\n");
	
}
