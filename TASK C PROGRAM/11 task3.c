// wap to get NCR
#include<stdio.h>
void ncr()       // no terurn type with no argument
{
	int fact=1,i,n,r,ncr;
	printf("enter numebr for fact:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
		
	}
	printf("factorial :%d",fact);
	printf(" enter the value :");
	scanf("%d",&r);
	ncr=fact/(r*(n-r));
	printf("ncr value is :%d",ncr);
	
}
void main()
{
	ncr();
}
