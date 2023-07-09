#include<stdio.h>
#include<string.h>

void main()
{
	char s[5][10];
	char *p[5];
	char *t;
	
	int i,j,ele;
	
	ele=sizeof(s)/sizeof(s[0]);
	
	for(i=0;i<ele;i++)
	p[i]=s[i];
	
	printf("Enter the strings..\n");
	for(i=0;i<ele;i++)
	scanf("%s",s[i]);
	
	for(i=0;i<ele-1;i++)
	{
		for(j=0;j<ele-1-i;j++)
		{
			if(strcmp(p[j],p[j+1]) > 0)
			{
				t=p[j];
				p[j]=p[j+1];
				p[j+1]=t;
			}
		}
	}
	
	printf("After sorting : ");
	for(i=0;i<ele;i++)
	printf("%s ",p[i]);
		
	printf("\n");
}
