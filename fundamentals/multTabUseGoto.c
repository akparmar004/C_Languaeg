#include<stdio.h>
void main()
{
	int i=1,num;

	printf("Enter number : ");
	scanf("%d",&num);

	exp:
		printf("%d * %d = %d\n",num,i,num*i);
		i++;
	
	if(i <= 10)
	{
		goto exp;
	}
}
