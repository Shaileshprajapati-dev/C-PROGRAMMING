#include<stdio.h>
struct student
{
	int rollno;
	char name[20];
}s1;
void main()
{
	printf("enter :");
	scanf("%d",&s1.rollno);
	fflush(stdin);
	gets(s1.name);
	s1.rollno=s1.rollno+10;
	printf("no =%d name=%s",s1.rollno,s1.name);
}
