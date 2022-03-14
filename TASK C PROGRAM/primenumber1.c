// wap to ckeck a given is a prime number or not
// 1-13,1,13
// 6: 1-13 : 1,2,3,6
#include<stdio.h>
void main()
{
	int i,num,count=0;
	printf("enter a number to check prime :");
	scanf("%d",&num);
	for(i=2;i<num;i++)
	{
		if(num%i==0)
		count++;
	}
	if(count==0)
	printf("%d is a prime number ",num);
	else
	printf("%d is not a prime numer ",num);
	
  
}
