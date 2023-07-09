 #include<stdio.h>
void main()
{
	int x = 10;
	int const * const p;
	p = &x;
	printf("%d\n", *p);
}
