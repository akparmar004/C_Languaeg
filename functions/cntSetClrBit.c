#include<stdio.h>

int count_set_bits(int n)
{
	int pos,set;
	
	for(pos=31,set=0;pos>=0;pos--)
	{
		if(n>>pos&1)
		{
			set++;
		}
	}
	return set;
}

void main()
{
	int num;
	
	printf("Enter number : ");
	scanf("%d",&num);
	
	int set = count_set_bits(num);
	
	int clr = 32 - set;
	
	printf("set bits : %d \nclear bits : %d\n",set,clr);
}

