#include<stdio.h>
void main()
{
	int num,pos,c;

	printf("Enter number : ");
	scanf("%d",&num);

	for(pos=0,c=0;pos<=31;pos++)
	{
		if(num>>pos&1)
			c++;
	}
	printf("%d\n",c);
}
