#include<stdio.h>
void main()
{
	int i=10;
	char *p;

	//type casting
	//p=*(char *)&i;
	
	
	p=&i;

	if(*p==10)
		printf("little Endian");
	else
		printf("Big Endian");

	printf("\n")
}

