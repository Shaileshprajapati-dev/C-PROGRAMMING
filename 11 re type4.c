// wap to print last element of   array by using UDF 
#include<stdio.h>
void lastElement(int arr[])
{
	printf("enter element of using is :%d",arr[9]);
	
}
void main()
{
	int a[10],i;
	printf("enter ten element of array :");
	for(i=0;i<=9;i++)
	scanf("%d",&a[i]);
	lastElement(a);
}
