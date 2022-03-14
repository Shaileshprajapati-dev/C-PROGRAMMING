// wap to input two number and print addition while user choice is 1
#include<stdio.h>
void main()
{
	int n1,n2,ch;
	do
	{
		printf("enter two number:");
		fflush(stdin);
		scanf("%d%d",&n1,&n2);
		printf("addition is:%d\n",
	    (n1+n2));
		printf("do you agen wait to add : press1 :");
		fflush(stdin);
		scanf("%d",&ch);
		
	}while(ch==1);
}
