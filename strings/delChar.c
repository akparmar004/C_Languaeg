#include<stdio.h>
void main()
{
	char s[10],ch;
	int i,j;
	printf("Enter string : ");
	scanf("%s",s);
	
	printf("Enter character : ");
	scanf(" %c",&ch);
	
	printf("Before string : %s\n",s);
	
	for(i=0;s[i];i++)
	{
		if(s[i]==ch)
		{
			for(j=i;s[j];j++)
			{
				s[j]=s[j+1];
			}
			i--;
		}
	}
	
	printf("After string : %s\n",s);
}
