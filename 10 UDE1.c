// wap with a UDF to add number 
#include<stdio.h>
void add()        // definition of udf 
{
	int n1,n2;
	printf("enter two number :");
	scanf("%d%d",&n1,&n2);
	printf("result =%d",(n1+n2));
	
}
void main()
{
	add(); // calling of udf 
	
	add();
}
