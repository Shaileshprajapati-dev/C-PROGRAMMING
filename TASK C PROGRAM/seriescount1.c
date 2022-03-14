// wap we have to count something in loop 
#include<stdio.h>
void main()
{
	int i,n,count=0;
	printf("enter last vlue of series :");
	scanf("%d",&n); //10
	for(i=1;i<=n;i++) // 3,6,9
	{
		if(i%5==0)
		count++;
	}
	printf("total value divided by 3 is: %d",count);
}
