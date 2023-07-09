#include<stdio.h>

void rev(char *,char *);

void main()
{
	char s[20];
	
	printf("Enter string : ");
	scanf("%s",s);
	
	printf("Before string : %s\n",s);
	
	rev(s+2,s+6);
	
	printf("After string : %s\n",s);

}

void rev(char *p, char *q)
{
	char ch;
	while(p<q)
	{
		ch=*p;
		*p=*q;
		*q=ch;
		p++;
		q--;
	}
}
