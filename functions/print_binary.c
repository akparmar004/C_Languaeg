#include<stdio.h>

void print_binary(int,int);
void main()
{
	int num;
	
	printf("Enter the number : ");
	scanf("%d",&num);
	print_binary(num,31);
	
	printf("\n");
	
}

void print_binary(int n,int pos)
{
	
	if(pos>=0)
	{
		printf("%d",n>>pos&1);
		print_binary(n,pos-1);	
	}
	else{
		return;
	}
	

}
