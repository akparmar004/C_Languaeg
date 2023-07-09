#include<stdio.h>
int str_len(char *);
void main()
{
	char s[10];
	int l;
	
	printf("Enter string : ");
	scanf("%s",s);
	
	l=str_len(s);
	printf("l=%d\n",l);
}

int str_len(char *p)
{
	if(*p)
		return 1+str_len(p+1);
	else
		return 0;
	
}

