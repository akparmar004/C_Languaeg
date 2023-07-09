#include<stdio.h>
struct student
{
	int rollno;
	char grade;
};

void main()
{
	struct student x,y;
	x.rollno=1;
	y.rollno=2;
	
	x.grade='A';
	y.grade='E';
	
	struct student z = {3,'B'};
	printf("information of x :\nrollno : %d and grade : %c\n",x.rollno,x.grade);
	printf("information of y :\nrollno : %d and grade : %c\n",y.rollno,y.grade);
	printf("information of z :\nrollno : %d and grade : %c\n",z.rollno,z.grade);
	
}
