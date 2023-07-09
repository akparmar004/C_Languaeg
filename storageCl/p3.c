#include<stdio.h>
static int i = 10;
void main()
{
	//local variable has higher priority to be execute...
	static int i = 20;
	printf("%d\n",i);
}
