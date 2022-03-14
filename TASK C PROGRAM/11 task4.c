// wap to print a polidrome number 
#include<stdio.h>
void poli()     // no return type with no argument 
{
	int n,r,sum,temp;
	printf("enter the number :");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		r=n%10;
		sum=(sum*10)+r;
		n=n/10;
	}
	if(temp==sum)
	printf("polidrome number :");
	else printf("not polidrome : ");
}
void main()
{
	poli();
}
