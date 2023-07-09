#include <stdio.h>
#include <string.h>
 
void main()
{
    char s[200];
    int i,j;
 
    printf("Enter the string:\n");
    scanf("%[^\n]s", s);
    for (i = 0;s[i] != '\0';i++)
    {
        if (s[i] == ' ' && (s[i+1] == ' ' || s[i-1] == ' '))
        {
        	for(j=i;s[j];j++)
        	{
        		s[j]=s[j+1];
        	}
        }
    }
    
    printf("after removing spaces : %s",s);
}
