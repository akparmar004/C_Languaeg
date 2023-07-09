#include<stdio.h>
void main()
{
	char a;
	printf("Enter char : ");
	scanf("%c",&a);

	if(a>='a' && a<='z')
	{
		printf("Small Letter...");
	}
	else if(a>='A' && a<='Z')
	{
		printf("Capital Letter...");
	}
	else if(a>='0' && a<='9')
	{
		printf("Digit...");
	}
	else
	{
		printf("Special Character...");
	}
}
