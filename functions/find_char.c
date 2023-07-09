#include<stdio.h>

char * find(char *,char);

void main()
{
	char s[20],ch,*p;
	printf("Enter the string : ");
	scanf("%s",s);
	
	printf("Enter char : ");
	scanf(" %c",&ch);
	
	printf("s=%p\n",s);
	p=find(s,ch);
	
	if(p==0)
	{
		printf("character not found...\n");	
	}
	else
	{
		printf("Present at %p\n",p);
	}
	
}

char * find(char * a,char ch)
{
	while(*a)
	{
		if(*a==ch)
		{	
			return a;
		}
		a++;
	}
	return 0;
}
