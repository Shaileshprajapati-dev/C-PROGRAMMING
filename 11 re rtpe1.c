// wap with a UDF to number udf shiuld be return type and  no passing parameter 
#include<stdio.h>
int addition()
{
	int a,b,res;
	printf("enter two number ");
	scanf("%d%d",&a,&b);
	res=a+b;
	return res;
	
}
void main()
{
//	int a,b;
//	printf("\nlenght of string is %d",printf("hello")); //
	printf("addition =%d",addition());
}
