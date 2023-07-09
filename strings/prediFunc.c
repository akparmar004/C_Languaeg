#include <stdio.h>
#include <string.h>
 
void main()
{
    char str[] = "Arjun Parmar";
 
    int length = strlen(str);
    
    printf("%s\n",strchr(str,'a'));
    printf("%s\n",strrchr(str,'a'));
    printf("Length of string is : %d\n", length);

}
