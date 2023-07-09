#include<stdio.h>
#include<math.h>
float my_atof(const char *p);

void main()
{
	char s[20];
	float num;
	
	printf("Enter string : ");
	scanf("%s",s);
	
	num=my_atof(s);
	
	printf("f=%f\n",num);
}

float my_atof(const char *p)
{
	int n1,n2,i,flag=1,digit=0,f3=10;
	float num,f1,f2;
	
	if(p[0]=='-')
	{
		i=1;
	}
	else
	{
		i=0;
	}
	
	for(n1=0,n2=0;p[i];i++)
	{
		
		if(p[i]=='.')
		{
			flag=0;
			continue;
		}
		else if(flag==1)
		{	
			n1=(n1*10) + (p[i]-48);
		}
		else if(flag==0)
		{
			n2=(n2*10) + (p[i]-48);
		}
	}
	
	
	f1=(float)n1;
	f2=(float)n2;
	
	f2=f2/100;
	
	num=f1+f2;	
	
	if(p[0]=='-')
	{
		num=-num;	
	}
	return num;
}
	

