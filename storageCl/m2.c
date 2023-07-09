#include<stdio.h>
static void display(char *p)
{
	printf("s=%s\n",p);
}

void display_1(char *p)
{
	printf("s=%s\n",p);
	display("hello world...");
}
