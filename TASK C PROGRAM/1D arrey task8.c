#include<stdio.h>
void main()
{
	int a[10],i,j,count=0;
	printf("enter the 10 number :");
	for(i=0;i<=9;i++)
	scanf("%d",&a[i]);
	
	for(i=0;i<=9;i++)
	{
		count=0;
		for(j=i+1;j<=9;j++)
		{
			if(a[i]==a[j])
			{
			
			count++;
		}
	}
		if(count==0)
		printf("%d  ",a[i]);
	}
}
