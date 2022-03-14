#include<stdio.h>
void main()
{
	int a=10, b=50, c=100;
	printf("enter the value 3 time :");
		
	scanf("%d%d%d",&a,&b,&c);
	printf("\n%d a: ",a++);
	printf("b=%d \n ",++b);
	printf("c=%d \n ",++c);
	
	printf("\nnext time value %d",a);
}
