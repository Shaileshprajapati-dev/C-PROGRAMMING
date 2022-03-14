#include<stdio.h>
int getfact(int num)
{
	int fact=1,i;
	for(i=1;i<=num;i++)
	{
		fact=fact*i;
	}
	return fact;
	
}
void main ()
{
	int n,r,ncr,factn,factr,factnr;
	printf(" enter value of n and r to calculate :");
	scanf("%d%d",&n,&r);
	factn=getfact(n);
	factr=getfact(r);
	factnr=getfact(n-r);
	ncr=factn/(factr*factnr);
	printf("NCR =%d",ncr);
}
