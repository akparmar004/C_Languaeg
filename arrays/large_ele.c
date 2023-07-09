#include<stdio.h>
void main()
{
	int a[10],i,j,lrg,ele;
	ele=sizeof(a)/sizeof(a[0]);

	printf("Enter ele : \n");
	for(i=0;i<ele;i++)
	{
		scanf("%d",&a[i]);
	}

	lrg=a[0];
	for(i=1;i<ele;i++)
	{
		if(a[i]>lrg)
		{
			lrg=a[i];
		}
	}
	printf("Large ele in this given array is : %d\n",lrg);
}
