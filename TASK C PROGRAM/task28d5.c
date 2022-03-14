// wap to print digit all digit of number 45:4+5
#include<stdio.h>
void main()
{
	int i,rem,num,sum;
	printf("enter 2 digit number :");
	scanf("%d",&i);
	rem=i%10;
	num=i/10;
	sum=rem+num;
	printf("total of two number is %d:",sum);
	
}
