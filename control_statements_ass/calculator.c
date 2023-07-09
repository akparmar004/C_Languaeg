#include<stdio.h>
void main()
{
	int n1,n2;
	char ch;
	
	printf("Enter two numbers : ");
	scanf("%d %d",&n1,&n2);
	
	printf("Enter operation : ");
	scanf(" %c",&ch);
	
	switch(ch)
	{
		case '+' : printf("Addition of a given numbers is %d\n",n1+n2);
			   break;
		case '-' : printf("Subtraction of a given numbers is %d\n",n1-n2);
			   break;
		case '*' : printf("Multiplication of a given numbers is %d\n",n1*n2);
			   break;
		case '/' : printf("Division of a given numbers is %d\n",n1/n2);
			   break;
	}
	printf("\n");
}
