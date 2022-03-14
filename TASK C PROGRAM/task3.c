//wap to input rupees from the user and find how many notes of 200 and 50
#include<stdio.h>
void main()
{
	int a,b,c,d,e,f;
	printf("enter to check how many note of 200 & 50 :");
	scanf("%d",&a);
	b=a%200;
	printf("\nNo of 200 note : %d",a/200);
	c=b/50;
	d=b%50;
	printf("\nNo of 50 note : %d",c);
	e=d/20;
	printf("\nNo of 20 note : %d",e);
	f=e%10;
	printf("\nNo of 10 note : %d",f);
	
}

