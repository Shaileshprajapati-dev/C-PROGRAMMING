// wap to check a year is  a leap year or not 
// divide remainder bache 0 year%4=0,1,2,3
#include<stdio.h>
void main ()
{
	int year ;
	printf("enter a year to check it is leap or not\n");
	scanf("%d",&year); //year=? true -2022
	
	if(year%4==0 && year>2000)
	{
		printf("\nyes it is a leap year");
	}
}
