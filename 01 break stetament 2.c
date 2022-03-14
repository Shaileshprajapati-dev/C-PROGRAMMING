// wap to print only 4 even number within a given series .

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
	if(i%2==0)
	{
	
	printf("%d\n",i);
	count++;
}
	if(count==4)
	break;	
	}
	
}
