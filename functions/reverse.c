#include<stdio.h>
void rev(char *);
void main()
{
	char s[10],*p;
	printf("Enter string : ");
	scanf("%s",s);
	p=s;
	
	rev(p);
	
	printf("s=%s\n",s);
}

void rev(char *p)
{
	int l;
	char *q=p,a;
	for(l=0;*q>0;l++,q++);
	q--;
	while(p<q)
	{	
		a=*p;
		*p=*q;
		*q=a;
		p++;
		q--;
	}
	
}
