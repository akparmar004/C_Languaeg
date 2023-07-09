#include<stdio.h>

char * find(char *, char);
void rev(char *, char *);
void reverse(char *);


void main()
{
	char s[50],*p,*q;
	
	printf("Enter string : ");
	scanf("%[^\n]",s);
	
	printf("String before : %s",s);
	
	p=s;
	while(q=find(s,' '))
	{
		rev(p,q-1);
		p=q+1;
	}
	reverse(p);	
	printf("String before : %s",s);
	
}

void reverse(char *p)
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

void rev(char *p,char *q)
{	
	char ch;
	while(p<q)
	{
        	ch=*p;
		*p=*q;
		*q=ch;
	}
}


