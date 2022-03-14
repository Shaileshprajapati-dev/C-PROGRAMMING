// wap to input 10 element and find sum of all 
#include<stdio.h>
void main()
{
	int arr[10],sum=0,index;
	printf("enter the sum number :");
	for(index=0;index<=9;index++)
	{
		scanf("%d",&arr[index]);
		sum = sum+ arr[index];
		
	}
	printf(" sum of array : %d",sum);
	 
}
