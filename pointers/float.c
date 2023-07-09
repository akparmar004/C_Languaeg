#include<stdio.h>
void main()
{
	float f = 23.5;
	int *ip;
	float *fp;

	ip=&f;
	fp=&f;

	printf("%d\n",*ip);
	printf("%f\n",*fp);

}
