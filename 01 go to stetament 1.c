// wap to print a number and print is even or odd till user input a neg number
#include<stdio.h>
void main()
{
    int num;
    start:
	printf("enter the number ");
	scanf("%d",&num);
	if(num<0)
	goto end;
	if(num%2==0)
	printf("even\n");
	else
	printf("odd\n");
	goto start;	
	end:
		printf("###################");
}
