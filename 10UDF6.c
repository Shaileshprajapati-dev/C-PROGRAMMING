// wap to print a factorial number 
#include<stdio.h>
void getfact(int num)
{
	int i,mul=1;
	for(i=1;i<=num;i++)
	{
		mul=mul*i;
	}
	printf("factorial =%d",mul);
	
}
void main()
{
	int a;
	printf("enter a number to find fact ");
	scanf("%d",&a);
	getfact(a);
}
