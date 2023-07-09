#include<stdio.h>
void main()
{
	char s[10],a[10];
	int i;
	
	printf("Enter string : ");
	scanf("%[^\n]",s);
	
	/*for(i=0;s[i];i++)
	{
		a[i]=s[i];
	}
	a[i]='\0';*/
	
	char *p,*q;
	p=s;
	q=a;
	
	for(i=0;s[i];i++,p++,q++)
	{
		*p=*q;
	}
	q='\0';
	printf("After copying string s=%s and a=%s\n",s,a);
}
