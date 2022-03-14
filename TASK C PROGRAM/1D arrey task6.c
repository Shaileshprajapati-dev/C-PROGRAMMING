#include<stdio.h>
void main()
{
	int a[10],i,j,temp;
	printf("enter the value \n:");
	for(i=0;i<=9;i++)
	{
	printf("enter %d no:",i+1);
	scanf("%d",&a[i]);
	}
	for(j=0;j<=9;j++)
	{
		for(j=0;j<=9;j++)
		{
				if(a[j]<a[i])
		{
			temp=a[i];
			a[i]=a[j];

			a[j]=temp;
		}
		}
	}
	for(i=0;i<=9;i++)
	{
	
	printf("%d  ",a[i]);
}
}		
	
