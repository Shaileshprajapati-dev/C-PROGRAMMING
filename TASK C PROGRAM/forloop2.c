// wap to same of all number 
#include<stdio.h>
void main()
{
	int i,n,sum=0;
	printf("enter last series of number:");
	scanf("%d,&n");
	for(i=1;i<=n;i++)
	{
		if(i%3!=0)
		sum=sum+1;
	}
}
