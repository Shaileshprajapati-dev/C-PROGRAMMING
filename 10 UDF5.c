// wap to print cube of a number by using UDF
#include<stdio.h>
void cube()
{
	int cube ,i;
	printf("enter a number :");
	scanf("%d",&i);
	cube=i*i;
	printf("cube number %d",cube);
}
void main()
{
	int i;
	printf("cube in result=");
	cube(i);
}
