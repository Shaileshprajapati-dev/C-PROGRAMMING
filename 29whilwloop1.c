// wap to print digit of A number in seprate lines 
#include<stdio.h>
void main()
{
	int num;
	printf("enter a number :");
	scanf("%d",&num);
	while(num>0)
	{
		printf("ok\n");
		num=num/10;
	}
	
}
