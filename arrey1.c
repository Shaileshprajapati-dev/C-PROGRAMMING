// wap to input 10 element andfind sum of all
#include<stdio.h>
void main()
{
	int arr[10],i,sum=0;
	printf("enter 10 number :");
	for(i=0;i<=9;i++)
	{
		scanf("%d",&arr[i]);
			sum=sum+arr[i];
//	}
//	for(i=0;i<=9;i++)
//	{
//		sum=sum+arr[i];
	}
	printf("sum of all =%d",sum);
}
