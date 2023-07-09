#include<stdio.h>
void main()
{
	static int i = 0;
	printf("hello..\n");
	i++;
	if(i<3)
	main();
	
	printf("hi..\n");
	
}
