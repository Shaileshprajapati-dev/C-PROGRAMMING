// wap with a UDF to multiple  two number 
#include<stdio.h>
void add(int n1, int n2)
{
	printf("\nResult =%d",(n1-n2));
	
}
void main()
{
	int n1,n2;
	printf("enter two number :");
	scanf("%d%d",&n1,&n2);
//	printf("main function is here .........");
	add(n1,n2);
}
