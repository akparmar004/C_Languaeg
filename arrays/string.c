//string scannig and printing
#include<stdio.h>
void main()
{
	char s[10];
	int a;
	
	printf("Enter the string : \n");
	scanf("%[^\n]",s);
	a=sizeof(s);
	printf("s=%s, %d\n",s,a);
}
