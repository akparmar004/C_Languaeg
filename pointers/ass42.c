#include<stdio.h>
#include<string.h>
	int main()
	{
		char *str1 = "Hello";
		char *str2 = "Hai";
		char *str3;
		str3 = (char *)strcat(str1,str2);
		printf("%s  %s\n",str3,str1);
		return 0;
	}
