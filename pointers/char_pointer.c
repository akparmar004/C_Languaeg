//diffrence bitween int * and char *
#include<stdio.h>
void main()
{
	int i = 10;
	int *ip;
	char *cp;

	ip=&i;
	cp=(char *)&i;

	printf("%p and %p and %p",&i,&ip,&cp);

	printf("*ip=%d and *cp=%d \n ",*ip,*cp);


}
