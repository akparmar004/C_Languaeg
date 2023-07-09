#include<stdio.h>
void main()
	 {
		char a[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
                       int i,*p = a;
                       for(i=0;i<5;i++)
                       printf("%c\t",*p++);
	 }
