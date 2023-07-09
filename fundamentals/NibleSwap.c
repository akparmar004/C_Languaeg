#include<stdio.h>
void main()
{
	unsigned char ch = 0x23;
	
	
	printf("Before ch = %x\n",ch);
	ch=ch>>4|ch<<4;
	printf("Before ch = %x\n",ch);

}
