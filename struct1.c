// how to input 10 student name and age and print student is eligible to voting  or not with name 
#include<stdio.h>
struct vote
{
	int age;
	char name[20];
 } ;
 void main()
 {
 	struct vote s[10];
 	int i;
 	for(i=0;i<=9;i++)
 	{
 		printf("enter age of %d student:",i+1);
 		scanf("%d",&s[i].age);
 		printf("\n enter name %d student :",i+1);
 		fflush(stdin);
 		gets(s[i].name);
	 }
	 for(i=0;i<=9;i++)
	 {
	 	if(s[i].age>=18)
	 	printf("\n%s is eligible vote ",s[i].name);
	 }
 }
