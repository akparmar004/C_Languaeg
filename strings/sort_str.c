#include <stdio.h>
#include <string.h>
 
void main()
{
    char str[50];
    int i, j, temp,len;

    printf("Enter a string : ");
    gets(str);
 
    printf("String before sort :%s\n", str);
    
    len = strlen(str);

    for (i = 0; i < len - 1; i++)
    {
        for (j = 0; j < len - i - 1; j++)
        {
            if (str[j] > str[j + 1])
            {
                temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }
 
    printf("String After sorting :%s\n", str);
}
