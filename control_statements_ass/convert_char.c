//if char is lower convert it into upper vice versa...
#include<stdio.h>
void main()
{
	int ele,i;
	char a[5] = {'a','B','c','D','e'};
	
	ele=sizeof(a); //becase its a character array..
	
	for(i=0;i<ele;i++)
	{
		if(a[i] >= 'a' && a[i] <= 'z')
		{
			a[i] -= 32;
		}
		else if(a[i] >= 'A' && a[i] <= 'Z')
		{
			a[i] += 32;
		}
	}
	
	for(i=0;i<ele;i++)
	{
		printf("%c ",a[i]);
	}
	
	printf("\n");
}
