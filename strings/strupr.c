#include<stdio.h>
void main()
{
	char s[10];
	int i;
	
	printf("Enter String : ");
	scanf("%s",s);
	
	for(i=0;s[i];i++)
	{
		if(s[i]>='a' && s[i]<='z')
		s[i]=s[i]-32;
	}
	
	printf("After uppercase : %s\n",s);
}
