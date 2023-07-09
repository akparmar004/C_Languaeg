#include <stdio.h>
 
void main()
{
    
    char s[10],ch;
    int i,c;
    
    printf("Input String: ");
    scanf("%s",s);
 
    printf("Input letter to be searched: ");
    scanf(" %c",&ch);
   
   
    for(i=0,c=0;s[i];i++)  
    {
    	if(s[i] == ch)
    	{
          c++;
        }
    }
     
	printf("c=%d\n \n ",c);
     
}
