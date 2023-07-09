#include<stdio.h>
void main()
{
	char s1[10],s2[10];
	int i,l;
	
	printf("Enter two strings : \n");
	scanf("%s %s",s1,s2);
	
	for(l=0;s1[l];l++);
	
	for(i=0;s1[i];i++)
	{
		if(s1[i] != s2[i])
		{
			break;
		}
	}
	
	if(i==l)
	printf("strings are equal\n");
	else
	printf("strings are not equal\n");
}
