#include<stdio.h>
int my_atoi(const char *p);
void main()
{
	char s[20];
	int num;
	
	printf("Enter string : ");
	scanf("%s",s);
	
	num=my_atoi(s);
	printf("s=%s and num=%d\n",s,num);
	
}

int my_atoi(const char *p)
{
	int i,num;
	if(p[0]=='-' || p[0]=='+')
	{
		i=1;
	}
	else
	{
		i=0;
	}
	for(num=0;p[i];i++)
	{
		if(p[i]>='0' && p[i]<='9')
		{
			num = (num*10) + (p[i]-48);
		}
		else
		{
			break;
		}
	}
	if(p[0]=='-')
	{
		num=-num;
	}
	return num;
}
