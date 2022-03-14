#include<stdio.h>
#include<conio.h>
void main()
{
	int a=10, b=20;
	printf("enter the of value A:");
	printf("\nenter the of value B:");
	scanf("%d%d",&a,&b);
	printf("a=%d",--a);
	printf("b=%d \n ",b++);
	printf("\nnest time of a%d:",a);
	printf("\nnext time of b%d:",b);
}
