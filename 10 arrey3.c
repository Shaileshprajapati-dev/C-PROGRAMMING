// wap to input 10 element of arrey and print value is present of value and arrey
#include<stdio.h>
void main()
{
		int arr[10],index,val;
	printf("enter 10 number : ");
	for(index=0;index<=9;index++)
	{
		scanf("%d",&arr[index]);
		
	}
	printf("input a value to search in arrey ");
	scanf("%d",&val);
	for(index=0;index<=9;index++)
	{
		if(arr[index]==val)
		{
		
		printf("matched on index : %d",arr[index]);
		break;
	}
	}
	if(index==10)
	
	printf("index is:%d",arr[index]);
}
