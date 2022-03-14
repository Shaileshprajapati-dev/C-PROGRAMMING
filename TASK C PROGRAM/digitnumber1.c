// wap to enter a 2 digit number and find sum of digit 
#include<stdio.h>
void main()
{
	int num,rem,sum=0;
	printf("enter a 3 digit number :");
	scanf("%d",&num); 
	for( ;num>0;num=num/10)
{
	count++;
	rem=num%10;
//	printf("%d\n",rem);
	sum=sum+rem;
		
}
printf("%d\n",sum);
printf("total digit is :%d",count);
	//rem=num%10;
	//sum=sum+rem;//0+7
	//num=num/10; //56
	
	//rem=num%10;
	//sum=sum+rem; //
	
 } 
