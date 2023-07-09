#include<stdio.h>
void main()
{	
	int a[10],small,big,i,ele;
	
	ele=sizeof(a)/sizeof(a[0]);
	for(i=0;i<ele;i++)
	{
		scanf("%d",&a[i]);
	}
	
	small=a[0];
	big=a[0];
	for(i=1;i<ele;i++)
	{
		if(a[i]<small)
		{
			small=a[i];
		}
		else if(a[i]>big)
		{
			big=a[i];
		}
	}
	
	printf("biggest number in array : %d\nsmallest number in array : %d\n",big,small);
}
