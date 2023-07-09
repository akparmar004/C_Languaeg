#include<stdio.h>
void main()
{
	int num,pos;

	printf("Enter number : ");
	scanf("%d",&num);

	pos=31;
	while(pos>=0)
	{
		printf("%d",num>>pos&1);
		pos--;
	}
	printf("\n");
}
