// wap to check result status of student based on the percetage 
#include<stdio.h>
void main()
{
	float per;
	printf("enter your percentage :");
	scanf("%f",&per);
	if(per>=0 && per<=100)
	{
	if(per>=0 && per<=32)
	{
		printf("you are fail");
	}
	else if(per>=33 && per<=44)
	{
		printf("you are passed with third divison\n");
	}
	else if(per>=45 && per<=59)
	{	
		printf("you are passed with second divison\n");
	}
	else if(per>=60 && per<=100)
	{
		printf("you are congraturation!!");
	}
}
	else
	{
		printf("invailid percentage:");
	}
}

