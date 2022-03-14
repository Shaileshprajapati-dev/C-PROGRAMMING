// wap to arrenga of array to assending order
#include<stdio.h>
void arrangearray(int arr[]) ///// no return with  argument
{
	int i,j,temp;
	for(i=0;i<=9;i++)
	{
		for(j=i;j<=9;j++)
		{
			if(arr[j]<arr[i])
			{
				temp=arr[i];
				arr[i]=arr[j];
				temp=arr[j];
			}
		}
		printf(" %d ",arr[i]);
	}
}

void main()
{
	int arr[10],i,a;
	for(i=0;i<=9;i++)
	{
		printf(" enter %d number of array :",i+1);
		scanf(" %d",&arr[i]);
	}
	arrangearray(arr);
}
