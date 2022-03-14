#include<stdio.h>
void main()
{
	// 22 5 7 8 9 56 8 5 5 34
	//5
	int a[10],i,v,count=0;
	printf("enter 10 element of array :");
	for(i=0;i<=9;i++)
	scanf("%d",&a[i]);
	
	
	printf("enter a number to search in array :");
	scanf("%d",&v);
	
	printf("value is present at :");
	for(i=0;i<=9;i++)
	{
		if(a[i]==v)
		{
			printf("%d  ",i+1);
			count++;
		}
	}
	printf("position in array ");
	printf("\n total %d time %d present in array ",count,v);
}
