// wap input integer value of temprature and print nature of weather 
#include<stdio.h>
void main()
{
	float tmp;
	printf("enter the temprature :");
	scanf("%f",&tmp);
    if(tmp>=0 && tmp<=0)
	{
		printf("temp is freezing : ");
	}
	else if(tmp>=0 && tmp<=10)
	{
		printf("temp is very cold : ");
	}
	else if(tmp>=11 && tmp<=40)
	{
		printf("temp is summer :");
	}
	else if(tmp>=40 && tmp<=50)
	{
		printf("temp is burning :");
	}
	else
	{
		printf("invalid temp :");
	}
}
