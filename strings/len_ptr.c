#include<stdio.h>
void main()
{
	char s[10];
	char *p;
	int l=0;
	
	printf("Enter string : ");
	scanf("%s",s);
	
	p=s;
	while(*p != '\0')
	{
		l++;
		p++;	
	}
	
	printf("length = %d\n",l);
	
	
}
