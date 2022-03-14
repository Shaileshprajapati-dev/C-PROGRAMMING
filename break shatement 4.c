// wap to print all even number  within a give series only if number is less than 100

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
	if(i%100==0)
	{
	
	printf("%d\n",i);
	count++;
}
	if(count==4)
	break;	
}
}
