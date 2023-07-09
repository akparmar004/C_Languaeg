#include<stdio.h>
void main()
{
	//if even number do addition of it and id odd do product of all of it...
	 int a[10];
	 int product=1,addition=0,i;
	
	 printf("Enter 10 numbers : ");
	 for(i=0;i<10;i++)
	 {
	 	scanf("%d",&a[i]);
	 }	
	  
	 for(i=0;i<10;i++)
	 {
	 	if(a[i] % 2 == 0)
	 	{
	 		addition = addition + a[i];
	 	}
	 	else
	 	{
	 		product = product * a[i];
	 	}
	 }
	 
	 printf("Product of all odd numbers : %d\nAddition of all even numbers is : %d\n",product,addition);
	 
	 
}
