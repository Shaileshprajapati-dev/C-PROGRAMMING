#include<stdio.h>
void main()
{
	int num,sum,rem;
	printf("enter a number :");
	scanf("%d",&num);
	while(num>0)
	{
		rem=num%10; //1
		printf("%d",rem);
		num=num/10;
		sum=sum+rem;
	}
	printf("sum of digit =%d",sum);
}
