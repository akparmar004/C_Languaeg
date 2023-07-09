#include<stdio.h>
void main()
{
	char s[20],s1[10],i,j;
	
	printf("Enter the first string : ");
	scanf("%s",s);
	printf("Enter second string : ");
	scanf("%s",s1);
	printf("Before s=%s and s1=%s \n",s,s1);
	
	for(i=0;s[i];i++);
	
	for(j=0;s[j];i++,j++)
	{
		s[i]=s1[j];
	}
	
	s[i]=s1[j];
	
	printf("After s=%s and s1=%s \n",s,s1);
	
		
}
