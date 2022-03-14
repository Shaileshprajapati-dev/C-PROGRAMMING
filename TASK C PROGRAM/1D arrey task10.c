#include<stdio.h>
void main()
{
	int a[10],i,res[5],pos=0;

	for(i=0;i<=9;i++)
	{
		printf(" enter %d number :" ,i+1);
		scanf("%d",&a[i]);
	}
	for(i=0;i<=9;i=i+2)
	{
		res[pos]=a[i]+a[i+1];
		pos++;
	}
	for(i=0;i<=4;i++)
	{
		printf(" new array\n ");
		printf("%d\n",res[i]);
	}
}
