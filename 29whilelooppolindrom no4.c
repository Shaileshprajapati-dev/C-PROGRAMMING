// wap to input a number and check the number is polindrom or not 
#include<stdio.h>
void main()
{
	int num ,sum=0,rem,temp;
	printf("enter a number to check polindrom :");
	scanf("%d",&num); //578
	temp=num;
	while(num>0)
	{
		rem=num%10; // rem=2
		sum=sum*10+rem; //sum=3 ,3*10+2
		num=num/10;  //num=2 2/10=0
	
	} 
	if(temp==sum)
	printf("number is a polindrom number ");
	else 
	printf("number is  not a polindrom number ");
}
