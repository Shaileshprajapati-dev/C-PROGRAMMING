// wap to print only 5 numbere the is divisible by 3 and 5 both within a given series
#include<stdio.h>
void main()
{
	int i,n,count=0;
	printf("enter starting of series:");
	scanf("%d",&i);
	printf("enter the ending of series :");
	scanf("%d",&n);
	for( ;i<=n;i++)
	{
	if(i%3==0 && i%5==0)
	{
	
	printf("%d\n",i);
	count++;
}
	if(count==4)
	break;	
	}
}
