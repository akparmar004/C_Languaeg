#include<stdio.h>
void main()
{
	char a;
	printf("Enter char : ");
	scanf("%c",&a);
	//if(a>=97 && a<=122)
	if(a>='a' && a<='z')
	{
		printf("character = %c and its ascii value is : %d",a,a);
	}
}
