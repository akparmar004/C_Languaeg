#include<stdio.h>
void main()
{
	int num,i,n;

	printf("Enter number : ");
	scanf("%d",&n);

	for(num=1;num<=n;num++)
	{
		for(i=2;i<num;i++)
		{
			if(num%i == 0)
			{
				break;
			}
		}
		if(num == i)
		{
			printf("%3d",num);
		}
	}
	printf("\n");
}
