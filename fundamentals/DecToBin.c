#include<stdio.h>
void main()
{
	int num,pos=31;
	printf("Enter number : ");
	scanf("%d",&num);

	L:
	printf("%d",num>>pos&1);
	pos--;

	if(pos>=0)
	{
		goto L;
	}
	printf("\n");


}
