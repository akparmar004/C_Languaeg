#include<stdio.h>
void main()
{
	char s[10],s1[10];
	int i;
	printf("Enter first string : ");
	scanf("%s",s);
	
	printf("Enter second string : ");
	scanf("%s",s1);
	
	for(i=0;s[i];i++)
	{
		if(s[i]!=s1[i])
		{
			break;
		}
	}
	
	if(s[i]==s1[i])
	printf("Equals...");
	else
	printf("Not Equal...");
	
}
