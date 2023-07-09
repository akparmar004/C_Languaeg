#include<stdio.h>
#include<string.h>

void main()
{
	char s[5][10],t[10];
	int i,j,ele;
	ele=sizeof(s)/sizeof(s[0]);
	printf("Enter the string : ");
	for(i=0;i<ele;i++)
	{
		scanf("%s",s[i]);
	}
	
	for(i=0;i<ele-1;i++)
	{
		for(j=0;j<ele-1-i;j++)
		{
			if(strcmp(s[j],s[j+1]) > 1)
			{
				strcpy(t,s[j]);
				strcpy(s[j],s[j+1]);
				strcpy(s[j+1],t);
			}
		}
	}
	
	for(i=0;i<ele;i++)
	{
		printf("%s ",s[i]);
	}
	printf("\n");
}
