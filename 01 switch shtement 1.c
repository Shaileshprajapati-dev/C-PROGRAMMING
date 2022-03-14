// wap to input a number of only and print name of day
//1-monday
//2-tuesday
#include<stdio.h>
void main()
{
	int day;
	printf("enter the number of day:");
	scanf("%d",&day);
	switch(day)
	{
		case 1:
			printf("this is monday");
			break;
		case 2:
		    printf("this is tuesday");
			break;
		case 3:
		    printf("this is wednesday");
			break;		
		case 4:
		    printf("this is thursday");
			break;		
		case 5:
		    printf("this is friday");
			break;		
		case 6:
		    printf("this is satureday");
			break;	
		case 7:
		    printf("this is sunday");
			break;
		default:
	    	printf("invalid day number ");	
	}
}
