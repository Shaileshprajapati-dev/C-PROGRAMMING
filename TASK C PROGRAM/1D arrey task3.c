// wap to find smallest number within 10 element.
#include<stdio.h>
void main()
{
	int arr[10],i,temp;
	printf("enter the 10 number \n:");
	for(i=0;i<=9;i++)
	{
		scanf("%d",&arr[i]);
		if(arr[i]<temp)
		{
			temp=arr[i];
		}
	}
		printf("the small number :%d",temp);
	
}
